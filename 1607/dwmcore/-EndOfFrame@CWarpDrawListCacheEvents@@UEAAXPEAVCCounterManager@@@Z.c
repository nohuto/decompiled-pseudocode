/*
 * XREFs of ?EndOfFrame@CWarpDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0B40
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180038C60 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CWarpDrawListCacheEvents::EndOfFrame(CWarpDrawListCacheEvents *this, struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(this, &ENDFRAME_WARP_DRAWLIST_CACHE_STATS, *((unsigned int *)a2 + 17), *((unsigned int *)a2 + 18));
}
