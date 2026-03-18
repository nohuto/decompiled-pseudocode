/*
 * XREFs of ?EndOfFrame@CWarpCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0BE0
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180038C60 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     Template_qqq @ 0x18011718C (Template_qqq.c)
 */

void __fastcall CWarpCallbackRendererEvents::EndOfFrame(CWarpCallbackRendererEvents *this, struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqq(
      (_DWORD)this,
      (unsigned int)&ENDFRAME_WARP_CALLBACK_RENDERER_STATS,
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9));
}
