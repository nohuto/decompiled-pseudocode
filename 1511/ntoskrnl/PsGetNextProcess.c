/*
 * XREFs of PsGetNextProcess @ 0x14044B810
 * Callers:
 *     MiEmptyAccessLogs @ 0x140116604 (MiEmptyAccessLogs.c)
 *     ExGetNextProcess @ 0x14044B7C8 (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x1404F3D3C (NtGetNextProcess.c)
 *     PsEnumProcesses @ 0x14050085C (PsEnumProcesses.c)
 *     PfpRpControlRequestReset @ 0x14054D258 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x1405EE548 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1405FBA88 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140602B0C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x14063EF08 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140641720 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x140641908 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1406612D8 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListShared @ 0x14009253C (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14009257C (PspLockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v3; // rbp
  int v4; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0;
  PspLockProcessListShared((__int64)CurrentThread);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[94];
  while ( v5 != &PsActiveProcessHead )
  {
    v3 = v5 - 94;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 94)) )
    {
      v4 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v3 & -(__int64)(v4 != 0);
}
