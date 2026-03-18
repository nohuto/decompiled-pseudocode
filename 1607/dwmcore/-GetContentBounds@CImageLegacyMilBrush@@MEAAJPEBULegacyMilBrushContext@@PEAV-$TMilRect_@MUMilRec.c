/*
 * XREFs of ?GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001D6E0
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180024750 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z @ 0x1800326A0 (-GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033840 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetContentBounds(CImageLegacyMilBrush *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64, _QWORD, __int64); // rax
  int Bounds; // eax
  unsigned int v9; // ebx
  int ContentToViewboxScale; // eax
  float v11; // xmm1_4
  float v13; // [rsp+40h] [rbp+8h] BYREF
  float v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 200);
  v6 = *((_QWORD *)this + 74) + 8LL;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 112LL);
  if ( v7 == CCachedVisualImage::GetBounds )
    Bounds = CCachedVisualImage::GetBounds(v6, v3, 0LL, a3);
  else
    Bounds = v7(v6, v3, 0LL, a3);
  v9 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x135u);
  }
  else
  {
    ContentToViewboxScale = CImageLegacyMilBrush::GetContentToViewboxScale(this, &v13, &v14);
    v9 = ContentToViewboxScale;
    if ( ContentToViewboxScale < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ContentToViewboxScale, 0x137u);
    }
    else
    {
      v11 = v14 * *(float *)(a3 + 12);
      *(float *)(a3 + 8) = v13 * *(float *)(a3 + 8);
      *(float *)(a3 + 12) = v11;
    }
  }
  return v9;
}
