/*
 * XREFs of KiSetTbFlushTimeStampBusy @ 0x1401D6288
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140030C90 (KxFlushNonGlobalTb.c)
 * Callees:
 *     <none>
 */

char KiSetTbFlushTimeStampBusy()
{
  return KxSetTimeStampBusy(&KiTbFlushTimeStamp);
}
