/*
 * XREFs of ?EndOfFrame@CHwDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0B60
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180038C60 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDrawListCacheEvents::EndOfFrame(CHwDrawListCacheEvents *this, struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(this, &ENDFRAME_HW_DRAWLIST_CACHE_STATS, *((unsigned int *)a2 + 15), *((unsigned int *)a2 + 16));
}
