/*
 * XREFs of KiPollFreezeExecution @ 0x1401318D4
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
