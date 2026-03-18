/*
 * XREFs of PsGetNextProcess @ 0x14050D584
 * Callers:
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x14041C0E4 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x14050D53C (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x14056803C (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1405C4684 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140666AD0 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406761D0 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14067D92C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x1406BFE5C (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1406C3C40 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1406C3E28 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1406E4310 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v6; // r14
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PspActiveProcessLock, v8, (ULONG_PTR)&PspActiveProcessLock, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v10 = (__int64 *)Object[94];
  while ( v10 != &PsActiveProcessHead )
  {
    v6 = v10 - 94;
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 94)) )
    {
      v7 = 1;
      break;
    }
    v10 = (__int64 *)*v10;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  v11 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v11;
  if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v6 & -(__int64)(v7 != 0);
}
