/*
 * XREFs of ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180043D80
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
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
