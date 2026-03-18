/*
 * XREFs of KeThawExecution @ 0x14020657C
 * Callers:
 *     ExpWaitForBootDevices @ 0x140262A78 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KeFlushCurrentTbImmediately @ 0x140203C84 (KeFlushCurrentTbImmediately.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiSendThawExecution @ 0x140206CD0 (KiSendThawExecution.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v1; // bl
  __int64 v3; // rcx
  unsigned __int8 v4; // si
  struct _KPRCB *CurrentPrcb; // r9
  _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v7; // r10
  unsigned int CurrentFrequency; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = KdPortLocked;
  if ( (KiFreezeFlag & 8) != 0 )
    v1 = 0;
  off_1403218F8();
  MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v3) = 1;
  KiInterruptTimeErrorAccumulator = 0LL;
  KiSendThawExecution(v3);
  v4 = KiOldIrql;
  KiFreezeFlag = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiFreezeExecutionLock, retaddr);
  else
    _InterlockedAnd64(&KiFreezeExecutionLock, 0LL);
  if ( v1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
    else
      _InterlockedAnd64(&KdDebuggerLock, 0LL);
  }
  KeFlushCurrentTbImmediately();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->NestingLevel && !PoAllProcIntrDisabled )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    v7 = __rdtsc() - CurrentPrcb->StartCycles;
    CurrentPrcb->CycleTime += v7;
    if ( (CurrentThread->Header.Size & 0x20) != 0 )
    {
      CurrentFrequency = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb);
      v9 = 3LL;
      if ( CurrentFrequency / 0x19 < 3 )
        v9 = CurrentFrequency / 0x19;
      CurrentPrcb->Cycles[v9][CurrentPrcb->PowerState.Class] += v7;
    }
    v10 = (__int64)CurrentPrcb->CurrentThread;
    CurrentPrcb->StartCycles += v7;
    if ( (*(_BYTE *)(v10 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v10, 0);
  }
  result = v4;
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
