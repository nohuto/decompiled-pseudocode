/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 * Callees:
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x180002908 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180002950 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x1800029C4 (--1CComplexShape@@UEAA@XZ.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180002E44 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, float *a3, float a4)
{
  unsigned int v4; // edi
  bool v5; // cc
  int v9; // eax
  unsigned int v10; // r15d
  _QWORD *v11; // r14
  void (__fastcall *v12)(_QWORD, __int128 *); // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *); // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // rax
  float v21; // xmm9_4
  float v22; // xmm8_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm3_4
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, CDrawingContext *, float *); // rax
  int v33; // eax
  struct ID2D1Geometry *v34; // r14
  int v36; // eax
  int v37; // eax
  struct ID2D1Geometry *v38; // rax
  int D2DGeometry; // eax
  int v40; // eax
  int v41; // eax
  char v42; // [rsp+40h] [rbp-C0h]
  struct ID2D1Geometry *v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  float v46; // [rsp+60h] [rbp-A0h]
  __int128 v47; // [rsp+68h] [rbp-98h]
  struct ID2D1Geometry *v48; // [rsp+78h] [rbp-88h]
  __int128 v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v51; // [rsp+A0h] [rbp-60h]
  __int128 v52; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-48h]
  __int128 v54; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v55[4]; // [rsp+D8h] [rbp-28h]

  v4 = 0;
  v5 = *(float *)(a1 + 52) <= *(float *)(a1 + 44);
  v51 = (__int64 *)*((_QWORD *)a2 + 57);
  v48 = 0LL;
  v43 = 0LL;
  v42 = 0;
  v46 = a4;
  if ( v5 || *(float *)(a1 + 56) <= *(float *)(a1 + 48) || a4 <= 0.0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 64) & 0x20) != 0 )
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB9u);
      return v10;
    }
  }
  else
  {
    v36 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v10 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xBDu);
      return v10;
    }
  }
  if ( !*(_DWORD *)(a1 + 40) )
    return v10;
  while ( 1 )
  {
    v11 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v4);
    v12 = *(void (__fastcall **)(_QWORD, __int128 *))(*v11 + 32LL);
    if ( (char *)v12 == (char *)CHWDrawListEntry::GetBounds )
    {
      v53 = *(_OWORD *)(v11[4] + 16LL);
      v52 = v53;
    }
    else
    {
      v12(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v4), &v52);
    }
    v49 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    v13 = *v51;
    v55[0] = _mm_unpacklo_ps((__m128)(unsigned int)v52, (__m128)DWORD1(v52)).m128_u64[0];
    v14 = *(__int64 (__fastcall **)(__int64 *))(v13 + 176);
    v55[1] = _mm_unpacklo_ps((__m128)DWORD2(v52), (__m128)DWORD1(v52)).m128_u64[0];
    v55[2] = _mm_unpacklo_ps((__m128)(unsigned int)v52, (__m128)HIDWORD(v52)).m128_u64[0];
    v55[3] = _mm_unpacklo_ps((__m128)DWORD2(v52), (__m128)HIDWORD(v52)).m128_u64[0];
    v15 = v14(v51);
    v16 = 0LL;
    v17 = *(_DWORD *)(v15 + 216);
    if ( v17 )
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 8LL * (unsigned int)(v17 - 1));
    v18 = *(_DWORD *)(v16 + 76) == 1;
    v47 = *(_OWORD *)(v16 + 60);
    if ( v18 )
    {
      *(float *)&v45 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v47 - 0.5);
      *((float *)&v45 + 1) = (float)(int)CFloatFPU::CeilingSat(*((float *)&v47 + 1) - 0.5);
      *(float *)&v44 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v47 + 2) - 0.5);
      *((float *)&v44 + 1) = (float)(int)CFloatFPU::CeilingSat(*((float *)&v47 + 3) - 0.5);
    }
    else
    {
      v44 = *((_QWORD *)&v47 + 1);
      v45 = v47;
    }
    v19 = 0;
    v20 = 0LL;
    v21 = *((float *)&v49 + 3);
    v22 = *((float *)&v49 + 2);
    v23 = *((float *)&v49 + 1);
    v24 = *(float *)&v49;
    do
    {
      v25 = *(float *)&v55[v20];
      v26 = *((float *)&v55[v20] + 1);
      v27 = a3[7] * v26;
      v28 = (float)((float)(v26 * a3[4]) + (float)(*a3 * v25)) + a3[12];
      v29 = (float)((float)(v26 * a3[5]) + (float)(a3[1] * v25)) + a3[13];
      v30 = (float)(v27 + (float)(a3[3] * v25)) + a3[15];
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & _xmm) >= 0.00012207031
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v30 - 1.0)) & _xmm) >= 0.00012207031 )
      {
        v28 = v28 / v30;
        v29 = v29 / v30;
      }
      ++v19;
      v24 = fminf(v24, v28);
      v20 = v19;
      v23 = fminf(v23, v29);
      v22 = fmaxf(v22, v28);
      v21 = fmaxf(v21, v29);
    }
    while ( (unsigned __int64)v19 < 4 );
    if ( *(float *)&v44 <= v24 || *((float *)&v44 + 1) <= v23 || v22 <= *(float *)&v45 || v21 <= *((float *)&v45 + 1) )
      goto LABEL_26;
    if ( v48 != (struct ID2D1Geometry *)v11[3] )
      break;
LABEL_23:
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v4);
    v32 = *(__int64 (__fastcall **)(__int64, CDrawingContext *, float *))(*(_QWORD *)v31 + 40LL);
    if ( (char *)v32 == (char *)CHWDrawListEntry::Render )
      v33 = CHWDrawListEntry::Render(v31, a2, a3);
    else
      v33 = v32(v31, a2, a3);
    v10 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xF2u);
      goto LABEL_27;
    }
LABEL_26:
    if ( ++v4 >= *(_DWORD *)(a1 + 40) )
      goto LABEL_27;
  }
  if ( v42 )
  {
    v37 = CDrawingContext::PopLayer(a2);
    v10 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xD5u);
LABEL_27:
      v34 = v43;
      goto LABEL_28;
    }
    v42 = 0;
    if ( v43 )
    {
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v43 + 16LL))(v43);
      v43 = 0LL;
    }
  }
  v38 = (struct ID2D1Geometry *)v11[3];
  v48 = v38;
  if ( !v38 )
  {
    v34 = v43;
LABEL_50:
    v41 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v10 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xEFu);
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  CComplexShape::CComplexShape((CComplexShape *)v50, v38);
  D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)v50, (const struct CMILMatrix *)a3, &v43);
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0xE5u);
    CComplexShape::~CComplexShape((CComplexShape *)v50);
    goto LABEL_27;
  }
  CMILMatrix::Transform2DBoundsHelper<0>(a3, a1 + 44, &v54);
  v34 = v43;
  v40 = CDrawingContext::PushD2DLayer(a2, 0LL, &v54, (__int64)v43, 0LL, 1.0, 0);
  v10 = v40;
  if ( v40 >= 0 )
  {
    v42 = 1;
    CComplexShape::~CComplexShape((CComplexShape *)v50);
    goto LABEL_50;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xEBu);
  CComplexShape::~CComplexShape((CComplexShape *)v50);
LABEL_28:
  if ( v42 )
    CDrawingContext::PopLayer(a2);
  if ( v34 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v34 + 16LL))(v34);
  return v10;
}
