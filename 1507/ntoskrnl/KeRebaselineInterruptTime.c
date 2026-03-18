/*
 * XREFs of KeRebaselineInterruptTime @ 0x14014D970
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
