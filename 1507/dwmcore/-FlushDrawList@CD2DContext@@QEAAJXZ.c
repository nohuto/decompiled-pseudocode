/*
 * XREFs of ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660
 * Callers:
 *     ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180005A40 (-FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071910 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800719D0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071CB0 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071DB0 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180072040 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800721B0 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180072350 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800723E0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180072570 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800727F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800729A0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDEAC (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DDF38 (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x1800F1FFC (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180134F78 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180135710 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 *     ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180135E80 (-DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180135FC0 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1801360B0 (-DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180136400 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1.c)
 *     ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180136580 (-Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18005D92C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800DDA3C (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CD2DContext::FlushDrawList(CD2DContext *this)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rdi
  volatile signed __int32 *v18; // rdi
  CD2DTarget *v19; // r14
  __int64 v20; // rcx
  __int64 i; // rbx
  CD2DTarget *v22; // rdi
  int v23; // edx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rcx

  if ( *((_QWORD *)this + 39) )
  {
    v4 = *((_DWORD *)this + 48);
    v5 = 0LL;
    if ( v4 )
      v5 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(v4 - 1));
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 24) + 120LL))(*(_QWORD *)(v5 + 24));
    v7 = 0LL;
    v8 = *(_DWORD *)(v6 + 152);
    v9 = *((_DWORD *)this + 48);
    if ( v9 )
      v7 = *(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (unsigned int)(v9 - 1));
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 24) + 120LL))(*(_QWORD *)(v7 + 24));
    v11 = *((_QWORD *)this + 39);
    v12 = *((_DWORD *)this + 77);
    v13 = *((_QWORD *)this + 37);
    v14 = *(_DWORD *)(v10 + 148);
    LODWORD(v10) = *((_DWORD *)this + 76);
    *(_QWORD *)(v11 + 64) = v13;
    *(_DWORD *)(v11 + 72) = v10;
    *(_DWORD *)(v11 + 76) = v12;
    *(_DWORD *)(v11 + 104) = -1082130432;
    *(_DWORD *)(v11 + 108) = 1065353216;
    *(float *)(v11 + 96) = 2.0 / (float)v14;
    *(float *)(v11 + 100) = -2.0 / (float)v8;
    v15 = *((_QWORD *)this + 39);
    if ( !*((_BYTE *)this + 232) )
    {
      v19 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 384LL))(*((_QWORD *)this + 5));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v20, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); v19 = v22 )
      {
        v22 = *(CD2DTarget **)(*((_QWORD *)this + 21) + 8 * i);
        if ( v19 )
          *((_BYTE *)v19 + 48) = 0;
        CD2DTarget::ApplyState(v22, this);
        i = (unsigned int)(i + 1);
      }
      *((_BYTE *)this + 232) = 1;
    }
    v16 = *((_QWORD *)this + 6);
    *((_BYTE *)this + 244) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 120LL))(v16, v15);
    v17 = *((_QWORD *)this + 39);
    if ( v17 )
    {
      v18 = (volatile signed __int32 *)(v17 + 8);
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 && v18 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
      *((_QWORD *)this + 39) = 0LL;
    }
    return 0LL;
  }
  else
  {
    v2 = *((_QWORD *)this + 44);
    if ( v2 )
    {
      v23 = *((_DWORD *)this + 77);
      v24 = *((_DWORD *)this + 76);
      *(_QWORD *)(v2 + 40) = *((_QWORD *)this + 37);
      *(_DWORD *)(v2 + 48) = v24;
      *(_DWORD *)(v2 + 52) = v23;
      *(_BYTE *)(v2 + 56) = 1;
      result = CD2DContext::DrawCustomCallbackRendererInternal(
                 this,
                 *((struct ID2D1PrivateCompositorRenderer **)this + 44));
      v25 = result;
      if ( (int)result >= 0 )
      {
        v26 = *((_QWORD *)this + 44);
        if ( v26 )
        {
          CMILRefCountBase::Release((CMILRefCountBase *)(v26 + 8));
          result = v25;
          *((_QWORD *)this + 44) = 0LL;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x282u);
        return v25;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
