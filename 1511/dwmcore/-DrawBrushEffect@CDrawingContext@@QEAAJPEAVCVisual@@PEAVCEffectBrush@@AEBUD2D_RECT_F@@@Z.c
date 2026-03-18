/*
 * XREFs of ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978
 * Callers:
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122930 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18000B9FC (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Invalidate@CHWDrawListCache@@QEAAXXZ @ 0x18002D04C (-Invalidate@CHWDrawListCache@@QEAAXXZ.c)
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x18002D13C (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
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
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800F3968 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawListCache@@@Z @ 0x1800F7850 (-EnsureHWDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@PEAPEAVCHWDrawList.c)
 *     ?AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@_N@Z @ 0x1800FA918 (-AppendHWDrawListEntries@CHWDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@Mil.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800FCF78 (--1CpuClipShape@@QEAA@XZ.c)
 *     ??0CBrushRenderingEffect@@AEAA@PEAVCEffectBrush@@@Z @ 0x1801184F4 (--0CBrushRenderingEffect@@AEAA@PEAVCEffectBrush@@@Z.c)
 *     ?GetInputCount@CEffectBrush@@QEBAIXZ @ 0x180122DD4 (-GetInputCount@CEffectBrush@@QEBAIXZ.c)
 *     ?GetInputParameters@CEffectBrush@@QEAAXIAEBUD2D_SIZE_F@@PEAUCCommonBrushParameters@@@Z @ 0x180122E10 (-GetInputParameters@CEffectBrush@@QEAAXIAEBUD2D_SIZE_F@@PEAUCCommonBrushParameters@@@Z.c)
 *     ?HasUserTransform@CEffectBrush@@QEBA_NI@Z @ 0x180122F20 (-HasUserTransform@CEffectBrush@@QEBA_NI@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBrushEffect(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CEffectBrush *a3,
        const struct D2D_RECT_F *a4)
{
  const struct D2D_RECT_F *v4; // r14
  CRegionShape **v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  float v12; // xmm7_4
  CBaseMatrix *TopByReference; // rax
  const struct IRenderTarget *v14; // r8
  const struct CVisualTree *v15; // rdx
  const struct CMILMatrix *v16; // r12
  int v17; // eax
  CHWDrawListCache *v18; // r15
  __int64 *v19; // r12
  __int64 **TreeData; // rax
  struct CScopedClipStack *v21; // r9
  int v22; // eax
  __m128i v23; // xmm6
  float v24; // eax
  unsigned int v25; // edx
  __m128 right_low; // xmm0
  __m128 bottom_low; // xmm1
  unsigned int v28; // r14d
  _OWORD *v29; // rbx
  _BYTE *v30; // r15
  __int64 v31; // r12
  __int64 v32; // rdi
  CBaseMatrix *v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rdi
  char v36; // r8
  unsigned __int8 v37; // cl
  bool v38; // r14
  int appended; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  bool v47[4]; // [rsp+58h] [rbp-B0h] BYREF
  float v48; // [rsp+5Ch] [rbp-ACh] BYREF
  float v49[2]; // [rsp+60h] [rbp-A8h] BYREF
  CHWDrawListCache *v50; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD *v51; // [rsp+70h] [rbp-98h]
  CBaseMatrix *v52[3]; // [rsp+78h] [rbp-90h] BYREF
  const struct D2D_RECT_F *v53; // [rsp+90h] [rbp-78h]
  D2D_SIZE_F v54; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v55[3]; // [rsp+A0h] [rbp-68h]
  _OWORD v56[2]; // [rsp+B8h] [rbp-50h] BYREF
  CBaseMatrix *v57; // [rsp+D8h] [rbp-30h]
  __int128 v58; // [rsp+E0h] [rbp-28h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  int v60; // [rsp+F8h] [rbp-10h]
  char v61; // [rsp+FCh] [rbp-Ch]
  unsigned __int8 v62; // [rsp+FDh] [rbp-Bh]
  char v63; // [rsp+FEh] [rbp-Ah]
  CMILRefCountBase *Src; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v65[8]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v66[26]; // [rsp+118h] [rbp+10h] BYREF
  char v67; // [rsp+132h] [rbp+2Ah]
  struct D2D_RECT_F v68; // [rsp+138h] [rbp+30h] BYREF
  struct CShape *v69[6]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v70; // [rsp+178h] [rbp+70h] BYREF
  char v71; // [rsp+188h] [rbp+80h] BYREF
  char v72; // [rsp+1B0h] [rbp+A8h] BYREF
  int v73; // [rsp+1D8h] [rbp+D0h]
  _OWORD v74[2]; // [rsp+1E8h] [rbp+E0h] BYREF

  v53 = a4;
  v4 = a4;
  Src = 0LL;
  `vector constructor iterator'(
    (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v65,
    3LL,
    2,
    SamplerMode::`default constructor closure');
  memset_0(v66, 0, 0x20uLL);
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v68 = *v4;
    v9 = CDrawingContext::DrawSolidRectangle(v8, (__int128 *)&v68, &stru_180183AE0);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC3Fu);
    goto LABEL_54;
  }
  v11 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, &v48);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC44u);
    goto LABEL_54;
  }
  v12 = v48;
  if ( v48 > 0.0 )
  {
    v50 = 0LL;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 456));
    v14 = (const struct IRenderTarget *)*((_QWORD *)this + 44);
    v15 = (const struct CVisualTree *)*((_QWORD *)this + 695);
    v16 = TopByReference;
    v52[0] = TopByReference;
    v17 = CVisual::EnsureHWDrawListCacheNoRef(a2, v15, v14, &v50);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC4Eu);
      goto LABEL_54;
    }
    if ( !*((_QWORD *)a3 + 5) )
      *((_QWORD *)a3 + 5) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    v18 = v50;
    if ( CDrawingContext::IsHWDrawListCacheDirty(this, a2, v50) )
    {
      CHWDrawListCache::Invalidate(v18);
      v19 = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 695))[31];
      if ( *((_QWORD *)a3 + 5) > (unsigned __int64)v19 )
        v19 = (__int64 *)*((_QWORD *)a3 + 5);
      *(_QWORD *)&v68.left = v19;
      CpuClipShape::CpuClipShape((CpuClipShape *)v69);
      if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85)) )
      {
        TreeData = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 695));
        v22 = CpuClipShape::Initialize(v69, v21, (const struct CMILMatrix *)TreeData[25]);
        v10 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC66u);
LABEL_17:
          CpuClipShape::~CpuClipShape((CpuClipShape *)v69);
          goto LABEL_54;
        }
      }
      v23 = 0LL;
      *(_OWORD *)&v52[1] = 0LL;
      memset_0((char *)&v70 + 4, 0, 0x60uLL);
      v73 = -1;
      v55[0] = &v71;
      v55[1] = &v72;
      v70 = _xmm;
      v24 = COERCE_FLOAT(CEffectBrush::GetInputCount(a3));
      right_low = (__m128)LODWORD(v4->right);
      bottom_low = (__m128)LODWORD(v4->bottom);
      right_low.m128_f32[0] = right_low.m128_f32[0] - v4->left;
      bottom_low.m128_f32[0] = bottom_low.m128_f32[0] - v4->top;
      v48 = 0.0;
      v49[0] = v24;
      v54 = (D2D_SIZE_F)_mm_unpacklo_ps(right_low, bottom_low).m128_u64[0];
      if ( v24 != 0.0 )
      {
        v28 = LODWORD(v48);
        v29 = v74;
        v51 = v74;
        v30 = v65;
        v31 = 0LL;
        do
        {
          v32 = v55[v31];
          CEffectBrush::GetInputParameters(a3, v28, &v54, (struct CCommonBrushParameters *)v56);
          v33 = v57;
          v34 = v56[0];
          v52[v31 + 1] = v57;
          *v29 = v34;
          if ( v33 )
          {
            *(_OWORD *)(v32 + 24) = _xmm;
            *(_OWORD *)v32 = v58;
            *(_QWORD *)(v32 + 16) = v59;
            v35 = *((_QWORD *)this + 47);
            v67 |= v63;
            if ( *(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 184LL))(v35) + 612) < 37632 )
            {
              v37 = v62;
              LOBYTE(v48) = v60 != 0;
              BYTE1(v48) = v61;
              *(_WORD *)v30 = LOWORD(v48);
              v30[2] = v37;
            }
            else
            {
              v25 = v62;
              if ( !v62 )
                v25 = 3;
              v36 = v61;
              if ( !v61 )
                v36 = 3;
              LOBYTE(v49[1]) = v60 != 0;
              BYTE1(v49[1]) = v36;
              *(_WORD *)v30 = LOWORD(v49[1]);
              v30[2] = v25;
            }
            v29 = v51;
          }
          else
          {
            v70 = v56[1];
          }
          v24 = v49[0];
          ++v29;
          ++v28;
          v51 = v29;
          ++v31;
          v30 += 3;
        }
        while ( v28 < LODWORD(v49[0]) );
        v23 = _mm_loadu_si128((const __m128i *)&v52[1]);
        v4 = v53;
        v18 = v50;
        v19 = *(__int64 **)&v68.left;
      }
      if ( LODWORD(v24) != 1 || CEffectBrush::HasUserTransform(a3, v25) )
        *(struct D2D_RECT_F *)&v52[1] = *v4;
      else
        *(_OWORD *)&v52[1] = v74[0];
      *(__m128i *)((char *)this + 5528) = v23;
      *((_DWORD *)this + 874) = 0;
      *((_DWORD *)this + 1362) = 0;
      *((_WORD *)this + 2772) = 1;
      v38 = CDrawingContext::UseAntialiasingForCpuClipping(this);
      appended = CDrawListPrimitiveBuilder::AppendRect(
                   (__int64)this + 3360,
                   (float *)&v52[1],
                   0LL,
                   0x3030303u,
                   *((_DWORD *)this + 62) != 0,
                   1,
                   1,
                   (float *)&v70,
                   v69[0],
                   v38);
      v10 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0xCDBu);
        goto LABEL_17;
      }
      CBaseMatrix::GetScaleDimensions(v52[0], &v48, v49);
      v47[0] = 0;
      v40 = CDrawListPrimitiveBuilder::ExtractBuiltPrimitiveEntry(
              (CDrawingContext *)((char *)this + 3360),
              COERCE_DOUBLE((unsigned __int64)LODWORD(v48)),
              COERCE_DOUBLE((unsigned __int64)LODWORD(v49[0])),
              v47,
              &Src);
      v10 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xCE9u);
        goto LABEL_17;
      }
      if ( Src )
      {
        if ( Src != (CMILRefCountBase *)-28LL )
          CBrushRenderingEffect::CBrushRenderingEffect((CMILRefCountBase *)((char *)Src + 28), a3);
        v41 = CHWDrawListCache::SetNewPrimitives(
                v18,
                (__int64)v19,
                (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 62) != 0),
                v47[0],
                v38,
                (struct HWDrawListCacheEntry *)&Src,
                1u);
        v10 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xCF5u);
          goto LABEL_17;
        }
      }
      CpuClipShape::~CpuClipShape((CpuClipShape *)v69);
      v16 = v52[0];
    }
    if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85)) && *((_BYTE *)v18 + 60) )
    {
      v42 = CDrawingContext::ApplyRenderStateInternal(this, 1);
      v10 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xCFDu);
        goto LABEL_54;
      }
    }
    else
    {
      v43 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v10 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xD01u);
        goto LABEL_54;
      }
    }
    v44 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 61));
    v45 = CHWDrawListCache::AppendHWDrawListEntries(
            (__int64)v18,
            (__int64)this,
            v16,
            v12,
            *((_DWORD *)this + 63),
            v44 == 0);
    v10 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xD09u);
  }
LABEL_54:
  if ( Src )
    CMILRefCountBase::Release(Src);
  return v10;
}
