/*
 * XREFs of KiIsSecureProcessFlush @ 0x14001DECC
 * Callers:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B5D3C (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14010A628 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14012C860 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012F798 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsSecureProcessFlush(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && KeGetCurrentThread()->ApcState.Process->SecurePid;
}
