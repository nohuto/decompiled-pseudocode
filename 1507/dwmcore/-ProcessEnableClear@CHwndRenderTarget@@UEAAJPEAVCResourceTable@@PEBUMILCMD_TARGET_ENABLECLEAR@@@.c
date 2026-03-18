/*
 * XREFs of ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x1800EA570
 * Callers:
 *     ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x1800EB830 (-ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR.c)
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
  if ( *((_BYTE *)this + 240) != v3 )
  {
    *((_BYTE *)this + 240) = v3;
    *((_BYTE *)this + 561) = 1;
  }
  return 0LL;
}
