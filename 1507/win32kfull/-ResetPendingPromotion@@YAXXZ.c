/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C023A79C
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0239FBC (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C023A404 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0322D08 )
    *(_DWORD *)(qword_1C0322D08 + 1000) = 0;
  word_1C0322D00 = 0;
  dword_1C0322D04 = 0;
  qword_1C0322D08 = 0LL;
  dword_1C0322D10 = 0;
}
