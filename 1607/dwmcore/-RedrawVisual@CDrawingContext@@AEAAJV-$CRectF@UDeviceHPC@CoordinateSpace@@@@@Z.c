/*
 * XREFs of ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180124FC0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1801071B0 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180116A08 (-CurrentRedrawRegionColor@CComposition@@QEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18011C270 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@.c)
 */

__int64 __fastcall CDrawingContext::RedrawVisual(CComposition **this)
{
  __int64 v2; // r9
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned int v14; // edi
  int v15; // eax
  __int128 v17; // [rsp+38h] [rbp-69h] BYREF
  int v18; // [rsp+48h] [rbp-59h]
  int v19; // [rsp+4Ch] [rbp-55h]
  unsigned int v20; // [rsp+50h] [rbp-51h]
  _BYTE v21[64]; // [rsp+58h] [rbp-49h] BYREF
  int v22; // [rsp+98h] [rbp-9h]
  __int128 X; // [rsp+A8h] [rbp+7h] BYREF
  struct _D3DCOLORVALUE v24; // [rsp+B8h] [rbp+17h] BYREF

  CComposition::CurrentRedrawRegionColor(this[3], &v24);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v17 = 0LL;
  CMILMatrix::SetToInverse((CMILMatrix *)v21, (const struct CMILMatrix *)(this + 782));
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, v2, (float *)&X);
  v3 = *(float *)&X;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
  if ( v4 < 8388608.0 )
    v3 = (float)(int)floorf_0(*(float *)&X);
  *(float *)&X = v3;
  v5 = *((float *)&X + 1);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 1)) & _xmm);
  if ( v6 < 8388608.0 )
    v5 = (float)(int)floorf_0(*((float *)&X + 1));
  v7 = *((float *)&X + 2);
  *((float *)&X + 1) = v5;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 2)) & _xmm);
  if ( v8 < 8388608.0 )
    v7 = (float)(int)ceilf_0(*((float *)&X + 2));
  v9 = *((float *)&X + 3);
  *((float *)&X + 2) = v7;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&X + 3)) & _xmm);
  if ( v10 < 8388608.0 )
    v9 = (float)(int)ceilf_0(*((float *)&X + 3));
  *((float *)&X + 3) = v9;
  v11 = CDrawingContext::PushTransformInternal(
          (CDrawingContext *)this,
          0LL,
          (const struct CMILMatrix *)(this + 782),
          0,
          0);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x26A5u);
  }
  else
  {
    v13 = (__int64)this[56];
    if ( v13 )
    {
      CHwndRenderTarget::GetIntersectingRedrawRects(v13, (__int64)&X, (__int64)&v17);
      v14 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          X = *(_OWORD *)(v17 + 16LL * v14);
          v15 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)this, (struct MilRectF *)&X, (__int64)&v24);
          v12 = v15;
          if ( v15 < 0 )
            break;
          if ( ++v14 >= v20 )
            goto LABEL_16;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x26ADu);
      }
    }
LABEL_16:
    CDrawingContext::PopTransformInternal((CDrawingContext *)this, 0);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v17);
  return v12;
}
