/*
 * XREFs of ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250
 * Callers:
 *     ?Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121010 (-Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18000B9FC (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x18002D04C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x18002D13C (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
 *     ?LookupCommonPixelShader@CCommonRenderingEffect@@SA?AW4Enum@CommonRenderingPixelShaders@@K@Z @ 0x18002D350 (-LookupCommonPixelShader@CCommonRenderingEffect@@SA-AW4Enum@CommonRenderingPixelShaders@@K@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180034204 (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x180041A3C (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z @ 0x180047364 (-GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ??0CpuClipShape@@QEAA@XZ @ 0x180058CE0 (--0CpuClipShape@@QEAA@XZ.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@VSamplerMode@@12@Z @ 0x18007A9D4 (-SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositio.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?GetD2D1Matrix4x4@CBaseMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x1800BCC08 (-GetD2D1Matrix4x4@CBaseMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1800BCCB8 (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800F3968 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800F7850 (-EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawList.c)
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800FA918 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@Mil.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800FCF78 (--1CpuClipShape@@QEAA@XZ.c)
 *     ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1801178FC (-AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVCDrawingContext@@AEBUD2D_MATRIX_4X4_F@@W.c)
 *     ?Invalidate@CWARPDrawListCache@@QEAAXXZ @ 0x180117C18 (-Invalidate@CWARPDrawListCache@@QEAAXXZ.c)
 *     ?SetNewWARPDrawListEntries@CWARPDrawListCache@@QEAAJ_KPEAPEAVCWARPDrawListEntry@@I@Z @ 0x180117C98 (-SetNewWARPDrawListEntries@CWARPDrawListCache@@QEAAJ_KPEAPEAVCWARPDrawListEntry@@I@Z.c)
 *     ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x180117D70 (-MilCompositingModeToBlendMode@@YA-AW4Enum@BlendMode@@W41MilCompositingMode@@@Z.c)
 *     ?D2DExtendModeFromExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@ExtendMode@@@Z @ 0x180117D9C (-D2DExtendModeFromExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@ExtendMode@@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z @ 0x180117F08 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z.c)
 *     ?CreateInGPUState@CCommonRenderingEffect@@SAPEAV1@PEAUGPUState@@@Z @ 0x180118438 (-CreateInGPUState@CCommonRenderingEffect@@SAPEAV1@PEAUGPUState@@@Z.c)
 *     ?EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x18012020C (-EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDraw.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801260A0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawCommonRenderingEffect(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CSpriteVisualContent *a3,
        const struct D2D_SIZE_F *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  float v12; // xmm9_4
  CWARPDrawListCache *v13; // r15
  struct CHWDrawListCache *v14; // r14
  bool v15; // r13
  const struct IRenderTarget *v16; // r8
  const struct CVisualTree *v17; // rdx
  int v18; // eax
  CBaseMatrix *v19; // r12
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CWARPDrawListCache *v23; // rdi
  bool v24; // cf
  int v25; // eax
  struct D2D_MATRIX_4X4_F *D2D1Matrix4x4; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int CurrentRenderingRealization; // eax
  CBaseMatrix *v31; // rdi
  __int64 v32; // rcx
  __m128 v33; // xmm3
  __m128 v34; // xmm2
  int v35; // eax
  __int64 v36; // rcx
  struct _D3DCOLORVALUE *v37; // rax
  int v38; // eax
  unsigned int v39; // r9d
  int v40; // eax
  __int64 *v41; // rax
  __int64 **TreeData; // rax
  struct CScopedClipStack *v43; // r9
  int v44; // eax
  int v45; // ebx
  __int64 v46; // r8
  bool v47; // al
  BOOL v48; // edx
  int v49; // eax
  int v50; // eax
  struct CCommonRenderingEffect *v51; // rax
  int v52; // eax
  struct D2D_MATRIX_4X4_F *v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int appended; // eax
  bool v60; // [rsp+58h] [rbp-B0h] BYREF
  bool v61; // [rsp+59h] [rbp-AFh]
  _QWORD v62[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct CHWDrawListCache *v63[2]; // [rsp+78h] [rbp-90h] BYREF
  CBaseMatrix *TopByReference; // [rsp+88h] [rbp-80h] BYREF
  CWARPDrawListCache *v65; // [rsp+90h] [rbp-78h] BYREF
  struct CWARPDrawListEntry *v66[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _D3DCOLORVALUE v67; // [rsp+A8h] [rbp-60h] BYREF
  struct _D3DCOLORVALUE v68; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-40h]
  __int128 v70; // [rsp+D0h] [rbp-38h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  int v72; // [rsp+E8h] [rbp-20h]
  char v73; // [rsp+ECh] [rbp-1Ch]
  char v74; // [rsp+EDh] [rbp-1Bh]
  bool v75; // [rsp+EEh] [rbp-1Ah]
  CMILRefCountBase *Src; // [rsp+F8h] [rbp-10h] BYREF
  __int16 v77; // [rsp+100h] [rbp-8h] BYREF
  char v78; // [rsp+102h] [rbp-6h]
  _BYTE v79[32]; // [rsp+108h] [rbp+0h] BYREF
  struct _D3DCOLORVALUE v80; // [rsp+128h] [rbp+20h] BYREF
  __int128 v81; // [rsp+148h] [rbp+40h] BYREF
  __int128 v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+168h] [rbp+60h]
  _DWORD v84[13]; // [rsp+170h] [rbp+68h]
  __int128 v85; // [rsp+1A4h] [rbp+9Ch]
  __int64 v86; // [rsp+1B8h] [rbp+B0h]
  __int128 v87; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v88; // [rsp+1D0h] [rbp+C8h]
  char v89; // [rsp+1D8h] [rbp+D0h]
  int v90; // [rsp+1ECh] [rbp+E4h]
  int v91; // [rsp+1F0h] [rbp+E8h]
  int v92; // [rsp+1F4h] [rbp+ECh]
  float v93; // [rsp+1F8h] [rbp+F0h]
  D2D_MATRIX_4X4_F v94; // [rsp+208h] [rbp+100h] BYREF

  Src = 0LL;
  v62[0] = a4;
  `vector constructor iterator'(
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)&v77,
    3LL,
    2,
    SamplerMode::`default constructor closure');
  memset_0(v79, 0, sizeof(v79));
  v66[0] = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v8 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, const struct D2D_SIZE_F *, _QWORD, struct _D3DCOLORVALUE *))(*(_QWORD *)a3 + 152LL))(
           a3,
           a4,
           0LL,
           &v67);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *(struct _D3DCOLORVALUE *)&v80.r = *(struct _D3DCOLORVALUE *)&v67.r;
      v10 = CDrawingContext::DrawSolidRectangle((CRegionShape **)this, (__int128 *)&v80, &stru_180183AE0);
      v9 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA84u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA82u);
    }
    goto LABEL_70;
  }
  v11 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, v63);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA89u);
    goto LABEL_70;
  }
  v12 = *(float *)v63;
  if ( *(float *)v63 > 0.0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v65 = 0LL;
    v63[0] = 0LL;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
    v15 = *((_BYTE *)this + 5973) && !CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP;
    if ( !*((_QWORD *)a3 + 5) )
      *((_QWORD *)a3 + 5) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    v16 = (const struct IRenderTarget *)*((_QWORD *)this + 44);
    v17 = (const struct CVisualTree *)*((_QWORD *)this + 695);
    if ( v15 )
    {
      v18 = CVisual::EnsureWARPDrawListCacheNoRef(a2, v17, v16, &v65);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA9Eu);
        goto LABEL_70;
      }
      v13 = v65;
      if ( *((_QWORD *)v65 + 4) && !CCommonRegistryData::m_fDisableDrawListCaching )
      {
        v19 = TopByReference;
        goto LABEL_21;
      }
    }
    else
    {
      v21 = CVisual::EnsureHWDrawListCacheNoRef(a2, v17, v16, v63);
      v9 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xAABu);
        goto LABEL_70;
      }
      v14 = v63[0];
      if ( !CDrawingContext::IsHWDrawListCacheDirty(this, a2, v63[0]) )
      {
        v19 = TopByReference;
LABEL_62:
        if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85))
          && *((_BYTE *)v14 + 60) )
        {
          v55 = CDrawingContext::ApplyRenderStateInternal(this, 1);
          v9 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0xB71u);
            goto LABEL_70;
          }
        }
        else
        {
          v56 = CDrawingContext::ApplyRenderStateInternal(this, 0);
          v9 = v56;
          if ( v56 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xB75u);
            goto LABEL_70;
          }
        }
        v57 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 61));
        appended = CHWDrawListCache::AppendHWDrawListEntries(
                     (__int64)v14,
                     (__int64)this,
                     v19,
                     v12,
                     *((_DWORD *)this + 63),
                     v57 == 0);
        v9 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0xB7Du);
        goto LABEL_70;
      }
    }
    v22 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, _QWORD, struct _D3DCOLORVALUE *))(*(_QWORD *)a3 + 152LL))(
            a3,
            v62[0],
            0LL,
            &v67);
    v9 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xAB6u);
      goto LABEL_70;
    }
    if ( v15 )
    {
      CWARPDrawListCache::Invalidate(v13);
      v23 = (CWARPDrawListCache *)*((_QWORD *)a3 + 5);
      v65 = v23;
      memset_0(&v81, 0, 0xB8uLL);
      v81 = *(__int128 *)&v67.r;
      v24 = *((_DWORD *)this + 62) != 0;
      v93 = v12;
      LODWORD(v83) = v24;
      v25 = MilCompositingModeToBlendMode(*((unsigned int *)this + 63));
      v19 = TopByReference;
      HIDWORD(v83) = v25;
      LOWORD(v84[0]) = 256;
      D2D1Matrix4x4 = CBaseMatrix::GetD2D1Matrix4x4((struct D2D_MATRIX_4X4_F *)TopByReference, &v94);
      v27 = *(_OWORD *)&D2D1Matrix4x4->m[1][0];
      *(_OWORD *)&v84[1] = *(_OWORD *)&D2D1Matrix4x4->_11;
      v28 = *(_OWORD *)&D2D1Matrix4x4->m[2][0];
      *(_OWORD *)&v84[5] = v27;
      v29 = *(_OWORD *)&D2D1Matrix4x4->m[3][0];
      *(_OWORD *)&v84[9] = v28;
      v85 = v29;
      if ( v69 )
      {
        CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                        (CCompositionSurfaceBitmap *)(v69 + 48),
                                        &TopByReference);
        v9 = CurrentRenderingRealization;
        if ( CurrentRenderingRealization < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRenderingRealization, 0xACFu);
          goto LABEL_70;
        }
        v31 = TopByReference;
        (*(void (__fastcall **)(CBaseMatrix *, struct CHWDrawListCache **, _QWORD *))(*(_QWORD *)TopByReference + 24LL))(
          TopByReference,
          v63,
          v62);
        (*(void (__fastcall **)(CBaseMatrix *))(*(_QWORD *)v31 + 16LL))(v31);
        LOBYTE(v32) = v73;
        v86 = v69;
        v89 = 0;
        v80.g = (float)(*((float *)&v70 + 1) * (float)SLODWORD(v62[0])) + (float)(*(float *)&v70 * 0.0);
        v80.r = (float)(*(float *)&v70 * (float)SLODWORD(v63[0])) + (float)(*((float *)&v70 + 1) * 0.0);
        v80.b = (float)(*((float *)&v70 + 2) * (float)SLODWORD(v63[0])) + (float)(*((float *)&v70 + 3) * 0.0);
        v80.a = (float)(*((float *)&v70 + 3) * (float)SLODWORD(v62[0])) + (float)(*((float *)&v70 + 2) * 0.0);
        v33 = (__m128)(unsigned int)v71;
        v34 = (__m128)HIDWORD(v71);
        v87 = *(__int128 *)&v80.r;
        v33.m128_f32[0] = (float)((float)(*(float *)&v71 * (float)SLODWORD(v63[0])) + (float)(*((float *)&v71 + 1) * 0.0))
                        + (float)(0.0 - (float)((float)SLODWORD(v63[0]) * 0.0));
        v34.m128_f32[0] = (float)((float)(*((float *)&v71 + 1) * (float)SLODWORD(v62[0])) + (float)(*(float *)&v71 * 0.0))
                        + (float)(0.0 - (float)((float)SLODWORD(v62[0]) * 0.0));
        v88 = _mm_unpacklo_ps(v33, v34).m128_u64[0];
        v35 = D2DExtendModeFromExtendMode(v32);
        LOBYTE(v36) = v74;
        v90 = v35;
        v91 = D2DExtendModeFromExtendMode(v36);
        v92 = v72;
        v23 = v65;
      }
      else
      {
        v37 = Premultiply(&v80, &v68);
        v86 = 0LL;
        v82 = *(_OWORD *)&v37->r;
      }
      v38 = CWARPDrawListEntry::Create((const struct WARPAlphaBltParameters *)&v81, v75, v66);
      v9 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xAE5u);
        goto LABEL_70;
      }
      v40 = CWARPDrawListCache::SetNewWARPDrawListEntries(v13, (unsigned __int64)v23, v66, v39);
      v9 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xAE9u);
        goto LABEL_70;
      }
LABEL_21:
      if ( v15 )
      {
        v20 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v9 = v20;
        if ( v20 >= 0 )
        {
          D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 61));
          MilCompositingModeToBlendMode(*((unsigned int *)this + 63));
          v53 = CBaseMatrix::GetD2D1Matrix4x4((struct D2D_MATRIX_4X4_F *)v19, &v94);
          v54 = CWARPDrawListCache::AppendWARPDrawListEntries(v13, this, v53);
          v9 = v54;
          if ( v54 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xB69u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB62u);
        }
        goto LABEL_70;
      }
      goto LABEL_62;
    }
    CHWDrawListCache::Invalidate(v14);
    v41 = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 695))[31];
    if ( *((_QWORD *)a3 + 5) > (unsigned __int64)v41 )
      v41 = (__int64 *)*((_QWORD *)a3 + 5);
    *(_QWORD *)&v80.r = v41;
    CpuClipShape::CpuClipShape((CpuClipShape *)&v94);
    if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85))
      && (TreeData = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 695)),
          v44 = CpuClipShape::Initialize((struct CShape **)&v94, v43, (const struct CMILMatrix *)TreeData[25]),
          v9 = v44,
          v44 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xAF8u);
    }
    else
    {
      memset_0((char *)&v81 + 4, 0, 0x60uLL);
      DWORD1(v85) = -1;
      if ( v69 )
      {
        v81 = _xmm;
        v83 = v71;
        v79[26] = v75;
        v82 = v70;
        *(_OWORD *)v84 = _xmm;
        LOBYTE(v62[0]) = v72 != 0;
        BYTE1(v62[0]) = v73;
        v77 = v62[0];
        v78 = v74;
      }
      else
      {
        v81 = *(__int128 *)&v68.r;
      }
      v45 = 1;
      if ( v69 )
      {
        v45 = 3;
        if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)(v69 + 48)) )
          v45 = 11;
      }
      LODWORD(v65) = CCommonRenderingEffect::LookupCommonPixelShader(v45);
      *((_QWORD *)this + 692) = 0LL;
      *((_QWORD *)this + 691) = v46;
      *((_DWORD *)this + 874) = 0;
      *((_DWORD *)this + 1362) = 0;
      *((_WORD *)this + 2772) = 1;
      v47 = CDrawingContext::UseAntialiasingForCpuClipping(this);
      v48 = *((_DWORD *)this + 62) != 0;
      v61 = v47;
      v49 = CDrawListPrimitiveBuilder::AppendRect(
              (__int64)this + 3360,
              &v67.r,
              0LL,
              0x3030303u,
              v48,
              1,
              1,
              (float *)&v81,
              *(CRegionShape **)&v94._11,
              v47);
      v9 = v49;
      if ( v49 >= 0 )
      {
        v19 = TopByReference;
        CBaseMatrix::GetScaleDimensions(TopByReference, (float *)v62, (float *)v63);
        v60 = 0;
        v50 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
                (CDrawingContext *)((char *)this + 3360),
                COERCE_DOUBLE((unsigned __int64)LODWORD(v62[0])),
                COERCE_DOUBLE((unsigned __int64)LODWORD(v63[0])),
                &v60,
                &Src);
        v9 = v50;
        if ( v50 >= 0 )
        {
          if ( !Src )
            goto LABEL_58;
          v51 = CCommonRenderingEffect::CreateInGPUState((CMILRefCountBase *)((char *)Src + 24));
          LOWORD(v62[0]) = SamplerMode::s_ClampClampLinear;
          BYTE2(v62[0]) = 0;
          LOWORD(v63[0]) = v77;
          BYTE2(v63[0]) = v78;
          CCommonRenderingEffect::SetEffectState((__int64)v51, (int)v65, v69, (__int64)v63, 0LL, (__int64)v62);
          v52 = CHWDrawListCache::SetNewPrimitives(
                  v14,
                  *(__int64 *)&v80.r,
                  (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 62) != 0),
                  v60,
                  v61,
                  (struct HWDrawListCacheEntry *)&Src,
                  1u);
          v9 = v52;
          if ( v52 >= 0 )
          {
LABEL_58:
            CpuClipShape::~CpuClipShape((CpuClipShape *)&v94);
            goto LABEL_21;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xB5Bu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0xB49u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xB3Au);
      }
    }
    CpuClipShape::~CpuClipShape((CpuClipShape *)&v94);
  }
LABEL_70:
  if ( Src )
    CMILRefCountBase::Release(Src);
  if ( v66[0] )
    CMILRefCountBase::Release(v66[0]);
  return v9;
}
