/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C023241C
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0231C94 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C0232084 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0328C98 )
    *(_DWORD *)(qword_1C0328C98 + 1000) = 0;
  word_1C0328C90 = 0;
  dword_1C0328C94 = 0;
  qword_1C0328C98 = 0LL;
  dword_1C0328CA0 = 0;
}
