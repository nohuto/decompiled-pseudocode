/*
 * XREFs of ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0
 * Callers:
 *     ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800102F0 (-FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180020D20 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180020DE0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800210D0 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021270 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021500 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021670 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180021820 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800218B0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021A40 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180021AE0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180021CB0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA640 (-AppendHWDrawListEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800FA6CC (-AppendHWMegaRectEntry@CD2DContext@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18010C1A0 (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801462B8 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801467A0 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 *     ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180146F10 (-DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180147050 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180147140 (-DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180147490 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Geometry@@PEAUID2D1Bitmap1.c)
 *     ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180147610 (-Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetAdapterLuid@CD3DDeviceLevel1@@UEBA?AU_LUID@@XZ @ 0x180024500 (-GetAdapterLuid@CD3DDeviceLevel1@@UEBA-AU_LUID@@XZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180024C6C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1800FA3D4 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::FlushDrawList(struct ID2D1PrivateCompositorRenderer **this)
{
  __int64 result; // rax
  struct _LUID (__fastcall *v3)(CD3DDeviceLevel1 *__hidden); // rbx
  __int64 AdapterLuid; // rax
  __int64 *v5; // rsi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebp
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  struct ID2D1PrivateCompositorRenderer *v14; // r9
  int v15; // edx
  int v16; // r8d
  struct ID2D1PrivateCompositorRenderer *v17; // rsi
  struct ID2D1PrivateCompositorRenderer *v18; // rdi
  struct ID2D1PrivateCompositorRenderer *v19; // rdi
  volatile signed __int32 *v20; // rdi
  CD2DTarget *v21; // rbp
  __int64 v22; // rcx
  __int64 i; // rbx
  CD2DTarget *v24; // rdi
  int v25; // esi
  int v26; // ebx
  _QWORD *v27; // rax
  struct ID2D1PrivateCompositorRenderer *v28; // rcx
  unsigned int v29; // ebx
  struct ID2D1PrivateCompositorRenderer *v30; // rcx
  char v31; // [rsp+50h] [rbp+8h] BYREF
  char v32; // [rsp+58h] [rbp+10h] BYREF

  if ( this[37] )
  {
    v3 = (struct _LUID (__fastcall *)(CD3DDeviceLevel1 *__hidden))*((_QWORD *)*this + 37);
    if ( v3 == CD3DDeviceLevel1::GetAdapterLuid )
      AdapterLuid = (__int64)CD3DDeviceLevel1::GetAdapterLuid((CD3DDeviceLevel1 *)this);
    else
      AdapterLuid = ((__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, char *))v3)(this, &v31);
    v5 = (__int64 *)AdapterLuid;
    v6 = 0LL;
    v7 = *((_DWORD *)this + 48);
    if ( v7 )
      v6 = *((_QWORD *)this[21] + (unsigned int)(v7 - 1));
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 24) + 120LL))(*(_QWORD *)(v6 + 24));
    v9 = 0LL;
    v10 = *(_DWORD *)(v8 + 152);
    v11 = *((_DWORD *)this + 48);
    if ( v11 )
      v9 = *((_QWORD *)this[21] + (unsigned int)(v11 - 1));
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 24) + 120LL))(*(_QWORD *)(v9 + 24));
    v13 = *v5;
    v14 = this[37];
    v15 = *((_DWORD *)this + 73);
    v16 = *(_DWORD *)(v12 + 148);
    LODWORD(v12) = *((_DWORD *)this + 72);
    *((_QWORD *)v14 + 8) = *v5;
    *((_DWORD *)v14 + 18) = v12;
    *((_DWORD *)v14 + 19) = v15;
    *((_DWORD *)v14 + 26) = -1082130432;
    *((_DWORD *)v14 + 27) = 1065353216;
    *((float *)v14 + 24) = 2.0 / (float)v16;
    *((float *)v14 + 25) = -2.0 / (float)v10;
    v17 = this[37];
    if ( !*((_BYTE *)this + 376) )
    {
      v21 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)this[5] + 384LL))(this[5]);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v22, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); v21 = v24 )
      {
        v24 = (CD2DTarget *)*((_QWORD *)this[21] + i);
        if ( v21 )
          *((_BYTE *)v21 + 48) = 0;
        CD2DTarget::ApplyState(v24, (struct CD2DContext *)this);
        i = (unsigned int)(i + 1);
      }
      *((_BYTE *)this + 376) = 1;
    }
    v18 = this[6];
    *((_BYTE *)this + 377) = 1;
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)v18 + 120LL))(
      v18,
      v17);
    v19 = this[37];
    if ( !v19 )
      return 0LL;
    v20 = (volatile signed __int32 *)((char *)v19 + 8);
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 && v20 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 16LL))(v20, 1LL);
    result = 0LL;
    this[37] = 0LL;
  }
  else
  {
    if ( !this[42] )
      return 0LL;
    v25 = *((_DWORD *)this + 73);
    v26 = *((_DWORD *)this + 72);
    v27 = (_QWORD *)(*((__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, char *))*this + 37))(
                      this,
                      &v32);
    v28 = this[42];
    *((_QWORD *)v28 + 5) = *v27;
    *((_DWORD *)v28 + 12) = v26;
    *((_DWORD *)v28 + 13) = v25;
    *((_BYTE *)v28 + 56) = 1;
    result = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)this, this[42]);
    v29 = result;
    if ( (int)result >= 0 )
    {
      v30 = this[42];
      if ( v30 )
      {
        CMILRefCountBase::Release((struct ID2D1PrivateCompositorRenderer *)((char *)v30 + 8));
        result = v29;
        this[42] = 0LL;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x28Cu);
      return v29;
    }
  }
  return result;
}
