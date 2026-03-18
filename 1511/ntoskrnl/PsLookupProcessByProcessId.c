/*
 * XREFs of PsLookupProcessByProcessId @ 0x1404D42D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     PfpCopyEvent @ 0x1404D3360 (PfpCopyEvent.c)
 *     PfpRpControlRequestUpdate @ 0x1404D4144 (PfpRpControlRequestUpdate.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x1404F4438 (PopDiagTraceAppPowerMessage.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x1405E1054 (CmpDumpOneKeyBody.c)
 *     PnpLogVetoInformation @ 0x14060E6D4 (PnpLogVetoInformation.c)
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
 *     ViCreateProcessCallbackInternal @ 0x1406C4FA4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsProcessInSilo @ 0x14009E1A0 (PsIsProcessInSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400F45B8 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140436CB0 (PspReferenceCidTableEntry.c)
 *     PsGetCurrentSilo @ 0x1404D436C (PsGetCurrentSilo.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v4; // rbx
  __int64 CurrentSilo; // rax
  void *v6; // rdi
  __int64 v7; // rdx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = PspReferenceCidTableEntry((__int64)ProcessId, 3);
  if ( !v4 )
    goto LABEL_7;
  CurrentSilo = PsGetCurrentSilo();
  v6 = (void *)CurrentSilo;
  if ( (*((_DWORD *)v4 + 193) & 0x4000000) != 0 )
  {
    v7 = CurrentSilo;
    goto LABEL_4;
  }
  _InterlockedOr(v9, 0);
  if ( (*((_QWORD *)v4 + 91) & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((unsigned __int64 *)v4 + 91);
  if ( (*((_DWORD *)v4 + 193) & 0x4000000) != 0 )
  {
    v7 = (__int64)v6;
LABEL_4:
    if ( PsIsProcessInSilo((struct _KPROCESS *)v4, v7) )
      goto LABEL_5;
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  v4 = 0LL;
LABEL_5:
  if ( v6 )
    ObfDereferenceObject(v6);
LABEL_7:
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v4 )
    return -1073741813;
  *Process = (PEPROCESS)v4;
  return 0;
}
