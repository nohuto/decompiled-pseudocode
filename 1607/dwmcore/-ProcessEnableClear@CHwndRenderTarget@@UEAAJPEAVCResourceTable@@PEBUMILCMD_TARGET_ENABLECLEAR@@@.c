/*
 * XREFs of ?ProcessEnableClear@CHwndRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x18011C800
 * Callers:
 *     ?ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR@@@Z @ 0x18011DD30 (-ProcessEnableClear@CDesktopRenderTarget@@UEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_ENABLECLEAR.c)
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
  if ( *((_BYTE *)this + 744) != v3 )
  {
    *((_BYTE *)this + 744) = v3;
    *((_BYTE *)this + 747) = 1;
  }
  return 0LL;
}
