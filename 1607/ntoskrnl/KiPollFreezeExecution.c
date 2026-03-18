/*
 * XREFs of KiPollFreezeExecution @ 0x1400B5634
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
