/*
 * XREFs of ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE608
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004AF20 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x1800EEE90 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 * Callees:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E148 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x1800DE6B8 (-IsDisabled@CDirtyRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirtyRegion::Add(CDirtyRegion *this, CBitmapOfDeviceBitmaps *a2, char a3, float *a4)
{
  unsigned int v8; // esi
  int v9; // ebx
  CDirtyRegion *v10; // rcx
  int v11; // eax

  v8 = 0;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a4) )
  {
    v9 = *((_DWORD *)this + 248);
    CDirtyRegion::Initialize(this, *((_QWORD *)this + 2), (CDirtyRegion *)((char *)this + 996), 1);
    *((_DWORD *)this + 248) = v9;
  }
  if ( !CDirtyRegion::IsDisabled(this) )
  {
    v11 = CDirtyRegion::_Add(v10, a2, a3, a4);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1C3u);
  }
  return v8;
}
