/*
 * XREFs of ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68
 * Callers:
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008780 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
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
 *     ?GetSamplerModeType@@YA?AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z @ 0x180076C8C (-GetSamplerModeType@@YA-AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180077D1C (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800DC308 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800DCC64 (-EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawList.c)
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800DE1F0 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVID2DContext@@AEBVCMILMatrix@@MW4Enum@MilComp.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800DF55C (--1CpuClipShape@@QEAA@XZ.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x1800E0874 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ??0CBrushRenderingEffect@@AEAA@PEAVCCompiledEffect@@@Z @ 0x1800FF608 (--0CBrushRenderingEffect@@AEAA@PEAVCCompiledEffect@@@Z.c)
 *     ?GetInputCount@CCompiledEffect@@QEBAIXZ @ 0x180112980 (-GetInputCount@CCompiledEffect@@QEBAIXZ.c)
 *     ?GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801129BC (-GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180112A08 (-GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBrushEffect(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CPrimitive *a3,
        struct CCompiledEffect *a4,
        const struct D2D_RECT_F *a5)
{
  CCompiledEffect *v8; // r13
  CDrawingContext *v9; // rcx
  struct D2D_RECT_F v10; // xmm0
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  float v14; // xmm7_4
  const struct CBaseMatrix *TopByReference; // rax
  const struct IRenderTarget *v16; // r8
  const struct CVisualTree *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  CHWDrawListCache *v22; // r15
  __int64 *v23; // rax
  const struct CVisualTree *v24; // r10
  bool v25; // cc
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 **TreeData; // rax
  struct CScopedClipStack *v30; // r9
  int v31; // eax
  __m128i v32; // xmm6
  int v33; // edx
  unsigned int InputCount; // eax
  unsigned int v35; // esi
  __int64 v36; // rax
  struct D2D_MATRIX_3X2_F *v37; // r13
  struct CCompositionSurfaceBitmap **v38; // r12
  int InputSurfaceNoRef; // eax
  struct D2D_RECT_F *v40; // r9
  int InputTransform; // eax
  bool v42; // r12
  int appended; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int D2DInterpolationMode; // eax
  int v49; // eax
  struct D2D_MATRIX_3X2_F *v51; // [rsp+28h] [rbp-E0h]
  bool v52[8]; // [rsp+58h] [rbp-B0h] BYREF
  CHWDrawListCache *v53; // [rsp+60h] [rbp-A8h] BYREF
  struct _D3DCOLORVALUE v54; // [rsp+68h] [rbp-A0h] BYREF
  CMILRefCountBase *Src; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v56[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  char v59; // [rsp+A0h] [rbp-68h]
  struct D2D_MATRIX_3X2_F *v60[2]; // [rsp+A8h] [rbp-60h]
  __m128i v61; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v62[2]; // [rsp+C8h] [rbp-40h] BYREF
  CComplexShape *v63[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v64; // [rsp+E8h] [rbp-20h]
  __int64 v65; // [rsp+F8h] [rbp-10h]
  char v66; // [rsp+100h] [rbp-8h]
  _OWORD v67[4]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v68; // [rsp+148h] [rbp+40h] BYREF
  char v69; // [rsp+158h] [rbp+50h] BYREF
  char v70; // [rsp+180h] [rbp+78h] BYREF
  int v71; // [rsp+1A8h] [rbp+A0h]

  Src = 0LL;
  *(_QWORD *)&v54.r = a4;
  v8 = a4;
  memset_0(v56, 0, 0x28uLL);
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v10 = *a5;
    *(_QWORD *)&v54.r = 0x3F8000003F800000LL;
    *(struct D2D_RECT_F *)v62 = v10;
    *(_QWORD *)&v54.b = 0x3F8000003F800000LL;
    v11 = CDrawingContext::DrawSolidRectangle(v9, (__int128 *)v62, &v54);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC28u);
    goto LABEL_48;
  }
  v13 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, &v53);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC2Du);
    goto LABEL_48;
  }
  v14 = *(float *)&v53;
  if ( *(float *)&v53 > 0.0 )
  {
    v53 = 0LL;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
    v16 = (const struct IRenderTarget *)*((_QWORD *)this + 44);
    v17 = (const struct CVisualTree *)*((_QWORD *)this + 691);
    v18 = *((_OWORD *)TopByReference + 1);
    v67[0] = *(_OWORD *)TopByReference;
    v19 = *((_OWORD *)TopByReference + 2);
    v67[1] = v18;
    v20 = *((_OWORD *)TopByReference + 3);
    v67[2] = v19;
    v67[3] = v20;
    v21 = CVisual::EnsureHWDrawListCacheNoRef(a2, v17, v16, &v53);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC37u);
      goto LABEL_48;
    }
    if ( !*((_QWORD *)a3 + 8) )
      *((_QWORD *)a3 + 8) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    v22 = v53;
    if ( CDrawingContext::IsHWDrawListCacheDirty(this, a2, v53) )
    {
      CHWDrawListCache::Invalidate(v22);
      v23 = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 691))[31];
      v25 = *((_QWORD *)a3 + 8) <= (unsigned __int64)v23;
      v63[0] = 0LL;
      if ( !v25 )
        v23 = (__int64 *)*((_QWORD *)a3 + 8);
      v62[0] = (unsigned __int64)v23;
      v63[1] = (CComplexShape *)&CRectangleShape::`vftable';
      v26 = (unsigned int)(*((_DWORD *)this + 176) - 1);
      v65 = 0LL;
      v27 = 76 * v26;
      v64 = 0LL;
      v28 = *((_QWORD *)this + 85);
      v66 = 0;
      if ( *(_BYTE *)(v27 + v28) )
      {
        TreeData = CVisual::FindTreeData(a2, v24);
        v31 = CpuClipShape::Initialize(v63, v30, (const struct CMILMatrix *)TreeData[25]);
        v12 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xC4Fu);
LABEL_17:
          CpuClipShape::~CpuClipShape(v63);
          goto LABEL_48;
        }
      }
      Src = 0LL;
      v59 = 0;
      v32 = 0LL;
      v56[0] = GetSamplerModeType(1, 0, 0);
      v56[1] = v56[0];
      v61 = 0LL;
      memset_0((char *)&v68 + 4, v33, (unsigned int)(v33 + 96));
      v71 = -1;
      v60[0] = (struct D2D_MATRIX_3X2_F *)&v69;
      v60[1] = (struct D2D_MATRIX_3X2_F *)&v70;
      v68 = _xmm;
      v58 = 0LL;
      v57 = _xmm;
      InputCount = CCompiledEffect::GetInputCount(v8);
      v35 = 0;
      v53 = (CHWDrawListCache *)InputCount;
      if ( InputCount )
      {
        v36 = 0LL;
        while ( 1 )
        {
          v37 = v60[v36];
          v38 = (struct CCompositionSurfaceBitmap **)&v61 + v36;
          InputSurfaceNoRef = CCompiledEffect::GetInputSurfaceNoRef(*(CCompiledEffect **)&v54.r, v35, v38);
          v12 = InputSurfaceNoRef;
          if ( InputSurfaceNoRef < 0 )
            break;
          if ( CCompositionSurfaceBitmap::IsProtectedContent((struct CCompositionSurfaceBitmap *)((char *)*v38 + 40))
            && CDrawingContext::IsScreenReadback(this) )
          {
            v8 = *(CCompiledEffect **)&v54.r;
            v68 = _xmm;
            *v38 = 0LL;
          }
          else
          {
            v40 = (struct D2D_RECT_F *)&v37[1];
            v51 = v37;
            v8 = *(CCompiledEffect **)&v54.r;
            InputTransform = CCompiledEffect::GetInputTransform(*(CCompiledEffect **)&v54.r, v35, a5, v40, v51);
            v12 = InputTransform;
            if ( InputTransform < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, InputTransform, 0xC8Fu);
              goto LABEL_31;
            }
          }
          v36 = ++v35;
          if ( v35 >= (unsigned __int64)v53 )
          {
            v32 = _mm_loadu_si128(&v61);
            goto LABEL_27;
          }
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, InputSurfaceNoRef, 0xC7Fu);
        goto LABEL_31;
      }
LABEL_27:
      *(__m128i *)((char *)this + 5496) = v32;
      *((_DWORD *)this + 866) = 0;
      *((_DWORD *)this + 1354) = 0;
      *((_WORD *)this + 2756) = 1;
      v42 = CDrawingContext::UseAntialiasingForCpuClipping(this);
      appended = CDrawListPrimitiveBuilder::AppendRect(
                   (__int64)this + 3328,
                   &a5->left,
                   0LL,
                   0x3030303u,
                   *((_DWORD *)this + 62) != 0,
                   1,
                   1,
                   (__int64)&v68,
                   v63[0],
                   v42);
      v12 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0xCA3u);
LABEL_31:
        CpuClipShape::~CpuClipShape(v63);
        return v12;
      }
      CBaseMatrix::GetScaleDimensions((CBaseMatrix *)v67, &v54.r, (float *)&v53);
      v52[0] = 0;
      v44 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
              (CDrawingContext *)((char *)this + 3328),
              COERCE_DOUBLE((unsigned __int64)LODWORD(v54.r)),
              COERCE_DOUBLE((unsigned __int64)(unsigned int)v53),
              v52,
              &Src);
      v12 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xCB1u);
        goto LABEL_17;
      }
      if ( Src )
      {
        if ( Src != (CMILRefCountBase *)-28LL )
          CBrushRenderingEffect::CBrushRenderingEffect((CMILRefCountBase *)((char *)Src + 28), v8);
        v45 = CHWDrawListCache::SetNewPrimitives(
                v22,
                v62[0],
                (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 62) != 0),
                v52[0],
                v42,
                (struct HWDrawListCacheEntry *)&Src,
                1u);
        v12 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xCBDu);
          goto LABEL_17;
        }
      }
      CpuClipShape::~CpuClipShape(v63);
    }
    if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85)) && *((_BYTE *)v22 + 60) )
    {
      v46 = CDrawingContext::ApplyRenderStateInternal(this, 1);
      v12 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0xCC5u);
        goto LABEL_48;
      }
LABEL_46:
      D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
      v49 = CHWDrawListCache::AppendHWDrawListEntries(
              (__int64)v22,
              *((_QWORD *)this + 47),
              (const struct CMILMatrix *)v67,
              v14,
              *((_DWORD *)this + 63),
              D2DInterpolationMode == 0);
      v12 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xCD1u);
      goto LABEL_48;
    }
    v47 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v12 = v47;
    if ( v47 >= 0 )
      goto LABEL_46;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0xCC9u);
  }
LABEL_48:
  if ( Src )
    CMILRefCountBase::Release(Src);
  return v12;
}
