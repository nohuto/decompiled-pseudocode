/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@AEBUD2D_SIZE_F@@1H@Z @ 0x1801354F4
 * Callers:
 *     ?ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z @ 0x180133934 (-ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180135340 (-AddEntry@CoordMap@@AEAAJAEAV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMo.c)
 *     ?AddMultipleAndSet@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z @ 0x180135460 (-AddMultipleAndSet@-$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x1801648B4 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        int a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_SIZE_F *a5,
        const struct Insets *a6,
        int a7)
{
  float left; // xmm12_4
  float v11; // xmm15_4
  float v12; // xmm14_4
  float v13; // xmm13_4
  __int64 v14; // rcx
  float *v15; // r8
  float v16; // xmm9_4
  float v17; // xmm11_4
  float v18; // xmm8_4
  float v19; // xmm10_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  bool v24; // r12
  int v25; // eax
  unsigned int v26; // ebx
  float v27; // xmm13_4
  float v28; // xmm2_4
  float v29; // xmm12_4
  int v30; // eax
  int v31; // eax
  float v32; // xmm0_4
  float v33; // xmm9_4
  int v34; // eax
  int v35; // eax
  float v36; // xmm7_4
  float v37; // xmm9_4
  float v38; // xmm0_4
  float v39; // xmm8_4
  int v40; // eax
  float v41; // xmm2_4
  float v42; // xmm8_4
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  bool v48; // [rsp+38h] [rbp-D0h]
  float v49; // [rsp+3Ch] [rbp-CCh]
  float v50; // [rsp+3Ch] [rbp-CCh]
  float right; // [rsp+40h] [rbp-C8h]
  float v52; // [rsp+40h] [rbp-C8h]
  float top; // [rsp+44h] [rbp-C4h]
  float v54; // [rsp+44h] [rbp-C4h]
  float bottom; // [rsp+48h] [rbp-C0h]
  float v56; // [rsp+48h] [rbp-C0h]
  float v57; // [rsp+4Ch] [rbp-BCh]
  float v58; // [rsp+4Ch] [rbp-BCh]
  FLOAT v59; // [rsp+50h] [rbp-B8h]
  float v60; // [rsp+54h] [rbp-B4h]
  FLOAT v61; // [rsp+58h] [rbp-B0h] BYREF
  float v62; // [rsp+5Ch] [rbp-ACh]
  float v63; // [rsp+60h] [rbp-A8h]
  float v64; // [rsp+64h] [rbp-A4h]

  left = a3->left;
  right = a3->right;
  bottom = a3->bottom;
  top = a3->top;
  v57 = right - a3->left;
  v60 = bottom - top;
  Insets::Clamp(&v61, a4);
  v49 = v61;
  if ( v61 < 0.00000011920929 )
    v49 = 0.0;
  v11 = v63;
  if ( v63 < 0.00000011920929 )
    v11 = 0.0;
  v12 = v62;
  if ( v62 < 0.00000011920929 )
    v12 = 0.0;
  v13 = v64;
  if ( v64 < 0.00000011920929 )
    v13 = 0.0;
  Insets::Clamp(&v61, a6);
  v16 = v61;
  if ( v61 < 0.5 )
    v16 = 0.0;
  v17 = v63;
  if ( v63 < 0.5 )
    v17 = 0.0;
  v18 = v62;
  if ( v62 < 0.5 )
    v18 = 0.0;
  v19 = v64;
  if ( v64 < 0.5 )
    v19 = 0.0;
  v20 = v49;
  v21 = v57;
  v22 = v57 / *v15;
  v59 = left + v49;
  v50 = v22;
  v52 = right - v11;
  v54 = top + v12;
  v56 = bottom - v13;
  v58 = v60 / v15[1];
  v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v11 + v20) - v21)) & _xmm);
  v24 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v13 + v12) - v60)) & _xmm) > 0.0000011920929;
  v48 = v13 > 0.0;
  if ( v20 <= 0.0 )
  {
    if ( v23 <= 0.0000011920929 )
    {
      v27 = v59;
      goto LABEL_22;
    }
  }
  else
  {
    v61 = left;
    v62 = left;
    v63 = left;
    v25 = CoordMap::AddEntry(v14, (__int64 *)this, a2, (__int64)&v61, 0);
    v26 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1C5u);
      return v26;
    }
    v22 = v50;
  }
  v27 = v59;
  v61 = v59;
  v32 = (float)((float)(v16 - 0.5) * v22) + a3->left;
  v33 = (float)((float)(v16 + 0.5) * v22) + a3->left;
  v62 = v32;
  v63 = v33;
  v34 = CoordMap::AddEntry(v14, (__int64 *)this, a2, (__int64)&v61, 2);
  v26 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x1CCu);
    return v26;
  }
  v22 = v50;
