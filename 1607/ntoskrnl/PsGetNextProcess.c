/*
 * XREFs of PsGetNextProcess @ 0x1404EBF8C
 * Callers:
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x1404993EC (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1404EBF44 (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x14053F9D8 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x140577F88 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x14061822C (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140625770 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CF44 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x14067D654 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14067FC00 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14067FE44 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockProcessListShared @ 0x1400C760C (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x1400C764C (PspLockProcessListShared.c)
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
