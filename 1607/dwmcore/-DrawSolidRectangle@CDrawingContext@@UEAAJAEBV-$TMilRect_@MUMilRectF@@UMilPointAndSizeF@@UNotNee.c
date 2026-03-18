/*
 * XREFs of ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180124FC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18006960C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006F15C (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x18008FEF0 (-DrawPath@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x180162644 (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangle(CDrawingContext *this, struct MilRectF *a2, __int64 a3)
{
  char v3; // r14
  int *v7; // rcx
  __int64 v8; // rdx
  char *v9; // rax
  int v10; // eax
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // r9
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, char *, char *, char *, _QWORD *); // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  const struct CMILMatrix *TopByReference; // rax
  unsigned int v23[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE *v25; // [rsp+70h] [rbp-29h] BYREF
  int v26; // [rsp+78h] [rbp-21h]
  int v27; // [rsp+7Ch] [rbp-1Dh]
  int v28; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v30; // [rsp+98h] [rbp-1h]
  _QWORD v31[2]; // [rsp+A0h] [rbp+7h] BYREF
  char v32; // [rsp+B0h] [rbp+17h] BYREF

  v3 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a3 + 12)) & _xmm) >= 0.0000011920929
    && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2) )
  {
    if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
    {
      v28 = 0;
      v30 = 0LL;
      v24[0] = &CRectanglesShape::`vftable';
      v26 = 1;
      v24[1] = v29;
      v25 = v29;
      v27 = 1;
      if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 128)) )
      {
        TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
        CMILMatrix::Transform2DBoundsWithBorderMode(TopByReference, a2, *((unsigned int *)this + 82), v31);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v24, (const struct MilRectF *)v31);
        CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v3 = 1;
      }
      else
      {
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v24, a2);
      }
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x3F5u);
      }
      else
      {
        v13 = *((_QWORD *)this + 54);
        v14 = (char *)this + 144;
        v15 = *((_QWORD *)this + 57);
        v16 = *(__int64 (__fastcall **)(__int64, __int64, char *, char *, char *, _QWORD *))(*(_QWORD *)v13 + 80LL);
        if ( (char *)v16 == (char *)CSwRenderTargetGetBounds::DrawPath )
          v17 = CSwRenderTargetGetBounds::DrawPath(
                  v13,
                  v15,
                  (char *)this + 128,
                  v14,
                  (char *)this + 3264,
                  v24,
                  0LL,
                  *((_QWORD *)this + 382),
                  *((_DWORD *)this + 88));
        else
          v17 = v16(v13, v15, (char *)this + 128, v14, (char *)this + 3264, v24);
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x402u);
      }
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v24);
    }
    else
    {
      v23[0] = 0;
      v31[0] = v24;
      v7 = &v28;
      v8 = 2LL;
      v31[1] = &v25;
      v9 = &v32;
      do
      {
        *(_QWORD *)v9 = v7;
        v7 += 4;
        v9 += 8;
        --v8;
      }
      while ( v8 );
      if ( CDrawingContext::CalcPartiallyVisibleRectangleSet(
             (__int64)this,
             (__int64)a2,
             *((_DWORD *)this + 1620),
             (__int64)v31,
             v23) )
      {
        if ( !v23[0] )
          return 0LL;
        v18 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x41Du);
          return 0LL;
        }
        v19 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x420u);
        }
        else
        {
          v20 = 0;
          if ( v23[0] )
          {
            while ( 1 )
            {
              v21 = CDrawingContext::DrawSolidRectangleInternal(this, &v24[2 * v20], a3);
              if ( v21 < 0 )
                break;
              if ( ++v20 >= v23[0] )
                goto LABEL_27;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x424u);
          }
        }
        goto LABEL_27;
      }
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      if ( v10 >= 0 )
      {
        CDrawingContext::DrawSolidRectangleInternal(this, a2, a3);
        return 0LL;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x42Au);
    }
    if ( !v3 )
      return 0LL;
LABEL_27:
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return 0LL;
}
