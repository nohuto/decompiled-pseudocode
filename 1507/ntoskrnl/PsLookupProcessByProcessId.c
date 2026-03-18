/*
 * XREFs of PsLookupProcessByProcessId @ 0x1405114D8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PfpRpControlRequestUpdate @ 0x140455444 (PfpRpControlRequestUpdate.c)
 *     PfpCopyEvent @ 0x1404F7970 (PfpCopyEvent.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceAppPowerMessage @ 0x140568864 (PopDiagTraceAppPowerMessage.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     CmpDumpOneKeyBody @ 0x140656C00 (CmpDumpOneKeyBody.c)
 *     EtwpUpdatePerProcessTracing @ 0x1406E28A8 (EtwpUpdatePerProcessTracing.c)
 *     ViCreateProcessCallbackInternal @ 0x1407467D0 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x140050120 (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceCidTableEntry @ 0x140511690 (PspReferenceCidTableEntry.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  PEPROCESS *v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r9
  void *CurrentSilo; // r14
  __int16 v7; // ax
  __int64 v9; // rbp
  __int64 v10; // r9
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Process;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v4 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v4 )
  {
    CurrentSilo = (void *)PsGetCurrentSilo();
    if ( (*(_DWORD *)(v4 + 772) & 0x4000000) == 0 )
    {
      _InterlockedOr(v11, 0);
      if ( (*(_QWORD *)(v4 + 728) & 1) != 0 )
      {
        v9 = KeAbPreAcquire(v4 + 728, 0LL, 0LL, v5);
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 728), v9, v4 + 728, v10);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        ExfReleasePushLockExclusive((volatile signed __int64 *)(v4 + 728));
        if ( v9 )
          KeAbPostRelease(v4 + 728);
      }
      if ( (*(_DWORD *)(v4 + 772) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v4, (__int64)CurrentSilo) )
      {
        ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
        v4 = 0LL;
      }
    }
    if ( CurrentSilo )
      PspDereferenceSiloObject(CurrentSilo);
  }
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v3 = (PEPROCESS)v4;
  return 0;
}
