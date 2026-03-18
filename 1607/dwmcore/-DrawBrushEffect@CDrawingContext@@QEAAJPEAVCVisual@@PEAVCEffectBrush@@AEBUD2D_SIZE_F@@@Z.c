/*
 * XREFs of ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C
 * Callers:
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013B900 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180058CA4 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18006A4C0 (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z @ 0x1801075A8 (-IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z.c)
 *     ?EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x180109FE4 (-EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x180111F20 (--1CpuClipShape@@QEAA@XZ.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180138A00 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z @ 0x18013C050 (-HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 */

__int64 __fastcall CDrawingContext::DrawBrushEffect(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CEffectBrush *a3,
        const struct D2D_SIZE_F *a4)
{
  struct CDrawListCache *v4; // rsi
  CDrawingContext *v8; // rcx
  int *v9; // r9
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  float v15; // xmm6_4
  const struct CMILMatrix *TopByReference; // r12
  int v17; // eax
  bool HasBackdropInput; // al
  bool v19; // r14
  struct _LIST_ENTRY *Blink; // rax
  bool v21; // cc
  __int64 v22; // rax
  struct _LIST_ENTRY *TreeData; // rax
  int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  bool v29; // cf
  __int64 v30; // r8
  float v31; // xmm2_4
  int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  char v35; // [rsp+40h] [rbp-C0h]
  CDrawListCache *v36; // [rsp+48h] [rbp-B8h] BYREF
  char *v37; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+58h] [rbp-A8h]
  __int128 v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+78h] [rbp-88h]
  __int128 v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+98h] [rbp-68h]
  _QWORD v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B4h] [rbp-4Ch]
  bool v46; // [rsp+B8h] [rbp-48h]
  const struct D2D_SIZE_F *v47; // [rsp+C0h] [rbp-40h] BYREF
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  struct CShape *v50[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F4h] [rbp-Ch]
  _BYTE v53[16]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+110h] [rbp+10h]
  char v55; // [rsp+118h] [rbp+18h]

  v4 = 0LL;
  v47 = a4;
  v36 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v10 = *v9;
    v11 = v9[1];
    v47 = 0LL;
    v48 = v10;
    v49 = v11;
    v12 = CDrawingContext::DrawSolidRectangle(v8, (struct MilRectF *)&v47, (__int64)&unk_1801C74F0);
    v13 = v12;
    if ( v12 >= 0 )
      return v13;
    v34 = 3109;
LABEL_4:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v34);
    goto LABEL_34;
  }
  v14 = *((_DWORD *)v8 + 754);
  if ( v14 )
  {
    v13 = 0;
    v15 = *(float *)(*((_QWORD *)this + 379) + 4LL * (unsigned int)(v14 - 1));
    if ( v15 <= 0.0 )
      return v13;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
    v17 = CVisual::EnsureDrawListCacheNoRef(
            a2,
            *((const struct CVisualTree **)this + 781),
            *((_QWORD *)this + 54),
            0,
            (__int64)&v36);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC34u);
      v4 = v36;
      goto LABEL_34;
    }
    if ( !*((_QWORD *)a3 + 14) )
      *((_QWORD *)a3 + 14) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    HasBackdropInput = CEffectBrush::HasBackdropInput(a3, 0LL);
    v4 = v36;
    v19 = 1;
    if ( HasBackdropInput || CVisual::HasSubtreeSurface(a2) )
    {
      v35 = 1;
    }
    else
    {
      v35 = 0;
      if ( !CDrawingContext::IsDrawListCacheDirty(this, a2, v4) )
        goto LABEL_28;
    }
    v42 = 0;
    v37 = 0LL;
    memset_0(v43, 0, 0x20uLL);
    Blink = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 781))[12].Blink;
    v21 = *((_QWORD *)a3 + 14) <= (unsigned __int64)Blink;
    v50[0] = 0LL;
    if ( !v21 )
      Blink = (struct _LIST_ENTRY *)*((_QWORD *)a3 + 14);
    v36 = (CDrawListCache *)Blink;
    v50[1] = (struct CShape *)&CRectanglesShape::`vftable';
    v50[2] = (struct CShape *)v53;
    v50[3] = (struct CShape *)v53;
    v54 = 0LL;
    v55 = 0;
    v22 = (unsigned int)(*((_DWORD *)this + 234) - 1);
    v51 = 1;
    v52 = 1LL;
    if ( *(_BYTE *)(*((_QWORD *)this + 114) + 80 * v22) )
    {
      TreeData = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 781));
      v24 = CpuClipShape::Initialize(v50, (CDrawingContext *)((char *)this + 912), (FLOAT *)TreeData[9].Blink);
      v13 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC51u);
LABEL_22:
        CpuClipShape::~CpuClipShape((CpuClipShape *)v50);
        goto LABEL_34;
      }
    }
    v25 = *(_OWORD *)TopByReference;
    v26 = *((_OWORD *)TopByReference + 1);
    v42 = *((_DWORD *)TopByReference + 16);
    v38 = v25;
    v27 = *((_OWORD *)TopByReference + 2);
    v39 = v26;
    v28 = *((_OWORD *)TopByReference + 3);
    v40 = v27;
    v29 = *((_DWORD *)this + 82) != 0;
    v43[1] = *v47;
    v41 = v28;
    v44 = v29;
    v45 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 81));
    v43[0] = v30;
    v37 = (char *)this + 3824;
    v46 = CDrawingContext::UseAntialiasingForCpuClipping(this);
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - 1.0)) & _xmm);
    if ( v31 >= 0.0000011920929 || *((_DWORD *)this + 83) > 1u )
      v19 = 0;
    v32 = CEffectBrush::RenderSubgraphs(
            a3,
            this,
            (unsigned __int64)v36,
            a2,
            (const struct CCommonDrawListCacheParameters *)&v37,
            v19,
            v4);
    v13 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC67u);
      goto LABEL_22;
    }
    CpuClipShape::~CpuClipShape((CpuClipShape *)v50);
LABEL_28:
    v12 = CDrawListCache::Render((__int64)v4, this, (float *)TopByReference, v15);
    v13 = v12;
    if ( v12 >= 0 )
    {
      if ( v35 )
        CDrawListCache::Invalidate(v4);
      goto LABEL_34;
    }
    v34 = 3182;
    goto LABEL_4;
  }
  v13 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xC2Au);
LABEL_34:
  if ( (v13 & 0x80000000) != 0 && v4 )
    CDrawListCache::Invalidate(v4);
  return v13;
}
