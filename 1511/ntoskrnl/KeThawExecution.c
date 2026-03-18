/*
 * XREFs of KeThawExecution @ 0x1401C8F5C
 * Callers:
 *     ExpWaitForBootDevices @ 0x1402132EC (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     KeFlushCurrentTbImmediately @ 0x1401C6F30 (KeFlushCurrentTbImmediately.c)
 *     KiEndDebugAccumulation @ 0x1401C909C (KiEndDebugAccumulation.c)
 *     KiSendThawExecution @ 0x1401C93D4 (KiSendThawExecution.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v1; // bl
  __int64 v3; // rcx
  unsigned __int8 v4; // si
  __int64 result; // rax

  v1 = KdPortLocked;
  if ( (KiFreezeFlag & 8) != 0 )
    v1 = 0;
  off_1402D27A8();
  MEMORY[0xFFFFF78000000350] = KeQueryPerformanceCounter(0LL);
  LOBYTE(v3) = 1;
  KiInterruptTimeErrorAccumulator = 0LL;
  KiSendThawExecution(v3);
  v4 = KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v1 )
    KxReleaseSpinLock(&KdDebuggerLock);
  KeFlushCurrentTbImmediately();
  KiEndDebugAccumulation(KeGetCurrentPrcb());
  result = v4;
  __writecr8(v4);
  if ( a1 )
    _enable();
  return result;
}
