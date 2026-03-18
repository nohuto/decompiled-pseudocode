/*
 * XREFs of ?ProcessRecreateDisplaySet@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET@@@Z @ 0x1800EB8D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::ProcessRecreateDisplaySet(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_RECREATEDISPLAYSET *a3)
{
  if ( *((_DWORD *)this + 28) )
    *((_BYTE *)this + 257) = 1;
  return 0LL;
}
