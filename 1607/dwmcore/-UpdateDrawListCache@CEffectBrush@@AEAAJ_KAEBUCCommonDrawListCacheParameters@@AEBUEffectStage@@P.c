/*
 * XREFs of ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC
 * Callers:
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800586B8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180058CA4 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005B910 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x180096168 (-Reset@CDrawListPrimitiveBuilder@@QEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Clear@?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ @ 0x1800B247C (-Clear@-$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180110A0C (--4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CoordMap@@QEAA@XZ @ 0x180110FDC (--0CoordMap@@QEAA@XZ.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x180111044 (--1CoordMap@@QEAA@XZ.c)
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x180111108 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011115C (-Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@@Z @ 0x1801112A0 (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV-$SmartIfaceBuffer.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18013528C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z @ 0x1801354F4 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z.c)
 *     ??$New@VCBrushRenderingEffect@@QEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@AEAV4@@?$IfaceBuffer@UIRenderingEffect@@$0DA@@@QEAAPEAVCBrushRenderingEffect@@$$QEBQEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@2@Z @ 0x18013AED0 (--$New@VCBrushRenderingEffect@@QEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@AEAV4@@-$Ifac.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CEffectBrush::UpdateDrawListCache(
        CEffectBrush *this,
        unsigned __int64 a2,
        const struct CCommonDrawListCacheParameters *a3,
        const struct EffectStage *a4,
        struct CDrawListCache *a5)
{
  CDrawListPrimitiveBuilder *v5; // r14
  unsigned int v7; // edi
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  __int64 v13; // rbx
  void (__fastcall ***v14)(_QWORD, __int64); // rsi
  char v15; // r13
  unsigned int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rcx
  _DWORD *v19; // r13
  bool v20; // al
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  char *v23; // rcx
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // r8
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  char *v31; // rcx
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  int v37; // eax
  bool v38; // cl
  int v40; // eax
  int v41; // [rsp+38h] [rbp-D0h]
  char v42; // [rsp+48h] [rbp-C0h]
  __int16 v43; // [rsp+49h] [rbp-BFh]
  unsigned int v44; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v45; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v46; // [rsp+54h] [rbp-B4h] BYREF
  __int16 v47; // [rsp+57h] [rbp-B1h] BYREF
  CDrawListPrimitiveBuilder *v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  struct D2D_SIZE_F v50; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v51; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v52; // [rsp+88h] [rbp-80h]
  int v53; // [rsp+90h] [rbp-78h]
  char v54; // [rsp+94h] [rbp-74h]
  CEffectBrush *v55; // [rsp+98h] [rbp-70h]
  __int128 v56; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-58h]
  int v58; // [rsp+B8h] [rbp-50h]
  char v59; // [rsp+BCh] [rbp-4Ch]
  bool v60; // [rsp+BDh] [rbp-4Bh]
  __int64 v61; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]
  CDrawListCache *v63; // [rsp+D0h] [rbp-38h]
  _OWORD v64[3]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v65; // [rsp+108h] [rbp+0h] BYREF
  char v66; // [rsp+118h] [rbp+10h]
  _DWORD v67[28]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v68[464]; // [rsp+198h] [rbp+90h] BYREF

  v5 = *(CDrawListPrimitiveBuilder **)a3;
  v7 = 0;
  v62 = a2;
  v55 = this;
  v63 = a5;
  v48 = v5;
  memset_0(&v56, 0, 0x20uLL);
  memset_0(&v51, 0, 0x20uLL);
  v9 = *((float *)a3 + 22);
  v10 = *((float *)a3 + 23);
  v11 = 0.0;
  v51.right = v9;
  v12 = 0.0;
  v51.left = 0.0;
  v51.top = 0.0;
  v51.bottom = v10;
  memset_0(&v65, 0, 0x88uLL);
  *(_QWORD *)&v64[0] = 0LL;
  v66 = 1;
  CoordMap::CoordMap((CoordMap *)v68);
  v13 = *((_QWORD *)a3 + 10);
  v49 = v13;
  v14 = 0LL;
  CDrawListCache::Invalidate(a5);
  v65 = _xmm;
  `vector constructor iterator'(
    (TemporaryConfiguration *)&v46,
    3LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))SamplerMode::SamplerMode);
  v15 = 0;
  v16 = 0;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  if ( !*((_DWORD *)a4 + 1) )
  {
LABEL_28:
    CMILMatrix::Get2DScaleDimensions(
      (const struct CCommonDrawListCacheParameters *)((char *)a3 + 8),
      (float *)&v44,
      (float *)&v45);
    v35 = *((_DWORD *)a3 + 24);
    v60 = v13 == *((_QWORD *)a3 + 10);
    v59 = *((_BYTE *)a3 + 104);
    LODWORD(v56) = v44;
    *(_QWORD *)((char *)&v56 + 4) = __PAIR64__(v35, v45);
    v57 = v13;
    v53 = 50529027;
    v54 |= 3u;
    v52 = v68;
    v50 = (struct D2D_SIZE_F)v55;
    v58 = ((_BYTE)v43 != 0 ? 2 : 0) | (v15 != 0 ? 4 : 0) | (v42 != 0 ? 0x10 : 0) | 0x20;
    IfaceBuffer<IRenderingEffect,48>::New<CBrushRenderingEffect,CEffectBrush * const,EffectStage const &,SamplerMode &,SamplerMode &>(
      (__int64)v64,
      (__int64 *)&v50,
      (__int64)a4,
      &v46,
      &v47);
    CDrawListPrimitiveBuilder::Begin(v5, &v56, v64);
    v36 = CDrawListPrimitiveBuilder::Insert(v5, &v51, (const struct PrimitiveVertexAttributesDesc *)&v65, 0LL);
    v7 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x6B1u);
    }
    else
    {
      v37 = CDrawListPrimitiveBuilder::End(v5);
      v7 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x6B3u);
      }
      else
      {
        v38 = *((_QWORD *)a3 + 10) && *(_DWORD *)(*(_QWORD *)a3 + 144LL);
        v40 = CDrawListCache::Update(
                v63,
                v62,
                *(struct CDrawListEntry ***)(*(_QWORD *)a3 + 80LL),
                *(_DWORD *)(*(_QWORD *)a3 + 104LL),
                (enum D2D1_ANTIALIAS_MODE)*((_DWORD *)a3 + 24),
                v38,
                *((_BYTE *)a3 + 104));
        v7 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x6BCu);
        else
          v7 = 0;
      }
    }
    goto LABEL_35;
  }
  while ( 1 )
  {
    v17 = v16;
    v18 = *((_QWORD *)a4 + 9 * v16 + 1);
    v19 = &v67[13 * v16];
    *(_OWORD *)(v19 + 9) = _xmm;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 96LL))(v18) )
      *((_DWORD *)&v65 + v17) = 1065353216;
    if ( *((_BYTE *)a4 + 72 * v17 + 16) )
    {
      v20 = *((_BYTE *)a4 + 72 * v17 + 72) == 0;
      v21 = *(_OWORD *)((char *)a4 + 72 * v17 + 20);
      LOWORD(v45) = v20;
      v22 = *(_OWORD *)((char *)a4 + 72 * v17 + 36);
      v23 = (char *)&v46 + v17;
      *(_OWORD *)v19 = v21;
      *(_WORD *)&v23[2 * v17] = v20;
      v24 = *((_DWORD *)a4 + 18 * v17 + 13);
      *((_OWORD *)v19 + 1) = v22;
      v19[8] = v24;
      v15 = HIBYTE(v43);
      v23[2 * v17 + 2] = 0;
      goto LABEL_26;
    }
    v25 = *((_QWORD *)v55 + 37) + 304LL * *((unsigned int *)a4 + 18 * v17 + 5);
    Matrix3x3::operator=(v19, (_DWORD *)(v25 + 88));
    CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*(CCompiledEffectTemplate **)(v26 + 136));
    if ( ((*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)CompiledEffectNoRef + 40LL))(
            CompiledEffectNoRef,
            *(unsigned int *)a4) & 2) == 0 )
    {
      if ( IsEmpty((const struct D2D_RECT_F *)v25) )
        goto LABEL_34;
      if ( v11 < *(float *)v25 )
      {
        v11 = *(float *)v25;
        v51.left = *(FLOAT *)v25;
      }
      if ( v12 < *(float *)(v25 + 4) )
      {
        v12 = *(float *)(v25 + 4);
        v51.top = v12;
      }
      if ( *(float *)(v25 + 8) < v9 )
      {
        v9 = *(float *)(v25 + 8);
        v51.right = v9;
      }
      if ( *(float *)(v25 + 12) < v10 )
      {
        v10 = *(float *)(v25 + 12);
        v51.bottom = v10;
      }
      if ( IsEmpty(&v51) )
        goto LABEL_34;
      v29 = *(_QWORD *)(v25 + 296);
      if ( v29 )
      {
        if ( v49 )
        {
          v30 = CShape::Combine(v49, v28, v29, 0LL, 1, &v61);
          v7 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x66Du);
            goto LABEL_34;
          }
          if ( v14 )
            (**v14)(v14, 1LL);
          v14 = (void (__fastcall ***)(_QWORD, __int64))v61;
          v49 = v61;
        }
        else
        {
          v49 = *(_QWORD *)(v25 + 296);
        }
      }
    }
    v31 = (char *)&v46 + v17;
    v15 = *(_BYTE *)(v25 + 288) | HIBYTE(v43);
    LOBYTE(v43) = *(_BYTE *)(v25 + 289) | v43;
    v42 |= *(_BYTE *)(v25 + 291);
    *(_WORD *)&v31[2 * v17] = *(_WORD *)(v25 + 112);
    v31[2 * v17 + 2] = *(_BYTE *)(v25 + 114);
    HIBYTE(v43) = v15;
    if ( *(_DWORD *)(v25 + 116) == 1 )
    {
      v32 = (__m128)*(unsigned int *)(v25 + 80);
      v33 = (__m128)*(unsigned int *)(v25 + 84);
      v32.m128_f32[0] = v32.m128_f32[0] - *(float *)(v25 + 72);
      v33.m128_f32[0] = v33.m128_f32[0] - *(float *)(v25 + 76);
      v41 = *(unsigned __int8 *)(v25 + 168);
      v50 = (struct D2D_SIZE_F)_mm_unpacklo_ps(v32, v33).m128_u64[0];
      v34 = CoordMap::AddNineGrid(
              (CoordMap *)v68,
              v44,
              (const struct D2D_RECT_F *)(v25 + 136),
              (const struct Insets *)(v25 + 152),
              &v50,
              (const struct Insets *)(v25 + 120),
              v41);
      v7 = v34;
      if ( v34 < 0 )
        break;
    }
LABEL_26:
    v16 = v44 + 1;
    v44 = v16;
    if ( v16 >= *((_DWORD *)a4 + 1) )
    {
      v13 = v49;
      v5 = v48;
      goto LABEL_28;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x685u);
LABEL_34:
  v5 = v48;
LABEL_35:
  if ( v14 )
    (**v14)(v14, 1LL);
  CDrawListPrimitiveBuilder::Reset(v5);
  CoordMap::~CoordMap((CoordMap *)v68);
  SmartIfaceBuffer<IRenderingEffect,48,RenderingEffectResourceManagement>::Clear((__int64 *)v64);
  return v7;
}
