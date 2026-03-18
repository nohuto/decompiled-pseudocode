/*
 * XREFs of ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F4C14
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800DBE20 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800222D4 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x1800E28F8 (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 */

__int64 __fastcall CDrawingContext::RedrawVisual(CComposition **this, struct MilRectF *a2)
{
  float v4; // xmm11_4
  float v5; // xmm1_4
  float v6; // xmm9_4
  float v7; // xmm1_4
  float v8; // xmm10_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm1_4
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // esi
  float *v15; // rdi
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  int v21; // eax
  struct _D3DCOLORVALUE v23; // [rsp+38h] [rbp-79h] BYREF
  __int128 X; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v25[64]; // [rsp+58h] [rbp-59h] BYREF

  CComposition::CurrentRedrawRegionColor(this[3], &v23);
  CBaseMatrix::Invert((CBaseMatrix *)v25, (const struct CBaseMatrix *)(this + 692));
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)v25, a2, (struct MilRectF *)&X);
  LODWORD(v4) = X;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
  if ( v5 < 8388608.0 )
    v4 = (float)(int)floorf_0(*(float *)&X);
  v6 = *((float *)&X + 1);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 1)) & _xmm);
  if ( v7 < 8388608.0 )
    v6 = (float)(int)floorf_0(*((float *)&X + 1));
  v8 = *((float *)&X + 2);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 2)) & _xmm);
  if ( v9 < 8388608.0 )
    v8 = (float)(int)ceilf_0(*((float *)&X + 2));
  v10 = *((float *)&X + 3);
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 3)) & _xmm);
  if ( v11 < 8388608.0 )
    v10 = (float)(int)ceilf_0(*((float *)&X + 3));
  v12 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)this,
          0LL,
          (const struct CMILMatrix *)(this + 692),
          0,
          0);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = 0;
    v15 = (float *)(this + 726);
    while ( 1 )
    {
      v16 = *(v15 - 2);
      v17 = v4;
      v18 = v6;
      *(_QWORD *)&X = __PAIR64__(LODWORD(v6), LODWORD(v4));
      v19 = v8;
      v20 = v10;
      *((_QWORD *)&X + 1) = __PAIR64__(LODWORD(v10), LODWORD(v8));
      if ( v16 > v4 )
      {
        v17 = v16;
        *(float *)&X = v16;
      }
      if ( *(v15 - 1) > v6 )
      {
        v18 = *(v15 - 1);
        *((float *)&X + 1) = v18;
      }
      if ( v8 > *v15 )
      {
        v19 = *v15;
        *((float *)&X + 2) = *v15;
      }
      if ( v10 > v15[1] )
      {
        v20 = v15[1];
        *((float *)&X + 3) = v20;
      }
      if ( v19 <= v17 || v20 <= v18 )
        X = 0uLL;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&X) )
      {
        v21 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, &X, &v23);
        v13 = v21;
        if ( v21 < 0 )
          break;
      }
      ++v14;
      v15 += 4;
      if ( v14 >= 8 )
        goto LABEL_28;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x26D0u);
LABEL_28:
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x26C6u);
  }
  return v13;
}
