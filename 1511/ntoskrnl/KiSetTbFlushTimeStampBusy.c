/*
 * XREFs of KiSetTbFlushTimeStampBusy @ 0x1401C72DC
 * Callers:
 *     KxFlushNonGlobalTb @ 0x14007C310 (KxFlushNonGlobalTb.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetTbFlushTimeStampBusy(__int64 a1, __int64 a2, __int64 a3)
{
  return KxSetTimeStampBusy(&KiTbFlushTimeStamp, a2, a3);
}
