/*
 * XREFs of KiSetTbFlushTimeStampBusy @ 0x1401D60B4
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030810 (KxFlushNonGlobalTb.c)
 * Callees:
 *     <none>
 */

char KiSetTbFlushTimeStampBusy()
{
  return KxSetTimeStampBusy(&KiTbFlushTimeStamp);
}
