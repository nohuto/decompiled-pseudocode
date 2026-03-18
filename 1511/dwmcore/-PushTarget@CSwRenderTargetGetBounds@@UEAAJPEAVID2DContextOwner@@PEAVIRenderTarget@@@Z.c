/*
 * XREFs of ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180081C50
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::PushTarget(
        CSwRenderTargetGetBounds *this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  ++*((_DWORD *)this + 6);
  return 0LL;
}
