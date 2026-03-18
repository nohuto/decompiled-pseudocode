/*
 * XREFs of ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680
 * Callers:
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800980EC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0DCC (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180123580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x180123E14 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 *     ?PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801243FC (-PushEffectBrushLayer@CDrawingContext@@QEAAJPEBVCVisual@@AEBUD2D_SIZE_F@@PEAVCEffectBrush@@PEAPE.c)
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CEffectBrush@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B2AC (-ConfigureIntermediateFromBackdropInput@CEffectBrush@@CAXAEBUIntermediateConfigurationInputs@1@P.c)
 *     ?ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18013B4D4 (-ConfigureIntermediateFromInput@CEffectBrush@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUInt.c)
 *     ?GetSurfaceSize@CEffectBrush@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18013BF88 (-GetSurfaceSize@CEffectBrush@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x180163EF4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x180163F78 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x180169844 (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x180169DF0 (-DetermineOutputScale@CCustomBlur@@SAMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180169E48 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x18016A1EC (-Reset@CCustomBlur@@QEAAXXZ.c)
 */

__int64 __fastcall CEffectBrush::RenderExternalEffect(
        CEffectBrush *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        const struct CEffectBrush::IntermediateConfigurationInputs *a5,
        struct EffectInput *a6)
{
  _QWORD *v6; // rdi
  struct EffectInput *v7; // r14
  CCustomBlur *v8; // r12
  struct IRenderTarget *v9; // rbx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // edi
  char *v15; // rdi
  __int64 *v16; // r15
  __int64 v17; // r14
  unsigned int *v18; // rsi
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  int v21; // eax
  CEffectBrush *v22; // rbx
  float *v23; // rdi
  const struct D2D_RECT_F *v24; // rsi
  struct D2D_SIZE_F SurfaceSize; // rax
  FLOAT width; // xmm13_4
  FLOAT height; // xmm14_4
  __m128 v28; // xmm11
  __m128 v29; // xmm12
  float *v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __m128 v33; // xmm5
  __m128 v34; // xmm0
  enum D2D1_GAUSSIANBLUR_OPTIMIZATION v35; // edx
  __m128 v36; // xmm4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  float v40; // xmm9_4
  const struct CVisual *CurrentVisual; // rax
  int v42; // eax
  char v43; // al
  __int64 v44; // rdx
  int v45; // eax
  const struct D2D_RECT_F *v46; // r15
  char v47; // si
  float *v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  int CustomBlurEffectNoRef; // eax
  float v52; // xmm0_4
  FLOAT v53; // xmm2_4
  float v54; // xmm1_4
  float *v55; // rax
  float *v56; // rax
  __m128 v57; // xmm3
  __m128 v58; // xmm0
  __m128 v59; // xmm2
  const struct D2D_POINT_2F *v60; // r9
  CDrawingContext *v61; // rcx
  int v62; // eax
  int v63; // eax
  struct CRenderTargetImageSource *v64; // rax
  struct CRenderTargetImageSource *v65; // rax
  unsigned int v67; // [rsp+28h] [rbp-E0h]
  enum D2D1_INTERPOLATION_MODE v68; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v69; // [rsp+30h] [rbp-D8h]
  struct D2D_SIZE_F v70; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_VECTOR_2F v71; // [rsp+68h] [rbp-A0h] BYREF
  struct CRenderTargetImageSource *v72; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_VECTOR_2F v73; // [rsp+78h] [rbp-90h] BYREF
  float v74; // [rsp+80h] [rbp-88h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v75; // [rsp+84h] [rbp-84h] BYREF
  struct ID2D1Image *v76; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v77; // [rsp+90h] [rbp-78h] BYREF
  __int128 v78; // [rsp+98h] [rbp-70h] BYREF
  struct D2D_VECTOR_2F v79; // [rsp+A8h] [rbp-60h]
  char *v80; // [rsp+B0h] [rbp-58h]
  int v81; // [rsp+B8h] [rbp-50h]
  struct D2D_SIZE_F v82[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v83; // [rsp+D0h] [rbp-38h]
  float v84; // [rsp+E0h] [rbp-28h]
  float v85; // [rsp+E4h] [rbp-24h]
  __int128 v86; // [rsp+F0h] [rbp-18h]
  CCustomBlur *v87; // [rsp+108h] [rbp+0h] BYREF
  float *v88; // [rsp+110h] [rbp+8h]
  __int128 v89; // [rsp+118h] [rbp+10h] BYREF
  __int128 v90; // [rsp+128h] [rbp+20h]
  int v91; // [rsp+138h] [rbp+30h]
  _BYTE v92[8]; // [rsp+140h] [rbp+38h] BYREF
  CEffectBrush *v93; // [rsp+148h] [rbp+40h]
  struct EffectInput *v94; // [rsp+150h] [rbp+48h]
  _BYTE v95[16]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v96; // [rsp+168h] [rbp+60h] BYREF
  __int128 v97; // [rsp+178h] [rbp+70h]
  __int128 v98; // [rsp+188h] [rbp+80h]
  __int128 v99; // [rsp+198h] [rbp+90h]
  int v100; // [rsp+1A8h] [rbp+A0h]
  __int64 width_low; // [rsp+1B8h] [rbp+B0h] BYREF
  int v102; // [rsp+1C0h] [rbp+B8h]
  FLOAT v103; // [rsp+1C4h] [rbp+BCh]
  unsigned __int64 v104; // [rsp+1C8h] [rbp+C0h]
  struct D2D_RECT_F v105; // [rsp+1D0h] [rbp+C8h] BYREF

  v6 = (_QWORD *)((char *)a4 + 8);
  v7 = a6;
  v8 = 0LL;
  *((_QWORD *)&v83 + 1) = 0LL;
  v9 = 0LL;
  v11 = *((_OWORD *)a5 + 1);
  v77 = 0LL;
  v12 = *(_OWORD *)a5;
  v76 = 0LL;
  v72 = 0LL;
  v93 = this;
  v79 = (struct D2D_VECTOR_2F)v11;
  v80 = (char *)a4 + 8;
  v88 = (float *)a4;
  v94 = a6;
  v87 = 0LL;
  v78 = v12;
  v82[0] = (struct D2D_SIZE_F)a6;
  v73 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v77);
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(*(_QWORD *)*v6 + 72LL))(*v6, &v77);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3DEu);
    goto LABEL_46;
  }
  if ( a2 )
    v15 = (char *)a2 + 128;
  else
    v15 = 0LL;
  v16 = v77;
  v70 = (struct D2D_SIZE_F)v15;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v76);
  v17 = *v16;
  v18 = (unsigned int *)(*(__int64 (__fastcall **)(char *, struct D2D_VECTOR_2F *))(*(_QWORD *)v15 + 48LL))(v15, &v71);
  v19 = (_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v15 + 40LL))(v15, v95);
  v20 = (*(__int64 (__fastcall **)(struct D2D_SIZE_F))(**(_QWORD **)&v70 + 56LL))(v70);
  v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _BYTE, _BYTE, struct ID2D1Image **))(v17 + 104))(
          v16,
          *v19,
          *v18,
          v20,
          0LL,
          0,
          0,
          &v76);
  v14 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x3E8u);
    v7 = v94;
    goto LABEL_46;
  }
  v22 = v93;
  v23 = v88;
  (*(void (__fastcall **)(_QWORD, _QWORD, float *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(**((_QWORD **)v93 + 19)
                                                                                             + 56LL))(
    *((_QWORD *)v93 + 19),
    *(unsigned int *)v88,
    &v74,
    &v75,
    v92);
  v24 = (const struct D2D_RECT_F *)(v23 + 2);
  SurfaceSize = CEffectBrush::GetSurfaceSize(*((struct IImageSource **)v23 + 1));
  v102 = 0;
  v70 = SurfaceSize;
  v28 = 0LL;
  width = SurfaceSize.width;
  height = SurfaceSize.height;
  v29 = 0LL;
  v88 = v23 + 5;
  width_low = LODWORD(SurfaceSize.width);
  v103 = SurfaceSize.height;
  v28.m128_f32[0] = 0.0 - (float)(SurfaceSize.width * 0.0);
  v29.m128_f32[0] = 0.0 - (float)(SurfaceSize.height * 0.0);
  *(float *)&v104 = v28.m128_f32[0];
  *((float *)&v104 + 1) = v29.m128_f32[0];
  v30 = Matrix3x3::operator*(v23 + 5, (float *)&v96, (float *)&width_low);
  v31 = *(_OWORD *)v30;
  v32 = *((_OWORD *)v30 + 1);
  *(float *)&v30 = v30[8];
  v89 = v31;
  v91 = (int)v30;
  v90 = v32;
  v70 = **(struct D2D_SIZE_F **)&Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v89);
  v70.width = v70.width * v74;
  v70.height = v70.height * v74;
  CCustomBlur::DetermineOutputScale(v70.width, v75);
  v34 = v33;
  v34.m128_f32[0] = CCustomBlur::DetermineOutputScale(v33.m128_f32[0], v35);
  v79 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps(v36, v34).m128_u64[0];
  if ( *((_BYTE *)v23 + 16) && *((_BYTE *)v23 + 73) )
  {
    CEffectBrush::ConfigureIntermediateFromBackdropInput(
      (const struct CEffectBrush::IntermediateConfigurationInputs *)&v78,
      (struct CEffectBrush::IntermediateConfigurationOutputs *)v82);
    v37 = *(float *)&v83;
    v38 = *((float *)&v83 + 1);
    v39 = *((float *)&v83 + 3);
    v40 = *((float *)&v83 + 2);
    v71 = v79;
  }
  else
  {
    CEffectBrush::ConfigureIntermediateFromInput(
      v22,
      (const struct CEffectBrush::IntermediateConfigurationInputs *)&v78,
      (struct CEffectBrush::IntermediateConfigurationOutputs *)v82);
    v40 = *((float *)&v83 + 2);
    v39 = *((float *)&v83 + 3);
    v37 = *(float *)&v83 / v84;
    v38 = *((float *)&v83 + 1) / v85;
    v71.x = *((float *)&v83 + 2) / v84;
    v71.y = *((float *)&v83 + 3) / v85;
  }
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 128));
  v42 = CDrawingContext::PushEffectBrushLayer(a2, CurrentVisual, &v82[1], v22, (struct IRenderTargetBitmap **)&v73);
  v14 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x424u);
    v7 = (struct EffectInput *)v82[0];
    v9 = (struct IRenderTarget *)v73;
    goto LABEL_46;
  }
  v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v24->left + 96LL))(*(_QWORD *)&v24->left);
  v9 = (struct IRenderTarget *)v73;
  v44 = 3LL;
  if ( !v43 )
    v44 = 1LL;
  (*(void (__fastcall **)(struct D2D_VECTOR_2F, __int64))(**(_QWORD **)&v73 + 152LL))(v73, v44);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v72);
  v45 = CRenderTargetImageSource::CreateSingleAdapter(v9, &v72);
  v7 = (struct EffectInput *)v82[0];
  v14 = v45;
  if ( v45 < 0 )
  {
    v67 = 1079;
    goto LABEL_39;
  }
  v46 = v24 + 3;
  if ( BYTE1(v24[4].left) )
  {
    v47 = 0;
  }
  else
  {
    v102 = 0;
    width_low = LODWORD(width);
    v103 = height;
    v104 = _mm_unpacklo_ps(v28, v29).m128_u64[0];
    v48 = Matrix3x3::operator*(v88, (float *)&v96, (float *)&width_low);
    v49 = *(_OWORD *)v48;
    v50 = *((_OWORD *)v48 + 1);
    *(float *)&v48 = v48[8];
    v89 = v49;
    v91 = (int)v48;
    v90 = v50;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v89, (struct Matrix3x3 *)&v89) )
    {
      v45 = -2003304441;
      v67 = 1102;
      v14 = -2003304441;
LABEL_39:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, v67);
      goto LABEL_40;
    }
    v47 = 1;
  }
  CustomBlurEffectNoRef = CDrawingContext::GetCustomBlurEffectNoRef(a2, &v87);
  v14 = CustomBlurEffectNoRef;
  if ( CustomBlurEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CustomBlurEffectNoRef, 0x453u);
    v8 = v87;
    goto LABEL_40;
  }
  v8 = v87;
  v45 = CCustomBlur::BuildEffect(v87, v76, v46, &v70, v75, &v71, &v73);
  v14 = v45;
  if ( v45 < 0 )
  {
    v67 = 1114;
    goto LABEL_39;
  }
  v52 = v46->right - v46->left;
  v53 = (float)(v46->top * v71.y) + v73.y;
  v105.left = (float)(v46->left * v71.x) + v73.x;
  v105.top = v53;
  v54 = v46->bottom - v46->top;
  v105.right = (float)(v52 * v37) + v105.left;
  v105.bottom = (float)(v54 * v38) + v53;
  if ( v47 )
  {
    v102 = 0;
    *(_QWORD *)((char *)&v78 + 4) = 0LL;
    HIDWORD(v78) = 0;
    v79.y = 0.0;
    v81 = 1065353216;
    width_low = LODWORD(v40);
    v103 = v39;
    *(float *)&v78 = 1.0 / v71.x;
    v79.x = 1.0 / v71.y;
    *(float *)&v104 = 0.0 - (float)(v40 * 0.0);
    *((float *)&v104 + 1) = 0.0 - (float)(v39 * 0.0);
    *((float *)&v80 + 1) = 0.0 - (float)((float)(1.0 / v71.y) * 0.0);
    *(float *)&v80 = 0.0 - (float)((float)(1.0 / v71.x) * 0.0);
    v55 = Matrix3x3::operator*((float *)&v78, (float *)&v96, (float *)&v89);
    v56 = Matrix3x3::operator*(v55, (float *)&v78, (float *)&width_low);
    v82[1].width = 0.0;
    v57 = *(__m128 *)(v56 + 4);
    v58 = *(__m128 *)v56;
    *(float *)&v56 = v56[8];
    v100 = 0;
    v59 = v58;
    *(_QWORD *)((char *)&v83 + 4) = v57.m128_u32[0];
    LODWORD(v82[0].height) = _mm_shuffle_ps(v58, v58, 85).m128_u32[0];
    HIDWORD(v83) = _mm_shuffle_ps(v57, v57, 85).m128_u32[0];
    LODWORD(v86) = _mm_shuffle_ps(v57, v57, 170).m128_u32[0];
    LODWORD(v82[0].width) = v58.m128_i32[0];
    LODWORD(v82[1].height) = _mm_shuffle_ps(v59, v59, 170).m128_u32[0];
    LODWORD(v83) = _mm_shuffle_ps(v59, v59, 255).m128_u32[0];
    v91 = (int)v56;
    HIDWORD(v86) = (_DWORD)v56;
    v96 = *(_OWORD *)&v82[0].width;
    *(_QWORD *)((char *)&v86 + 4) = _mm_shuffle_ps(v57, v57, 255).m128_u32[0];
    v97 = v83;
    v99 = v86;
    v98 = _xmm;
  }
  else
  {
    v96 = CMILMatrix::Identity;
    v97 = xmmword_1801EAD20;
    v98 = xmmword_1801EAD30;
    v99 = xmmword_1801EAD40;
    v100 = dword_1801EAD50;
  }
  v45 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v96, 0, 1);
  v14 = v45;
  if ( v45 < 0 )
  {
    v67 = 1145;
    goto LABEL_39;
  }
  v14 = CCustomBlur::Draw(v8, a2, &v105, v60, v68, v69);
  CDrawingContext::PopTransformInternal(a2, 1);
  if ( v14 >= 0 )
  {
    v62 = CDrawingContext::PopLayer(v61);
    v14 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x487u);
    }
    else
    {
      v63 = CDrawingContext::FlushD2D(a2);
      v14 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x48Cu);
      }
      else
      {
        if ( g_LockAndReadEffectIntermediate )
          (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v9 + 176LL))(
            v9,
            *((_QWORD *)a2 + 57),
            ((unsigned __int64)a2 + 128) & -(__int64)(a2 != 0LL));
        v64 = v72;
        v72 = 0LL;
        *(_QWORD *)v7 = v64;
      }
    }
    goto LABEL_41;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x484u);
LABEL_40:
  CDrawingContext::PopLayer(a2);
LABEL_41:
  if ( v8 )
    CCustomBlur::Reset(v8);
LABEL_46:
  if ( v14 == -2003304441 )
  {
    v65 = v72;
    v72 = 0LL;
    v14 = 0;
    *(_QWORD *)v7 = v65;
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v72);
  if ( v9 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v76);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v77);
  return (unsigned int)v14;
}
