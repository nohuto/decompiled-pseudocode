/*
 * XREFs of ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x180106360
 * Callers:
 *     ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x180107370 (-ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ProcessEnableClear(
        CHwndRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_TARGET_ENABLECLEAR *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 552) != v3 )
  {
    *((_BYTE *)this + 552) = v3;
    *((_BYTE *)this + 554) = 1;
  }
  return 0LL;
}
