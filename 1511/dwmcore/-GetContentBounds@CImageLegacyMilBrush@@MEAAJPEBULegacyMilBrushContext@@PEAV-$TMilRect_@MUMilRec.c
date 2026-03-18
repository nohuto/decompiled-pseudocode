/*
 * XREFs of ?GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001B240
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18005CEA0 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z @ 0x18005A0D0 (-GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005B3C0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetContentBounds(CImageLegacyMilBrush *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64); // rsi
  int Bounds; // eax
  unsigned int v8; // ebx
  int ContentToViewboxScale; // eax
  float v10; // xmm1_4
  float v12; // [rsp+50h] [rbp+8h] BYREF
  float v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 64);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(v3 + 8) + 112LL);
  if ( v6 == CCachedVisualImage::GetBounds )
    Bounds = CCachedVisualImage::GetBounds(v3 + 8, *(_QWORD *)(a2 + 192), 0LL, a3);
  else
    Bounds = v6(v3 + 8, *(_QWORD *)(a2 + 192), 0LL, a3);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x135u);
  }
  else
  {
    ContentToViewboxScale = CImageLegacyMilBrush::GetContentToViewboxScale(this, &v12, &v13);
    v8 = ContentToViewboxScale;
    if ( ContentToViewboxScale < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ContentToViewboxScale, 0x137u);
    }
    else
    {
      v10 = v13 * *(float *)(a3 + 12);
      *(float *)(a3 + 8) = v12 * *(float *)(a3 + 8);
      *(float *)(a3 + 12) = v10;
    }
  }
  return v8;
}
