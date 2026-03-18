/*
 * XREFs of ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60
 * Callers:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180002E80 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180003200 (-FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800032D0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D280 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D350 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D560 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D730 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D890 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007DAC0 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18007DC00 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007E130 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18010F390 (-DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x180122278 (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180175B24 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180176390 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180176BC0 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180176CA0 (-DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x1801772D0 (-Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000309C (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetAdapterLuid@CD3DDeviceLevel1@@UEBA?AU_LUID@@XZ @ 0x180080250 (-GetAdapterLuid@CD3DDeviceLevel1@@UEBA-AU_LUID@@XZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800AD74C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CD2DContext::FlushDrawList(struct ID2D1PrivateCompositorRenderer **this)
{
  __int64 result; // rax
  struct _LUID (__fastcall *v3)(CD3DDeviceLevel1 *__hidden); // rax
  __int64 AdapterLuid; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  struct ID2D1PrivateCompositorRenderer *v13; // r9
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  struct ID2D1PrivateCompositorRenderer *v18; // rbx
  struct ID2D1PrivateCompositorRenderer *v19; // rcx
  struct ID2D1PrivateCompositorRenderer *v20; // rcx
  volatile signed __int32 *v21; // rcx
  CD2DTarget *v22; // rbp
  __int64 v23; // rcx
  __int64 i; // rdi
  CD2DTarget *v25; // r14
  int v26; // edi
  int v27; // ebx
  _QWORD *v28; // rax
  struct ID2D1PrivateCompositorRenderer *v29; // rcx
  unsigned int v30; // ebx
  struct ID2D1PrivateCompositorRenderer *v31; // rcx
  char v32; // [rsp+60h] [rbp+8h] BYREF
  char v33; // [rsp+68h] [rbp+10h] BYREF

  if ( this[40] )
  {
    v3 = (struct _LUID (__fastcall *)(CD3DDeviceLevel1 *__hidden))*((_QWORD *)*this + 37);
    if ( v3 == CD3DDeviceLevel1::GetAdapterLuid )
      AdapterLuid = (__int64)CD3DDeviceLevel1::GetAdapterLuid((CD3DDeviceLevel1 *)this);
    else
      AdapterLuid = ((__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, char *))v3)(this, &v32);
    v5 = (__int64 *)AdapterLuid;
    v6 = 0LL;
    v7 = *((_DWORD *)this + 54);
    if ( v7 )
      v6 = *((_QWORD *)this[24] + (unsigned int)(v7 - 1));
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 24) + 120LL))(*(_QWORD *)(v6 + 24));
    v9 = 0LL;
    v10 = *(_DWORD *)(v8 + 152);
    v11 = *((_DWORD *)this + 54);
    if ( v11 )
      v9 = *((_QWORD *)this[24] + (unsigned int)(v11 - 1));
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 24) + 120LL))(*(_QWORD *)(v9 + 24));
    v13 = this[40];
    v14 = *((_DWORD *)this + 79);
    v15 = *v5;
    v16 = *(_DWORD *)(v12 + 148);
    *((_DWORD *)v13 + 24) = *((_DWORD *)this + 78);
    *((_DWORD *)v13 + 25) = v14;
    *((_QWORD *)v13 + 11) = v15;
    *((_DWORD *)v13 + 32) = -1082130432;
    *((_DWORD *)v13 + 33) = 1065353216;
    *((float *)v13 + 30) = 2.0 / (float)v16;
    *((float *)v13 + 31) = -2.0 / (float)v10;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)v13 + 3)
                                                                                                  + 576LL)
                                                                                    + 384LL))(
      *(_QWORD *)(*((_QWORD *)v13 + 3) + 576LL),
      *((_QWORD *)v13 + 19),
      0LL,
      0LL,
      (__int64)v13 + 120,
      0,
      0);
    v18 = this[40];
    if ( !*((_BYTE *)this + 400) )
    {
      v22 = 0LL;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)this[5] + 384LL))(this[5]);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_qq(v23, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); v22 = v25 )
      {
        v25 = (CD2DTarget *)*((_QWORD *)this[24] + i);
        if ( v22 )
          *((_BYTE *)v22 + 48) = 0;
        CD2DTarget::ApplyState(v25, (struct CD2DContext *)this);
        i = (unsigned int)(i + 1);
      }
      *((_BYTE *)this + 400) = 1;
    }
    v19 = this[6];
    *((_BYTE *)this + 401) = 1;
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)v19 + 120LL))(
      v19,
      v18);
    v20 = this[40];
    if ( !v20 )
      return 0LL;
    v21 = (volatile signed __int32 *)((char *)v20 + 8);
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 && v21 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 16LL))(v21, 1LL);
    this[40] = 0LL;
    return 0LL;
  }
  else
  {
    if ( !this[45] )
      return 0LL;
    v26 = *((_DWORD *)this + 79);
    v27 = *((_DWORD *)this + 78);
    v28 = (_QWORD *)(*((__int64 (__fastcall **)(struct ID2D1PrivateCompositorRenderer **, char *))*this + 37))(
                      this,
                      &v33);
    v29 = this[45];
    *((_QWORD *)v29 + 5) = *v28;
    *((_DWORD *)v29 + 12) = v27;
    *((_DWORD *)v29 + 13) = v26;
    *((_BYTE *)v29 + 56) = 1;
    result = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)this, this[45]);
    v30 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x3F7u);
      return v30;
    }
    else
    {
      v31 = this[45];
      if ( v31 )
      {
        CMILRefCountBase::Release((struct ID2D1PrivateCompositorRenderer *)((char *)v31 + 8));
        result = v30;
        this[45] = 0LL;
      }
    }
  }
  return result;
}
