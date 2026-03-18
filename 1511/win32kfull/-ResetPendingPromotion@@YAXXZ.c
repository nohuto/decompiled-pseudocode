/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C023A970
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C023A194 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C023A5D8 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C03235F8 )
    *(_DWORD *)(qword_1C03235F8 + 992) = 0;
  word_1C03235F0 = 0;
  dword_1C03235F4 = 0;
  qword_1C03235F8 = 0LL;
  dword_1C0323600 = 0;
}
