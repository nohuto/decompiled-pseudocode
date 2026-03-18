/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1800F39B0
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  __int64 v1; // rsi
  __int64 v2; // rcx

  v1 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    if ( v2 )
      v1 = v2 + 56;
    LODWORD(v1) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 376) + 48LL))(
                    *(_QWORD *)(v2 + 376),
                    v1);
  }
  return (unsigned int)v1;
}
