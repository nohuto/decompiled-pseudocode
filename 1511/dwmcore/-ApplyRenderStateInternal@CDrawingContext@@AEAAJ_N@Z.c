/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830
 * Callers:
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E180 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000E39C (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000E870 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x18003E8D0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18003F4A4 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@PEBV-$CMatrix@UBaseSampling@Coor.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18003F628 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x180041AC4 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x180042B20 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x180042C98 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x180046820 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801032E0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18010C1A0 (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18010CBC0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18010CCE0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18010D4B0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C (-RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAVCShape@@PEAVCOverlayContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180130C14 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x180135740 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180025130 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(CDrawingContext *this, char a2)
{
  char v2; // di
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // edi
  char *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  int v11; // eax
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  int v18; // eax
  __int128 v19; // xmm0
  __int64 v20; // rdi
  unsigned int v21; // edi
  __int64 v22; // rbx
  void (__fastcall *v23)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, const struct D2D_RECT_F *, unsigned int); // r15
  int v24; // eax
  __int64 v25; // r13
  __int128 v26; // xmm0
  __int64 v27; // r15
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int128 v30; // xmm0
  int v31; // ebx
  float v32; // xmm0_4
  int v33; // eax
  float v34; // xmm0_4
  int v35; // eax
  float v36; // xmm0_4
  int v37; // eax
  float v38; // xmm0_4
  unsigned int v41; // [rsp+34h] [rbp-55h]
  __int128 v42; // [rsp+38h] [rbp-51h] BYREF
  __int128 v43; // [rsp+48h] [rbp-41h] BYREF
  float v44; // [rsp+58h] [rbp-31h]
  __int128 v45; // [rsp+60h] [rbp-29h] BYREF
  __int128 v46; // [rsp+70h] [rbp-19h] BYREF
  __int64 v47; // [rsp+80h] [rbp-9h]

  v2 = a2;
  v4 = 0;
  if ( !a2 )
  {
    v5 = 0;
    v6 = 0;
    if ( *((_DWORD *)this + 152) )
    {
      v7 = (char *)this + 584;
      while ( 1 )
      {
        v8 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v7 + 8LL * v5), this);
        v4 = v8;
        if ( v8 < 0 )
          break;
        ++v6;
        if ( ++v5 >= *((_DWORD *)this + 152) )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x187Au);
    }
    else
    {
LABEL_6:
      v7 = (char *)this + 584;
      *((_DWORD *)this + 152) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 584, 8LL);
    }
    if ( v6 < *((_DWORD *)this + 152) && v6 )
    {
      v9 = *((_DWORD *)v7 + 6);
      if ( v6 > v9 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
      }
      else
      {
        v10 = v9 - v6;
        if ( v10 )
          memmove(*(void **)v7, (const void *)(*(_QWORD *)v7 + 8LL * v6), 8LL * v10);
        *((_DWORD *)v7 + 6) = v10;
      }
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2B0u);
      return v4;
    }
    v2 = 0;
  }
  if ( *((_BYTE *)this + 5964) )
  {
    v11 = *((_DWORD *)this + 114);
    if ( v11 )
    {
      v13 = (unsigned int)(v11 - 1);
      v14 = *((_QWORD *)this + 59);
      v13 <<= 6;
      *(_OWORD *)((char *)this + 276) = *(_OWORD *)(v13 + v14);
      *(_OWORD *)((char *)this + 292) = *(_OWORD *)(v13 + v14 + 16);
      *(_OWORD *)((char *)this + 308) = *(_OWORD *)(v13 + v14 + 32);
      v12 = *(_OWORD *)(v13 + v14 + 48);
    }
    else
    {
      *(_OWORD *)((char *)this + 276) = IdentityMatrix;
      *(_OWORD *)((char *)this + 292) = xmmword_18019E9C0;
      *(_OWORD *)((char *)this + 308) = xmmword_18019E9D0;
      v12 = xmmword_18019E9E0;
    }
    *(_OWORD *)((char *)this + 324) = v12;
    *((_BYTE *)this + 5964) = 0;
  }
  if ( v2 )
  {
    if ( !*((_BYTE *)this + 5966) )
      return v4;
    v15 = *((_DWORD *)this + 176);
    if ( v15 && *(_DWORD *)(76LL * (unsigned int)(v15 - 1) + *((_QWORD *)this + 85) + 4) && *((_DWORD *)this + 638) )
    {
      v16 = *((_DWORD *)this + 638);
      if ( v16 )
        v42 = *(_OWORD *)(*((_QWORD *)this + 321) + 16LL * (unsigned int)(v16 - 1));
    }
    else
    {
      v42 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    goto LABEL_42;
  }
  if ( !*((_BYTE *)this + 5965) )
    return v4;
  v17 = *((_DWORD *)this + 176);
  if ( !v17 || !*(_DWORD *)(76LL * (unsigned int)(v17 - 1) + *((_QWORD *)this + 85) + 4) || !*((_DWORD *)this + 638) )
  {
    v19 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_38;
  }
  v18 = *((_DWORD *)this + 638);
  if ( v18 )
  {
    v19 = *(_OWORD *)(*((_QWORD *)this + 321) + 16LL * (unsigned int)(v18 - 1));
LABEL_38:
    v42 = v19;
  }
  if ( v17 && *(_DWORD *)(76LL * (unsigned int)(v17 - 1) + *((_QWORD *)this + 85) + 8) )
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
      (__int64)&v42,
      104LL * (unsigned int)(*((_DWORD *)this + 374) - 1) + *((_QWORD *)this + 184) + 80LL);
