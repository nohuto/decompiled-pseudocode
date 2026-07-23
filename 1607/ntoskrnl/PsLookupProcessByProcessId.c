/*
 * XREFs of PsLookupProcessByProcessId @ 0x14041F5C0
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1403E6534 (PfpRpControlRequestUpdate.c)
 *     PfpCopyEvent @ 0x1403E9400 (PfpCopyEvent.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140533184 (PopDiagTraceAppPowerMessage.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x1405FF768 (CmpDumpOneKeyBody.c)
 *     PnpLogVetoInformation @ 0x140642BC4 (PnpLogVetoInformation.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FFEC (EtwpUpdatePerProcessTracing.c)
 *     ViCreateProcessCallbackInternal @ 0x140711044 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x1400131FC (PsIsProcessInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x14041F760 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rbp
  __int16 v8; // ax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v5 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = CurrentServerSilo;
    if ( (*(_DWORD *)(v5 + 772) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v5, 0x746C6644u);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 728) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v5 + 728);
    if ( (*(_DWORD *)(v5 + 772) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v5, v7) )
      goto LABEL_14;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return -1073741813;
  *v2 = (PEPROCESS)v5;
  return 0;
}
