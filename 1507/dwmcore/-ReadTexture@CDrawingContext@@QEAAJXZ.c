/*
 * XREFs of ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1800F4424
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FB5A8 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FC388 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::ReadTexture(CDrawingContext *this)
{
  __int64 v1; // r14
  __int64 result; // rax

  v1 = *((_QWORD *)this + 44);
  result = 2291674884LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)v1 + 168LL))(
             *((_QWORD *)this + 44),
             *((_QWORD *)this + 47),
             (char *)this + 56);
  return result;
}
