/*
 * XREFs of KeThawExecution @ 0x140083258
 * Callers:
 *     ExpWaitForBootDevices @ 0x14022D1F0 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 * Callees:
 *     KiEndDebugAccumulation @ 0x140083704 (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x140083DBC (KiSendThawExecution.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
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
