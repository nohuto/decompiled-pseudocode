/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x180004604 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180004788 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x180005140 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18006948C (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18006A530 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18006B2DC (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18006B420 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x18006E990 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801194A4 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x180122278 (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801226C0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801227D0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawPencil@CDrawingContext@@QEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@23M@Z @ 0x180122B64 (-DrawPencil@CDrawingContext@@QEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCComposition.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1801230A0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z @ 0x18012FD40 (-RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180140714 (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801530A8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x180157EC0 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800058E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18008F600 (-GetDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, char a2)
{
  int v2; // edi
  char v3; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  char *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v13; // r8d
  int v14; // eax
  float v15; // xmm6_4
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  CHwDisplayRenderTarget *v19; // rcx
  void (__fastcall *v20)(CHwDisplayRenderTarget *__hidden, struct MilRectF *); // rax
  unsigned int v21; // r13d
  __int64 v22; // r14
  void (__fastcall *v23)(CD2DContext *__hidden, const struct ID2DContextOwner *, const struct D2D_RECT_F *, enum D2D1_ANTIALIAS_MODE); // rax
  int v24; // eax
  __int64 v25; // rsi
  bool v26; // zf
  __int128 v27; // xmm0
  __int64 v28; // r14
  int v29; // esi
  float v30; // xmm7_4
  int v31; // eax
  float v32; // xmm8_4
  int v33; // eax
  float v34; // xmm9_4
  int v35; // eax
  float v36; // xmm6_4
  unsigned int v37; // r8d
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int128 v43; // xmm0
  int v44; // eax
  unsigned int v45; // r12d
  unsigned int v46; // r12d
  __int128 v47; // [rsp+30h] [rbp-89h] BYREF
  __int128 v48; // [rsp+40h] [rbp-79h] BYREF
  float v49; // [rsp+50h] [rbp-69h]
  __int128 v50; // [rsp+58h] [rbp-61h] BYREF
  __int64 v51; // [rsp+68h] [rbp-51h]

  v2 = 0;
  v3 = a2;
  if ( *(_BYTE *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
  {
    if ( a2 )
      goto LABEL_10;
  }
  else
  {
    v3 = 0;
  }
  v5 = 0LL;
  v6 = 0LL;
  if ( *((_DWORD *)this + 172) )
  {
    v7 = (char *)this + 664;
    while ( 1 )
    {
      v44 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v7 + 8 * v6), this);
      v2 = v44;
      if ( v44 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 172) )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x18D2u);
  }
  else
  {
LABEL_4:
    v7 = (char *)this + 664;
    *((_DWORD *)this + 172) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 664, 8LL);
  }
  if ( (unsigned int)v5 < *((_DWORD *)this + 172) && (_DWORD)v5 )
  {
    v45 = *((_DWORD *)v7 + 6);
    if ( (unsigned int)v5 > v45 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x235u);
    }
    else
    {
      v46 = v45 - v5;
      if ( v46 )
        memmove(*(void **)v7, (const void *)(*(_QWORD *)v7 + 8 * v5), 8LL * v46);
      *((_DWORD *)v7 + 6) = v46;
    }
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x18B4u);
  }
  else if ( *((_BYTE *)this + 6530) )
  {
    *(_WORD *)((char *)this + 6529) = 1;
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2C2u);
    return (unsigned int)v2;
  }
LABEL_10:
  if ( *((_BYTE *)this + 6528) )
  {
    v8 = *((_DWORD *)this + 134);
    if ( v8 )
    {
      v9 = (unsigned int)(v8 - 1);
      v10 = *((_QWORD *)this + 69);
      *(_OWORD *)((char *)this + 356) = *(_OWORD *)(68 * v9 + v10);
      *(_OWORD *)((char *)this + 372) = *(_OWORD *)(68 * v9 + v10 + 16);
      *(_OWORD *)((char *)this + 388) = *(_OWORD *)(68 * v9 + v10 + 32);
      *(_OWORD *)((char *)this + 404) = *(_OWORD *)(68 * v9 + v10 + 48);
      v11 = *(_DWORD *)(68 * v9 + v10 + 64);
    }
    else
    {
      *(_OWORD *)((char *)this + 356) = CMILMatrix::Identity;
      *(_OWORD *)((char *)this + 372) = xmmword_1801EAD20;
      *(_OWORD *)((char *)this + 388) = xmmword_1801EAD30;
      *(_OWORD *)((char *)this + 404) = xmmword_1801EAD40;
      v11 = dword_1801EAD50;
    }
    *((_DWORD *)this + 105) = v11;
    *((_BYTE *)this + 6528) = 0;
  }
  if ( !*((_BYTE *)this + 6529) )
    return (unsigned int)v2;
  v13 = *((_DWORD *)this + 234);
  if ( v13 && *(_DWORD *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(v13 - 1) + 4) && *((_DWORD *)this + 746) )
  {
    v14 = *((_DWORD *)this + 746);
    if ( v14 )
      v47 = *(_OWORD *)(*((_QWORD *)this + 375) + 16LL * (unsigned int)(v14 - 1));
    v15 = *((float *)&v47 + 3);
    v16 = *((float *)&v47 + 2);
    v17 = *((float *)&v47 + 1);
    LODWORD(v18) = v47;
  }
  else
  {
    v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v16 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v17 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    LODWORD(v18) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( !v3 && v13 && *(_DWORD *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(v13 - 1) + 8) )
  {
    v39 = 120LL * (unsigned int)(*((_DWORD *)this + 442) - 1);
    v40 = *((_QWORD *)this + 218);
    if ( *(float *)(v39 + v40 + 96) > v18 )
      v18 = *(float *)(v39 + v40 + 96);
    if ( *(float *)(v39 + v40 + 100) > v17 )
      v17 = *(float *)(v39 + v40 + 100);
    if ( v16 > *(float *)(v39 + v40 + 104) )
      v16 = *(float *)(v39 + v40 + 104);
    if ( v15 > *(float *)(v39 + v40 + 108) )
      v15 = *(float *)(v39 + v40 + 108);
    if ( v16 <= v18 || v15 <= v17 )
    {
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      v18 = 0.0;
    }
  }
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) )
  {
    v19 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 55);
    v48 = 0LL;
    if ( v19 )
    {
      v20 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(*(_QWORD *)v19 + 272LL);
      if ( v20 == CHwDisplayRenderTarget::GetDeviceBounds )
      {
        CHwDisplayRenderTarget::GetDeviceBounds(v19, (struct MilRectF *)&v47);
LABEL_28:
        if ( *(float *)&v47 > v18 )
          LODWORD(v18) = v47;
        if ( *((float *)&v47 + 1) > v17 )
          v17 = *((float *)&v47 + 1);
        if ( v16 > *((float *)&v47 + 2) )
          v16 = *((float *)&v47 + 2);
        if ( v15 > *((float *)&v47 + 3) )
          v15 = *((float *)&v47 + 3);
        if ( v16 <= v18 || v15 <= v17 )
        {
          v15 = 0.0;
          v16 = 0.0;
          v17 = 0.0;
          v18 = 0.0;
          v21 = 1;
        }
        else
        {
          *(_QWORD *)&v48 = __PAIR64__(LODWORD(v17), LODWORD(v18));
          v21 = 0;
          *((_QWORD *)&v48 + 1) = __PAIR64__(LODWORD(v15), LODWORD(v16));
        }
        v22 = *((_QWORD *)this + 57);
        v23 = *(void (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, const struct D2D_RECT_F *, enum D2D1_ANTIALIAS_MODE))(*(_QWORD *)v22 + 72LL);
        if ( v23 == CD2DContext::SetClip )
        {
          CD2DContext::FlushDrawList((CD2DContext *)v22);
          v24 = *(_DWORD *)(v22 + 216);
          v25 = 0LL;
          if ( v24 )
            v25 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 8LL * (unsigned int)(v24 - 1));
          v26 = *(_BYTE *)(v25 + 48) == 0;
          v27 = v48;
          *(_DWORD *)(v25 + 76) = v21;
          *(_OWORD *)(v25 + 60) = v27;
          if ( !v26 )
          {
            v28 = *(_QWORD *)(v25 + 16);
            if ( *(_BYTE *)(v28 + 402)
              || v21 != *(_DWORD *)(v28 + 280)
              || *(float *)(v25 + 60) != *(float *)(v28 + 264)
              || *(float *)(v25 + 64) != *(float *)(v28 + 268)
              || *(float *)(v25 + 68) != *(float *)(v28 + 272)
              || *(float *)(v25 + 72) != *(float *)(v28 + 276) )
            {
              v41 = *(_QWORD *)(v28 + 40);
              v50 = _xmm;
              v51 = 0LL;
              (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v41 + 240LL))(v41, &v50);
              v42 = *(_QWORD *)(v28 + 48);
              *(_BYTE *)(v28 + 402) = 0;
              v43 = *(_OWORD *)(v25 + 60);
              *(_DWORD *)(v28 + 280) = v21;
              *(_OWORD *)(v28 + 264) = v43;
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v42 + 80LL))(v42, v25 + 60, v21);
            }
          }
          *(_BYTE *)(v25 + 56) = 1;
        }
        else
        {
          v23(
            (CD2DContext *)v22,
            (CDrawingContext *)((char *)this + 128),
            (const struct D2D_RECT_F *)&v48,
            (enum D2D1_ANTIALIAS_MODE)v21);
        }
        goto LABEL_50;
      }
    }
    else
    {
      v19 = (CHwDisplayRenderTarget *)*((_QWORD *)this + 54);
      v20 = *(void (__fastcall **)(CHwDisplayRenderTarget *__hidden, struct MilRectF *))(*(_QWORD *)v19 + 64LL);
    }
    v20(v19, (struct MilRectF *)&v47);
    goto LABEL_28;
  }