LABEL_42:
  if ( !*((_BYTE *)this + 2616) && !*((_DWORD *)this + 1447) )
  {
    v20 = *((_QWORD *)this + 45);
    v45 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v20 + 256LL))(v20, &v43);
    else
      (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 44) + 64LL))(*((_QWORD *)this + 44), &v43);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v42, (__int64)&v43);
    if ( *((float *)&v42 + 2) <= *(float *)&v42 || *((float *)&v42 + 3) <= *((float *)&v42 + 1) )
    {
      v21 = 1;
    }
    else
    {
      v45 = v42;
      v21 = 0;
    }
    v22 = *((_QWORD *)this + 47);
    v41 = v21;
    v23 = *(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, const struct D2D_RECT_F *, unsigned int))(*(_QWORD *)v22 + 72LL);
    if ( v23 == CD2DContext::SetClip )
    {
      CD2DContext::FlushDrawList((struct ID2D1PrivateCompositorRenderer **)v22);
      v24 = *(_DWORD *)(v22 + 192);
      v25 = 0LL;
      if ( v24 )
        v25 = *(_QWORD *)(*(_QWORD *)(v22 + 168) + 8LL * (unsigned int)(v24 - 1));
      v26 = v45;
      *(_DWORD *)(v25 + 76) = v21;
      *(_OWORD *)(v25 + 60) = v26;
      if ( *(_BYTE *)(v25 + 48) )
      {
        v27 = *(_QWORD *)(v25 + 16);
        if ( *(_BYTE *)(v27 + 378)
          || v21 != *(_DWORD *)(v27 + 256)
          || *(float *)(v25 + 60) != *(float *)(v27 + 240)
          || *(float *)(v25 + 64) != *(float *)(v27 + 244)
          || *(float *)(v25 + 68) != *(float *)(v27 + 248)
          || *(float *)(v25 + 72) != *(float *)(v27 + 252) )
        {
          v28 = *(_QWORD *)(v27 + 40);
          v46 = _xmm;
          v47 = 0LL;
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 240LL))(v28, &v46);
          v29 = *(_QWORD *)(v27 + 48);
          *(_BYTE *)(v27 + 378) = 0;
          v30 = *(_OWORD *)(v25 + 60);
          *(_DWORD *)(v27 + 256) = v41;
          *(_OWORD *)(v27 + 240) = v30;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 80LL))(v29, v25 + 60, v41);
        }
      }
      *(_BYTE *)(v25 + 56) = 1;
    }
    else
    {
      v23(
        (struct ID2D1PrivateCompositorRenderer **)v22,
        (CDrawingContext *)((char *)this + 56),
        (const struct D2D_RECT_F *)&v45,
        v21);
    }
    v2 = a2;
  }
  v31 = 0x7FFFFFFF;
  v32 = *(float *)&v42 - 0.5;
  LODWORD(v43) = 0;
  if ( (float)(*(float *)&v42 - 0.5) < -2147483600.0 )
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
  *((float *)&v43 + 1) = (float)v33;
  v34 = *((float *)&v42 + 1) - 0.5;
  if ( (float)(*((float *)&v42 + 1) - 0.5) < -2147483600.0 )
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
  *((float *)&v43 + 2) = (float)v35;
  v36 = *((float *)&v42 + 2) - 0.5;
  if ( (float)(*((float *)&v42 + 2) - 0.5) < -2147483600.0 )
  {
    v37 = 0x80000000;
  }
  else if ( v36 >= 2147483600.0 )
  {
    v37 = 0x7FFFFFFF;
  }
  else
  {
    v37 = (int)ceilf_0(v36);
  }
  *((float *)&v43 + 3) = (float)v37;
  v38 = *((float *)&v42 + 3) - 0.5;
  if ( (float)(*((float *)&v42 + 3) - 0.5) < -2147483600.0 )
  {
    v31 = 0x80000000;
  }
  else if ( v38 < 2147483600.0 )
  {
    v31 = (int)ceilf_0(v38);
  }
  *((_BYTE *)this + 5965) = v2;
  *((_BYTE *)this + 5966) = v2 == 0;
  v44 = (float)v31;
  *(_OWORD *)((char *)this + 140) = v43;
  *((float *)this + 39) = (float)v31;
  return v4;
}
