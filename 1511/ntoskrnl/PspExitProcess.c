/*
 * XREFs of PspExitProcess @ 0x1403E6F28
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     PfpLogApplicationEvent @ 0x14001B76C (PfpLogApplicationEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExCleanTimerResolutionRequest @ 0x1400F33B4 (ExCleanTimerResolutionRequest.c)
 *     DbgkFlushErrorPort @ 0x1403E7698 (DbgkFlushErrorPort.c)
 *     PspCallProcessNotifyRoutines @ 0x1403F6564 (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 *     PfSnEndProcessTrace @ 0x1404D62A0 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2, 3LL);
    result = *(unsigned int *)(a2 + 1724);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 1792) )
    {
      if ( (PerfGlobalGroupMask & 1) != 0 )
        EtwTraceProcess(a2);
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines(a2, 0LL, 0LL);
      result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v6 = *(void **)(a2 + 1120);
  if ( !v6 )
    goto LABEL_7;
  if ( v6 != (void *)1 )
  {
    result = ObfDereferenceObject(v6);
LABEL_7:
    *(_QWORD *)(a2 + 1120) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 772) < 0 )
      ExCleanTimerResolutionRequest((__int64)v6);
    DbgkFlushErrorPort(a2);
    result = PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      return PfSnEndProcessTrace(a2, 2LL);
  }
  return result;
}
