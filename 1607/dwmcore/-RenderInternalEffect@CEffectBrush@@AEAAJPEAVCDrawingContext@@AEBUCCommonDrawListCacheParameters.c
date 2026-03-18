/*
 * XREFs of ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0
 * Callers:
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005B9A0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z @ 0x1800B0CD0 (-Create@CDrawListCache@@SAJW4DrawListRenderType@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0DCC (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180110A0C (--4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180123580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801243FC (-PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPE.c)
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CEffectBrush@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B2AC (-ConfigureIntermediateFromBackdropInput@CEffectBrush@@CAXAEBUIntermediateConfigurationInputs@1@P.c)
 *     ?ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B4D4 (-ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUInt.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 */

__int64 __fastcall CEffectBrush::RenderInternalEffect(
        CEffectBrush *this,
        struct CDrawingContext *a2,
        const struct CCommonDrawListCacheParameters *a3,
        const struct EffectStage *a4,
        __m128 *a5,
        struct EffectInput *a6)
{
  struct IRenderTarget *v6; // rbx
  __m128 v8; // xmm0
  __m128 v10; // xmm1
  __int64 v11; // rax
  int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // edx
  char *v16; // rax
  bool v17; // zf
  const struct CVisual *CurrentVisual; // rax
  int v19; // eax
  int updated; // eax
  struct CDrawListCache *v21; // rdi
  int v22; // eax
  int v23; // eax
  struct CRenderTargetImageSource *v24; // rax
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  struct CRenderTargetImageSource *v27; // [rsp+48h] [rbp-C0h] BYREF
  struct CDrawListCache *v28; // [rsp+50h] [rbp-B8h] BYREF
  struct IRenderTarget *v29; // [rsp+58h] [rbp-B0h] BYREF
  struct EffectInput *v30; // [rsp+60h] [rbp-A8h]
  struct EffectInput *v31; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_SIZE_F v32; // [rsp+70h] [rbp-98h] BYREF
  float v33; // [rsp+78h] [rbp-90h]
  float v34; // [rsp+7Ch] [rbp-8Ch]
  float v35; // [rsp+80h] [rbp-88h]
  float v36; // [rsp+84h] [rbp-84h]
  float v37[10]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+E8h] [rbp-20h]
  __m128 v41; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v42; // [rsp+110h] [rbp+8h]
  char *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+128h] [rbp+20h] BYREF
  __int128 v45; // [rsp+130h] [rbp+28h] BYREF
  __int128 v46; // [rsp+140h] [rbp+38h]
  __int128 v47; // [rsp+150h] [rbp+48h]
  __int128 v48; // [rsp+160h] [rbp+58h]
  int v49; // [rsp+170h] [rbp+68h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  unsigned __int64 v51; // [rsp+180h] [rbp+78h]
  int v52; // [rsp+188h] [rbp+80h]
  int v53; // [rsp+18Ch] [rbp+84h]
  char v54; // [rsp+190h] [rbp+88h]
  float width; // [rsp+198h] [rbp+90h] BYREF
  int v56; // [rsp+19Ch] [rbp+94h]
  int v57; // [rsp+1A0h] [rbp+98h]
  float height; // [rsp+1A4h] [rbp+9Ch]
  float v59; // [rsp+1A8h] [rbp+A0h]
  float v60; // [rsp+1ACh] [rbp+A4h]

  v6 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = *a5;
  v50 = 0LL;
  v10 = a5[1];
  v11 = *(_QWORD *)a3;
  v52 = 0;
  v56 = 0;
  v57 = 0;
  v41 = v8;
  v44 = v11;
  v43 = (char *)v10.m128_u64[1];
  v30 = a6;
  v42 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  v45 = CMILMatrix::Identity;
  v29 = 0LL;
  v46 = xmmword_1801EAD20;
  v31 = a6;
  v47 = xmmword_1801EAD30;
  v49 = dword_1801EAD50;
  v48 = xmmword_1801EAD40;
  v53 = 1;
  *((_OWORD *)a6 + 3) = _xmm;
  v54 = 0;
  v51 = v8.m128_u64[0];
  v32.width = 1.0;
  v32.height = 1.0;
  width = 1.0 / v8.m128_f32[0];
  height = 1.0 / _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  v35 = 1.0 / v8.m128_f32[0];
  v36 = height;
  v59 = 0.0 - (float)((float)(1.0 / v8.m128_f32[0]) * 0.0);
  v60 = 0.0 - (float)(height * 0.0);
  Matrix3x3::operator=((_DWORD *)a6 + 3, &width);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v28);
  v13 = CDrawListCache::Create(0, &v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x357u);
    goto LABEL_27;
  }
  v15 = *((_DWORD *)a4 + 1);
  if ( v15 )
  {
    do
    {
      v16 = (char *)a4 + 8 * ((_QWORD)v6 + 8 * (_QWORD)v6 + 1);
      v17 = v16[8] == 0;
      v43 = v16;
      if ( !v17 && v16[65] && v15 == 1 )
      {
        CEffectBrush::ConfigureIntermediateFromBackdropInput(
          (const struct CEffectBrush::IntermediateConfigurationInputs *)&v41,
          (struct CEffectBrush::IntermediateConfigurationOutputs *)&v31);
        v56 = 0;
        v57 = 0;
        width = v32.width;
        height = v32.height;
        v59 = 0.0 - (float)(v32.width * 0.0);
        v60 = 0.0 - (float)(v32.height * 0.0);
        Matrix3x3::operator*((float *)a6 + 3, v37, &width);
        v49 = 0;
        *(float *)&v38 = v37[0];
        *((float *)&v38 + 3) = v37[2];
        *(_QWORD *)((char *)&v39 + 4) = LODWORD(v37[4]);
        *(_QWORD *)((char *)&v38 + 4) = LODWORD(v37[1]);
        *(float *)&v40 = v37[6];
        *(float *)&v39 = v37[3];
        *((float *)&v40 + 3) = v37[8];
        *((float *)&v39 + 3) = v37[5];
        *(_QWORD *)((char *)&v40 + 4) = LODWORD(v37[7]);
        v45 = v38;
        v46 = v39;
        v48 = v40;
        v47 = _xmm;
      }
      else
      {
        CEffectBrush::ConfigureIntermediateFromInput(
          this,
          (const struct CEffectBrush::IntermediateConfigurationInputs *)&v41,
          (struct CEffectBrush::IntermediateConfigurationOutputs *)&v31);
        CMILMatrix::SetScale((CMILMatrix *)&v45, v33, v34, 1.0, 0.0, 0.0, 0.0);
      }
      v15 = *((_DWORD *)a4 + 1);
      v6 = (struct IRenderTarget *)(unsigned int)((_DWORD)v6 + 1);
    }
    while ( (unsigned int)v6 < v15 );
    v30 = v31;
  }
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 128));
  v19 = CDrawingContext::PushEffectBrushLayer(a2, CurrentVisual, &v32, this, &v29);
  v14 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x37Cu);
    v6 = v29;
    goto LABEL_27;
  }
  v6 = v29;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v29 + 152LL))(v29, 1LL);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v27);
  updated = CRenderTargetImageSource::CreateSingleAdapter(v6, &v27);
  v14 = updated;
  if ( updated < 0 )
  {
    v26 = 900;
    goto LABEL_24;
  }
  v21 = v28;
  updated = CEffectBrush::UpdateDrawListCache(this, 0LL, (const struct CCommonDrawListCacheParameters *)&v44, a4, v28);
  v14 = updated;
  if ( updated < 0 )
  {
    v26 = 906;
    goto LABEL_24;
  }
  updated = CDrawListCache::Render((__int64)v21, a2, (float *)&v45, 1.0);
  v14 = updated;
  if ( updated < 0 )
  {
    v26 = 912;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v26);
    CDrawingContext::PopLayer(a2);
    goto LABEL_27;
  }
  v22 = CDrawingContext::PopLayer(a2);
  v14 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x393u);
  }
  else
  {
    v23 = CDrawingContext::FlushD2D(a2);
    v14 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x398u);
    }
    else
    {
      if ( g_LockAndReadEffectIntermediate )
        (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v6 + 176LL))(
          v6,
          *((_QWORD *)a2 + 57),
          ((unsigned __int64)a2 + 128) & -(__int64)(a2 != 0LL));
      v24 = v27;
      v27 = 0LL;
      *(_QWORD *)v30 = v24;
    }
  }
LABEL_27:
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v28);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v27);
  if ( v6 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  return v14;
}
