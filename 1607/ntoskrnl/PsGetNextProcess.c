/*
 * XREFs of PsGetNextProcess @ 0x140508FFC
 * Callers:
 *     MiEmptyAccessLogs @ 0x140086B20 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x14049895C (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x140508FB4 (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x14053F498 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x140577A48 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140618178 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406256BC (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CE90 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x14067D570 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14067FB1C (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14067FD60 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1406A1FFC (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3258 (EtwQueryPerformanceTraceInformation.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006ADC0 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockProcessListShared @ 0x1400C976C (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x1400C97AC (PspLockProcessListShared.c)
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
