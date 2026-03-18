/*
 * XREFs of ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D350
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18002C100 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18002C950 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007C698 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEBUD2D1_BRUSH_PROPERTIES@@@Z @ 0x1800B097C (-SetBitmap@CD2DBitmapBrushWrapper@@QEAAXPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@AEB.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 *     ?FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAUID2D1Bitmap@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180176F64 (-FillRectanglesAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAV-$TMilRect_@MUMilRectF@.c)
 */

__int64 __fastcall CD2DContext::FillShapeWithBitmap(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        const struct CShape *a3,
        struct ID2D1Bitmap1 *a4,
        const struct D2D_MATRIX_3X2_F *a5,
        FLOAT a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_EXTEND_MODE a9,
        enum D2D1_PRIMITIVE_BLEND a10)
{
  int v13; // ebx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  TemporaryConfiguration *v16; // rsi
  enum D2D1_PRIMITIVE_BLEND v17; // r12d
  __int64 (__fastcall *v18)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  void (__fastcall *v20)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // ebx
  __int64 v28; // rax
  TemporaryConfiguration *v29; // rax
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v35; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Bitmap1 *v36; // [rsp+68h] [rbp-A0h]
  D2D1_BITMAP_BRUSH_PROPERTIES1 v37; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+88h] [rbp-80h] BYREF
  int v39; // [rsp+90h] [rbp-78h]
  int v40; // [rsp+94h] [rbp-74h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B4h] [rbp-54h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  int v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C4h] [rbp-44h]
  struct D2D_MATRIX_3X2_F v49; // [rsp+D8h] [rbp-30h] BYREF
  D2D1_BRUSH_PROPERTIES v50; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v51[16]; // [rsp+110h] [rbp+8h] BYREF

  v36 = a4;
  CD2DContext::FlushDrawList(this);
  v13 = 0;
  v14 = *(_OWORD *)&a5->m11;
  v35 = 0LL;
  v15 = *(_QWORD *)&a5->m[2][0];
  v16 = 0LL;
  v37.extendModeX = a9;
  v37.extendModeY = a9;
  *(_OWORD *)&v50.transform.m11 = v14;
  v37.interpolationMode = a8;
  v50.opacity = a6;
  *(_QWORD *)&v50.transform.m[2][0] = v15;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v22 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v23, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v22);
  }
  v17 = a10;
  CD2DContext::SetCommonState((CD2DContext *)this, a2, a10, &a7, &v49);
  if ( !(unsigned __int8)CShape::IsEmpty(a3) )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v13 = (*(__int64 (__fastcall **)(const struct CShape *, _BYTE *, _QWORD))(*(_QWORD *)a3 + 24LL))(a3, v51, 0LL);
      if ( v13 < 0 )
      {
        v33 = 1829;
LABEL_34:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v33);
        goto LABEL_10;
      }
      v39 = 0;
      v40 = 0;
      v45 = 0;
      v47 = 0;
      v41 = *(_QWORD *)&v49.m[1][0];
      v38 = *(_QWORD *)&v49.m11;
      v46 = *(_QWORD *)&v49.m[2][0];
      v48 = 1065353216LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 1065353216;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v38, (__int64)v51, &v49.m11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(
          v24,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v25,
          v26,
          SLOBYTE(v49.m[1][0]),
          SLOBYTE(v49.m[1][1]));
    }
    if ( !CCommonRegistryData::m_fEnableHighColor
      || !(*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned __int64 *))(*(_QWORD *)a3 + 32LL))(
            a3,
            &v34) )
    {
      v18 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 16LL);
      if ( v18 == CRegionShape::GetD2DGeometry )
        D2DGeometry = CRegionShape::GetD2DGeometry(a3, 0LL, &v35);
      else
        D2DGeometry = v18(a3, 0LL, &v35);
      v13 = D2DGeometry;
      if ( D2DGeometry >= 0 )
      {
        CD2DBitmapBrushWrapper::SetBitmap(this[22], v36, &v37, &v50);
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)this[5] + 184LL))(
          this[5],
          v35,
          *((_QWORD *)this[22] + 2),
          0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[22] + 2) + 88LL))(
          *((_QWORD *)this[22] + 2),
          *((_QWORD *)this[22] + 3));
        goto LABEL_10;
      }
      v33 = 1845;
      goto LABEL_34;
    }
    v27 = v34;
    v28 = 16LL * (unsigned int)v34;
    if ( !is_mul_ok((unsigned int)v34, 0x10uLL) )
      v28 = -1LL;
    v29 = (TemporaryConfiguration *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v28);
    v16 = v29;
    if ( v29 )
      `vector constructor iterator'(
        v29,
        0x10uLL,
        v27,
        (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    else
      v16 = 0LL;
    if ( !v16 )
    {
      v13 = -2147024882;
      v33 = 1862;
      goto LABEL_34;
    }
    (*(void (__fastcall **)(const struct CShape *, TemporaryConfiguration *, _QWORD))(*(_QWORD *)a3 + 40LL))(
      a3,
      v16,
      (unsigned int)v34);
    v30 = CD2DContext::FillRectanglesAsCommandList(
            (_DWORD)this,
            (_DWORD)a2,
            (_DWORD)v16,
            v34,
            (__int64)v36,
            (__int64)a5,
            LODWORD(a6),
            a7,
            a8,
            v17);
    v13 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x752u);
  }
LABEL_10:
  v20 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v20 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v16);
  else
    v20(WPF::g_pProcessHeap, v16);
  if ( v35 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v35 + 16LL))(v35);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v31 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v32, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v31);
  }
  return (unsigned int)v13;
}
