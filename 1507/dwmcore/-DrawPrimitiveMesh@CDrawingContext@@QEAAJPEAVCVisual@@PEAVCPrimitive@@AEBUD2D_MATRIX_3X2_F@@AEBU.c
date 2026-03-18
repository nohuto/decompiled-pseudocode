/*
 * XREFs of ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C
 * Callers:
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008780 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800087A0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z @ 0x180022380 (-GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsScreenReadback@CDrawingContext@@QEAA_NXZ @ 0x180022DB8 (-IsScreenReadback@CDrawingContext@@QEAA_NXZ.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18002C7EC (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x180073B6C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x180073C38 (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
 *     ?LookupCommonPixelShader@CCommonRenderingEffect@@SA?AW4Enum@CommonRenderingPixelShaders@@K@Z @ 0x180073FE4 (-LookupCommonPixelShader@CCommonRenderingEffect@@SA-AW4Enum@CommonRenderingPixelShaders@@K@Z.c)
 *     ?GetSamplerModeType@@YA?AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z @ 0x180076C8C (-GetSamplerModeType@@YA-AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180077D1C (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?GetD2D1Matrix4x4@CBaseMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x180099EF8 (-GetD2D1Matrix4x4@CBaseMatrix@@QEBA-AUD2D_MATRIX_4X4_F@@XZ.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180099FBC (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800DC308 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DCC64 (-EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawList.c)
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 *     ?SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@W42SamplerMode@@12@Z @ 0x1800DEC78 (-SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositio.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800DF55C (--1CpuClipShape@@QEAA@XZ.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x1800E0874 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_ANTIALIAS_MODE@@W4Enum@BlendMode@@W4D2D1_INTERPOLATION_MODE@@M@Z @ 0x1800FEB1C (-AppendWARPDrawListEntries@CWARPDrawListCache@@QEAAJPEAVID2DContext@@UD2D_MATRIX_4X4_F@@W4D2D1_A.c)
 *     ?Invalidate@CWARPDrawListCache@@QEAAXXZ @ 0x1800FEE4C (-Invalidate@CWARPDrawListCache@@QEAAXXZ.c)
 *     ?SetNewWARPDrawListEntries@CWARPDrawListCache@@QEAAJ_KPEAPEAVCWARPDrawListEntry@@I@Z @ 0x1800FEECC (-SetNewWARPDrawListEntries@CWARPDrawListCache@@QEAAJ_KPEAPEAVCWARPDrawListEntry@@I@Z.c)
 *     ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x1800FEFA4 (-MilCompositingModeToBlendMode@@YA-AW4Enum@BlendMode@@W41MilCompositingMode@@@Z.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x1800FF108 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z.c)
 *     ?CreateInGPUState@CCommonRenderingEffect@@SAPEAV1@PEAUGPUState@@@Z @ 0x1800FF5E0 (-CreateInGPUState@CCommonRenderingEffect@@SAPEAV1@PEAUGPUState@@@Z.c)
 *     ?EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1801039B8 (-EnsureWARPDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCWARPDraw.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveMesh(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CPrimitive *a3,
        const struct D2D_MATRIX_3X2_F *a4,
        const struct D2D_RECT_F *a5)
{
  CDrawingContext *v8; // rcx
  struct _D3DCOLORVALUE v9; // xmm0
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  float v13; // xmm8_4
  __int64 v14; // r15
  int v15; // eax
  const struct IRenderTarget *v16; // r8
  const struct CVisualTree *v17; // rdx
  int v18; // eax
  CWARPDrawListCache *v19; // r13
  __int128 v20; // xmm0
  bool v21; // cf
  __int64 v22; // rcx
  struct D2D_MATRIX_4X4_F *D2D1Matrix4x4; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int CurrentRenderingRealization; // eax
  struct IBitmapRealization *v28; // r12
  float m12; // xmm0_4
  float v30; // xmm3_4
  D3DVALUE v31; // xmm1_4
  float m22; // xmm0_4
  float m21; // xmm3_4
  float v34; // xmm1_4
  D3DVALUE v35; // xmm2_4
  __m128 dy_low; // xmm3
  D3DVALUE v37; // xmm1_4
  float v38; // xmm0_4
  float dx; // xmm1_4
  __m128 v40; // xmm2
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // r9d
  int v45; // eax
  struct D2D_MATRIX_4X4_F *v46; // rax
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  int v50; // eax
  const struct CBaseMatrix *TopByReference; // rax
  const struct IRenderTarget *v52; // r8
  const struct CVisualTree *v53; // rdx
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  int v57; // eax
  CHWDrawListCache *v58; // rdi
  __int64 *v59; // rax
  const struct CVisualTree *v60; // rdx
  bool v61; // cc
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 **TreeData; // rax
  struct CScopedClipStack *v66; // r9
  int v67; // eax
  int v68; // eax
  int v69; // ecx
  int v70; // edx
  __int128 v71; // xmm2
  __int64 v72; // xmm1_8
  __m128 v73; // xmm2
  int v74; // ecx
  bool v75; // r13
  int appended; // eax
  struct CCommonRenderingEffect *v77; // rax
  int v78; // eax
  int v79; // eax
  int D2DInterpolationMode; // eax
  int v81; // eax
  unsigned int v83; // [rsp+28h] [rbp-E0h]
  bool v84[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct IBitmapRealization *v85; // [rsp+60h] [rbp-A8h] BYREF
  float v86[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _D3DCOLORVALUE v87; // [rsp+70h] [rbp-98h] BYREF
  const struct D2D_MATRIX_3X2_F *v88; // [rsp+80h] [rbp-88h]
  struct CWARPDrawListEntry *v89; // [rsp+88h] [rbp-80h] BYREF
  CMILRefCountBase *Src; // [rsp+90h] [rbp-78h] BYREF
  int SamplerModeType; // [rsp+98h] [rbp-70h] BYREF
  __int128 v92; // [rsp+A0h] [rbp-68h]
  __int64 v93; // [rsp+B0h] [rbp-58h]
  __int16 v94; // [rsp+B8h] [rbp-50h]
  struct _D3DCOLORVALUE v95; // [rsp+C0h] [rbp-48h] BYREF
  struct D2D_MATRIX_4X4_F v96; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v97; // [rsp+118h] [rbp+10h] BYREF
  __int128 v98; // [rsp+128h] [rbp+20h]
  __int64 v99; // [rsp+138h] [rbp+30h]
  _DWORD v100[13]; // [rsp+140h] [rbp+38h]
  __int128 v101; // [rsp+174h] [rbp+6Ch]
  __int64 v102; // [rsp+188h] [rbp+80h]
  __int128 v103; // [rsp+190h] [rbp+88h]
  unsigned __int64 v104; // [rsp+1A0h] [rbp+98h]
  char v105; // [rsp+1A8h] [rbp+A0h]
  __int64 v106; // [rsp+1BCh] [rbp+B4h]
  int v107; // [rsp+1C4h] [rbp+BCh]
  float v108; // [rsp+1C8h] [rbp+C0h]
  D2D_MATRIX_4X4_F v109; // [rsp+1D8h] [rbp+D0h] BYREF

  v88 = a4;
  Src = 0LL;
  memset_0(&SamplerModeType, 0, 0x28uLL);
  v85 = 0LL;
  v89 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)*a5;
    *(_QWORD *)&v87.r = 0x3F8000003F800000LL;
    *(struct _D3DCOLORVALUE *)&v95.r = *(struct _D3DCOLORVALUE *)&v9.r;
    *(_QWORD *)&v87.b = 0x3F8000003F800000LL;
    v10 = CDrawingContext::DrawSolidRectangle(v8, (__int128 *)&v95, &v87);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA79u);
    goto LABEL_89;
  }
  v12 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, v86);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xA7Eu);
LABEL_89:
    v28 = v85;
    goto LABEL_90;
  }
  v13 = v86[0];
  if ( v86[0] <= 0.0 )
    goto LABEL_89;
  v14 = *((_QWORD *)a3 + 7);
  if ( !*((_BYTE *)this + 5941) || CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
  {
    *(_QWORD *)&v87.r = 0LL;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
    v52 = (const struct IRenderTarget *)*((_QWORD *)this + 44);
    v53 = (const struct CVisualTree *)*((_QWORD *)this + 691);
    v54 = *((_OWORD *)TopByReference + 1);
    *(_OWORD *)&v109._11 = *(_OWORD *)TopByReference;
    v55 = *((_OWORD *)TopByReference + 2);
    *(_OWORD *)&v109.m[1][0] = v54;
    v56 = *((_OWORD *)TopByReference + 3);
    *(_OWORD *)&v109.m[2][0] = v55;
    *(_OWORD *)&v109.m[3][0] = v56;
    v57 = CVisual::EnsureHWDrawListCacheNoRef(a2, v53, v52, (struct CHWDrawListCache **)&v87);
    v11 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0xAE3u);
      goto LABEL_89;
    }
    if ( !*((_QWORD *)a3 + 8) )
      *((_QWORD *)a3 + 8) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    v58 = *(CHWDrawListCache **)&v87.r;
    if ( !CDrawingContext::IsHWDrawListCacheDirty(this, a2, *(struct CHWDrawListCache **)&v87.r) )
      goto LABEL_81;
    CHWDrawListCache::Invalidate(v58);
    v59 = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 691))[31];
    v61 = *((_QWORD *)a3 + 8) <= (unsigned __int64)v59;
    *(_OWORD *)&v96.m[1][0] = 0LL;
    if ( !v61 )
      v59 = (__int64 *)*((_QWORD *)a3 + 8);
    *(_QWORD *)&v95.r = v59;
    *(_QWORD *)&v96.m[0][2] = &CRectangleShape::`vftable';
    v62 = (unsigned int)(*((_DWORD *)this + 176) - 1);
    *(_QWORD *)&v96._11 = 0LL;
    v63 = 76 * v62;
    v64 = *((_QWORD *)this + 85);
    *(_QWORD *)&v96.m[2][0] = 0LL;
    LOBYTE(v96.m[2][2]) = 0;
    if ( *(_BYTE *)(v63 + v64) )
    {
      TreeData = CVisual::FindTreeData(a2, v60);
      v67 = CpuClipShape::Initialize((CComplexShape **)&v96, v66, (const struct CMILMatrix *)TreeData[25]);
      v11 = v67;
      if ( v67 < 0 )
      {
        v83 = 2811;
LABEL_53:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, v83);
        CpuClipShape::~CpuClipShape((CComplexShape **)&v96);
        goto LABEL_89;
      }
    }
    v68 = *((_DWORD *)this + 61);
    v69 = 0;
    Src = 0LL;
    v94 = 0;
    if ( v68 == 1 )
    {
      v69 = 1;
      goto LABEL_64;
    }
    if ( v68 > 1 )
    {
      if ( v68 <= 3 )
      {
        v69 = 2;
        goto LABEL_64;
      }
      switch ( v68 )
      {
        case 4:
          goto LABEL_60;
        case 5:
          v69 = 4;
          break;
        case 6:
LABEL_60:
          v69 = 3;
          break;
      }
    }
LABEL_64:
    SamplerModeType = GetSamplerModeType(v69, 0, 0);
    memset_0((char *)&v97 + 4, v70, (unsigned int)(v70 + 96));
    DWORD1(v101) = -1;
    if ( v14 )
    {
      if ( CCompositionSurfaceBitmap::IsProtectedContent((CCompositionSurfaceBitmap *)(v14 + 40))
        && CDrawingContext::IsScreenReadback(this) )
      {
        v71 = _xmm;
        v14 = 0LL;
        v97 = _xmm;
      }
      else
      {
        v71 = _xmm;
        v97 = _xmm;
        v72 = *(_QWORD *)&v88->m[2][0];
        v98 = *(_OWORD *)&v88->m11;
        *(_OWORD *)v100 = _xmm;
        v99 = v72;
      }
    }
    else
    {
      v73 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 152));
      LODWORD(v97) = v73.m128_i32[0];
      HIDWORD(v97) = *((_DWORD *)a3 + 41);
      DWORD1(v97) = _mm_shuffle_ps(v73, v73, 85).m128_u32[0];
      DWORD2(v97) = _mm_shuffle_ps(v73, v73, 170).m128_u32[0];
      v71 = v97;
    }
    v93 = 0LL;
    v74 = 1;
    v92 = v71;
    if ( v14 )
    {
      v74 = 3;
      if ( *(_BYTE *)(v14 + 450) )
        v74 = 11;
    }
    LODWORD(v88) = CCommonRenderingEffect::LookupCommonPixelShader(v74);
    *((_QWORD *)this + 688) = 0LL;
    *((_QWORD *)this + 687) = v14;
    *((_DWORD *)this + 866) = 0;
    *((_DWORD *)this + 1354) = 0;
    *((_WORD *)this + 2756) = 1;
    v75 = CDrawingContext::UseAntialiasingForCpuClipping(this);
    appended = CDrawListPrimitiveBuilder::AppendRect(
                 (__int64)this + 3328,
                 &a5->left,
                 0LL,
                 0x3030303u,
                 *((_DWORD *)this + 62) != 0,
                 1,
                 1,
                 (__int64)&v97,
                 *(CShape **)&v96._11,
                 v75);
    v11 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0xB4Eu);
      CpuClipShape::~CpuClipShape((CComplexShape **)&v96);
      return v11;
    }
    CBaseMatrix::GetScaleDimensions((CBaseMatrix *)&v109, v86, &v86[1]);
    v84[0] = 0;
    v67 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
            (CDrawingContext *)((char *)this + 3328),
            COERCE_DOUBLE((unsigned __int64)LODWORD(v86[0])),
            COERCE_DOUBLE((unsigned __int64)LODWORD(v86[1])),
            v84,
            &Src);
    v11 = v67;
    if ( v67 < 0 )
    {
      v83 = 2909;
      goto LABEL_53;
    }
    if ( Src )
    {
      v77 = CCommonRenderingEffect::CreateInGPUState((CMILRefCountBase *)((char *)Src + 24));
      CCommonRenderingEffect::SetEffectState((__int64)v77, (int)v88, v14, SamplerModeType, 0LL, 9u);
      v67 = CHWDrawListCache::SetNewPrimitives(
              *(CHWDrawListCache **)&v87.r,
              *(__int64 *)&v95.r,
              (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 62) != 0),
              v84[0],
              v75,
              (struct HWDrawListCacheEntry *)&Src,
              1u);
      v11 = v67;
      if ( v67 < 0 )
      {
        v83 = 2927;
        goto LABEL_53;
      }
    }
    CpuClipShape::~CpuClipShape((CComplexShape **)&v96);
    v58 = *(CHWDrawListCache **)&v87.r;
LABEL_81:
    if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85)) && *((_BYTE *)v58 + 60) )
    {
      v78 = CDrawingContext::ApplyRenderStateInternal(this, 1);
      v11 = v78;
      if ( v78 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0xB77u);
        goto LABEL_89;
      }
    }
    else
    {
      v79 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v11 = v79;
      if ( v79 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0xB7Bu);
        goto LABEL_89;
      }
    }
    D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
    v81 = CHWDrawListCache::AppendHWDrawListEntries(
            *(__int64 *)&v87.r,
            *((_QWORD *)this + 47),
            (const struct CMILMatrix *)&v109,
            v13,
            *((_DWORD *)this + 63),
            D2DInterpolationMode == 0);
    v11 = v81;
    if ( v81 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0xB83u);
    goto LABEL_89;
  }
  v15 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xA87u);
    goto LABEL_89;
  }
  v16 = (const struct IRenderTarget *)*((_QWORD *)this + 44);
  v17 = (const struct CVisualTree *)*((_QWORD *)this + 691);
  *(_QWORD *)&v87.r = 0LL;
  v18 = CVisual::EnsureWARPDrawListCacheNoRef(a2, v17, v16, (struct CWARPDrawListCache **)&v87);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xA8Au);
    goto LABEL_89;
  }
  if ( !*((_QWORD *)a3 + 8) )
    *((_QWORD *)a3 + 8) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
  v19 = *(CWARPDrawListCache **)&v87.r;
  if ( *(_QWORD *)(*(_QWORD *)&v87.r + 32LL) && !CCommonRegistryData::m_fDisableDrawListCaching )
  {
    v28 = v85;
    goto LABEL_41;
  }
  CWARPDrawListCache::Invalidate(*(CWARPDrawListCache **)&v87.r);
  *(_QWORD *)&v87.r = *((_QWORD *)a3 + 8);
  memset_0(&v97, 0, 0xB8uLL);
  v20 = (__int128)*a5;
  v21 = *((_DWORD *)this + 62) != 0;
  v108 = v13;
  LODWORD(v99) = v21;
  v22 = *((unsigned int *)this + 63);
  v97 = v20;
  HIDWORD(v99) = MilCompositingModeToBlendMode(v22);
  LOWORD(v100[0]) = 256;
  D2D1Matrix4x4 = CBaseMatrix::GetD2D1Matrix4x4((struct D2D_MATRIX_4X4_F *)((char *)this + 276), &v109);
  v24 = *(_OWORD *)&D2D1Matrix4x4->m[1][0];
  *(_OWORD *)&v100[1] = *(_OWORD *)&D2D1Matrix4x4->_11;
  v25 = *(_OWORD *)&D2D1Matrix4x4->m[2][0];
  *(_OWORD *)&v100[5] = v24;
  v26 = *(_OWORD *)&D2D1Matrix4x4->m[3][0];
  *(_OWORD *)&v100[9] = v25;
  v101 = v26;
  if ( !v14 )
  {
    v98 = *(_OWORD *)&Premultiply(&v95, (const struct _D3DCOLORVALUE *)((char *)a3 + 152))->r;
    goto LABEL_35;
  }
  if ( !CCompositionSurfaceBitmap::IsProtectedContent((CCompositionSurfaceBitmap *)(v14 + 40))
    || !CDrawingContext::IsScreenReadback(this) )
  {
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                    (CCompositionSurfaceBitmap *)(v14 + 40),
                                    &v85);
    v11 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRenderingRealization, 0xAB8u);
      goto LABEL_89;
    }
    v28 = v85;
    (*(void (__fastcall **)(struct IBitmapRealization *, float *, float *))(*(_QWORD *)v85 + 24LL))(v85, v86, &v86[1]);
    v102 = v14;
    m12 = v88->m12;
    v30 = m12 * (float)SLODWORD(v86[1]);
    v31 = (float)(v88->m11 * (float)SLODWORD(v86[0])) + (float)(m12 * 0.0);
    m22 = v88->m22;
    v95.g = v30 + (float)(v88->m11 * 0.0);
    m21 = v88->m21;
    v95.r = v31;
    v34 = m21 * (float)SLODWORD(v86[0]);
    v35 = (float)(m22 * (float)SLODWORD(v86[1])) + (float)(m21 * 0.0);
    dy_low = (__m128)LODWORD(v88->dy);
    v37 = v34 + (float)(m22 * 0.0);
    v38 = v88->dy * 0.0;
    v95.a = v35;
    v95.b = v37;
    dx = v88->dx;
    v40 = (__m128)LODWORD(dx);
    v105 = 0;
    v41 = 0;
    v106 = 0LL;
    v42 = *((_DWORD *)this + 61);
    v103 = *(__int128 *)&v95.r;
    v40.m128_f32[0] = (float)((float)(dx * (float)SLODWORD(v86[0])) + v38)
                    + (float)(0.0 - (float)((float)SLODWORD(v86[0]) * 0.0));
    dy_low.m128_f32[0] = (float)((float)(dy_low.m128_f32[0] * (float)SLODWORD(v86[1])) + (float)(dx * 0.0))
                       + (float)(0.0 - (float)((float)SLODWORD(v86[1]) * 0.0));
    v104 = _mm_unpacklo_ps(v40, dy_low).m128_u64[0];
    if ( v42 == 1 )
    {
      v41 = 1;
      goto LABEL_33;
    }
    if ( v42 > 1 )
    {
      if ( v42 <= 3 )
      {
        v41 = 2;
        goto LABEL_33;
      }
      switch ( v42 )
      {
        case 4:
          goto LABEL_29;
        case 5:
          v41 = 4;
          break;
        case 6:
LABEL_29:
          v41 = 3;
          break;
      }
    }
LABEL_33:
    v107 = v41;
    goto LABEL_36;
  }
  v98 = _xmm;
LABEL_35:
  v28 = v85;
  v102 = 0LL;
LABEL_36:
  v43 = CWARPDrawListEntry::Create((const struct WARPAlphaBltParameters *)&v97, &v89);
  v11 = v43;
  if ( v43 >= 0 )
  {
    v45 = CWARPDrawListCache::SetNewWARPDrawListEntries(v19, *(unsigned __int64 *)&v87.r, &v89, v44);
    v11 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xAD1u);
      goto LABEL_90;
    }
LABEL_41:
    v46 = CBaseMatrix::GetD2D1Matrix4x4((struct D2D_MATRIX_4X4_F *)((char *)this + 276), &v96);
    v47 = *(_OWORD *)&v46->m[1][0];
    *(_OWORD *)&v109._11 = *(_OWORD *)&v46->_11;
    v48 = *(_OWORD *)&v46->m[2][0];
    *(_OWORD *)&v109.m[1][0] = v47;
    v49 = *(_OWORD *)&v46->m[3][0];
    *(_OWORD *)&v109.m[2][0] = v48;
    *(_OWORD *)&v109.m[3][0] = v49;
    CDrawingContext::GetD2DInterpolationMode(this);
    MilCompositingModeToBlendMode(*((unsigned int *)this + 63));
    v50 = CWARPDrawListCache::AppendWARPDrawListEntries(v19, *((_QWORD *)this + 47), &v109);
    v11 = v50;
    if ( v50 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0xAD9u);
    goto LABEL_90;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xACDu);
LABEL_90:
  if ( Src )
    CMILRefCountBase::Release(Src);
  if ( v89 )
    CMILRefCountBase::Release(v89);
  if ( v28 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v28 + 16LL))(v28);
  return v11;
}
