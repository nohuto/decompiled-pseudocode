/*
 * XREFs of ?ProcessSetClearColor@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARCOLOR@@@Z @ 0x180106390
 * Callers:
 *     ?ProcessSetClearColor@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARCOLOR@@@Z @ 0x180107430 (-ProcessSetClearColor@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETCLEARC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ProcessSetClearColor(
        CHwndRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_TARGET_SETCLEARCOLOR *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 552) == 0;
  *((_OWORD *)this + 14) = *(_OWORD *)((char *)a3 + 8);
  if ( !v3 )
    *((_BYTE *)this + 554) = 1;
  return 0LL;
}
