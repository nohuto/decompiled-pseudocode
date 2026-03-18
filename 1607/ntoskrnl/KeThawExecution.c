/*
 * XREFs of KeThawExecution @ 0x1400825DC
 * Callers:
 *     ExpWaitForBootDevices @ 0x14022D3C4 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x1406F2838 (KdExitDebugger.c)
 * Callees:
 *     KiEndDebugAccumulation @ 0x140082A84 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x14008313C (KiSendThawExecution.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D60A0 (KeFlushCurrentTbImmediately.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // bl
  __int64 v3; // rcx
  unsigned __int8 v4; // di
  __int64 result; // rax

  v2 = KdPortLocked;
  if ( (KiFreezeFlag & 8) != 0 )
    v2 = 0;
  off_1402F2448();
  if ( !PoAllProcIntrDisabled )
  {
    MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  LOBYTE(v3) = 1;
  KiSendThawExecution(v3);
  v4 = KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock(&KdDebuggerLock);
  KeFlushCurrentTbImmediately();
  KiEndDebugAccumulation(KeGetCurrentPrcb());
  result = v4;
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
