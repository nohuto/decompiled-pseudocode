/*
 * XREFs of ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012A44 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800BC9F0 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012EEB0 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CHDRConvertLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012F2F0 (-RenderLayer@CHDRConvertLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ReadTexture(CDrawingContext *this)
{
  __int64 v1; // r9
  __int64 result; // rax

  v1 = *((_QWORD *)this + 54);
  result = 2291674884LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)v1 + 176LL))(
             *((_QWORD *)this + 54),
             *((_QWORD *)this + 57),
             (char *)this + 128);
  return result;
}