LABEL_22:
  if ( v11 <= 0.0 && v23 <= 0.0000011920929 )
  {
    v29 = v52;
  }
  else
  {
    v28 = a3->right;
    v29 = v52;
    v61 = v52;
    v62 = v28 - (float)((float)(v17 + 0.5) * v22);
    v63 = v28 - (float)((float)(v17 - 0.5) * v22);
    v30 = CoordMap::AddEntry(v14, (__int64 *)this, a2, (__int64)&v61, 2);
    v26 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1D3u);
      return v26;
    }
    if ( v11 > 0.0 )
    {
      v61 = a3->right;
      v62 = v61;
      v63 = v61;
      v31 = CoordMap::AddEntry(v14, (__int64 *)this, a2, (__int64)&v61, 0);
      v26 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1D8u);
        return v26;
      }
    }
  }
  if ( v12 > 0.0 )
  {
    v61 = a3->top;
    v62 = v61;
    v63 = v61;
    v35 = CoordMap::AddEntry(v14, (__int64 *)this + 24, a2, (__int64)&v61, 0);
    v26 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x1DDu);
      return v26;
    }
    goto LABEL_37;
  }
  if ( v24 )
  {
LABEL_37:
    v36 = v58;
    v37 = v54;
    v61 = v54;
    v38 = (float)((float)(v18 - 0.5) * v58) + a3->top;
    v39 = (float)((float)(v18 + 0.5) * v58) + a3->top;
    v62 = v38;
    v63 = v39;
    v40 = CoordMap::AddEntry(v14, (__int64 *)this + 24, a2, (__int64)&v61, 2);
    v26 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x1E4u);
      return v26;
    }
    goto LABEL_40;
  }
  v36 = v58;
  v37 = v54;
LABEL_40:
  if ( v48 || v24 )
  {
    v41 = a3->bottom;
    v42 = v56;
    v61 = v56;
    v62 = v41 - (float)((float)(v19 + 0.5) * v36);
    v63 = v41 - (float)((float)(v19 - 0.5) * v36);
    v43 = CoordMap::AddEntry(v14, (__int64 *)this + 24, a2, (__int64)&v61, 2);
    v26 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x1EBu);
      return v26;
    }
    if ( v48 )
    {
      v61 = a3->bottom;
      v62 = v61;
      v63 = v61;
      v45 = CoordMap::AddEntry(v44, (__int64 *)this + 24, a2, (__int64)&v61, 0);
      v26 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x1F0u);
        return v26;
      }
    }
  }
  else
  {
    v42 = v56;
  }
  if ( a7
    && v24
    && v23 > 0.0000011920929
    && (v61 = v27,
        v62 = v37,
        v63 = v29,
        v64 = v42,
        v46 = DynArray<CoordMap::RampEntry,0>::AddMultipleAndSet((__int64)this + 384, &v61, 1u),
        v26 = v46,
        v46 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x1F5u);
  }
  else
  {
    return 0;
  }
  return v26;
}