LABEL_50:
  v29 = 0x7FFFFFFF;
  v30 = v18 - 0.5;
  LODWORD(v48) = 0;
  if ( v30 < -2147483600.0 )
  {
    v31 = 0x80000000;
  }
  else if ( v30 >= 2147483600.0 )
  {
    v31 = 0x7FFFFFFF;
  }
  else
  {
    v31 = (int)ceilf_0(v30);
  }
  v32 = v17 - 0.5;
  *((float *)&v48 + 1) = (float)v31;
  if ( v32 < -2147483600.0 )
  {
    v33 = 0x80000000;
  }
  else if ( v32 >= 2147483600.0 )
  {
    v33 = 0x7FFFFFFF;
  }
  else
  {
    v33 = (int)ceilf_0(v32);
  }
  v34 = v16 - 0.5;
  *((float *)&v48 + 2) = (float)v33;
  if ( v34 < -2147483600.0 )
  {
    v35 = 0x80000000;
  }
  else if ( v34 >= 2147483600.0 )
  {
    v35 = 0x7FFFFFFF;
  }
  else
  {
    v35 = (int)ceilf_0(v34);
  }
  v36 = v15 - 0.5;
  *((float *)&v48 + 3) = (float)v35;
  if ( v36 < -2147483600.0 )
  {
    v29 = 0x80000000;
  }
  else if ( v36 < 2147483600.0 )
  {
    v29 = (int)ceilf_0(v36);
  }
  *((_BYTE *)this + 6529) = 0;
  v49 = (float)v29;
  *(_OWORD *)((char *)this + 216) = v48;
  *((float *)this + 58) = (float)v29;
  if ( v3 )
  {
    v37 = *((_DWORD *)this + 442);
    v38 = v37 - *(_DWORD *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + 8);
    if ( v38 < v37 )
    {
      while ( !*(_BYTE *)(120LL * v38 + *((_QWORD *)this + 218) + 112) )
      {
        if ( ++v38 >= v37 )
          return (unsigned int)v2;
      }
      *((_BYTE *)this + 6530) = 1;
    }
  }
  return (unsigned int)v2;
}
