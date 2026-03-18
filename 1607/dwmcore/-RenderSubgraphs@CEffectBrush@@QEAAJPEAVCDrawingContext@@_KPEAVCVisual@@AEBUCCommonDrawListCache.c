/*
 * XREFs of ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005B910 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x18010A1B0 (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ??4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180110A0C (--4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z.c)
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180138A00 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UEffectInput@@$0A@@@QEAAJPEFBUEffectInput@@I@Z @ 0x18013B204 (-AddMultipleAndSet@-$DynArray@UEffectInput@@$0A@@@QEAAJPEFBUEffectInput@@I@Z.c)
 *     ?DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z @ 0x18013B7EC (-DoesBackdropInputContributeToSubgraph@CEffectBrush@@AEBA_NIPEA_N@Z.c)
 *     ?GetInputMapping@CEffectBrush@@CAPEBUEffectInput@@PEBUICompiledEffect@Composition@UI@Windows@@IIAEBUEffectStage@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@@Z @ 0x18013BD38 (-GetInputMapping@CEffectBrush@@CAPEBUEffectInput@@PEBUICompiledEffect@Composition@UI@Windows@@II.c)
 *     ?GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParameters@1@@Z @ 0x18013BD88 (-GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParam.c)
 *     ?GetSurfaceSize@CEffectBrush@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18013BF88 (-GetSurfaceSize@CEffectBrush@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ?HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z @ 0x18013C050 (-HasBackdropInput@CEffectBrush@@QEBA_NPEA_N@Z.c)
 *     ?IsBackdropInput@CEffectBrush@@QEBA_NI@Z @ 0x18013C1E4 (-IsBackdropInput@CEffectBrush@@QEBA_NI@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z @ 0x18013C254 (-IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z.c)
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 *     ?RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013CFC0 (-RenderInternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBUCCommonDrawListCacheParameters.c)
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 *     ??4?$ComPtr@VCScrollPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollPositionAnimation@@@Z @ 0x180149BDC (--4-$ComPtr@VCScrollPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCScrollPositionAnimation@.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 */

__int64 __fastcall CEffectBrush::RenderSubgraphs(
        CCompiledEffectTemplate **this,
        struct CDrawingContext *a2,
        unsigned __int64 a3,
        struct CVisual *a4,
        const struct CCommonDrawListCacheParameters *a5,
        bool a6,
        struct CDrawListCache *a7)
{
  struct CRenderTargetImageSource *v10; // rbx
  char HasSubtreeSurface; // al
  unsigned int v12; // edi
  int v13; // r9d
  CCompiledEffectTemplate *v14; // rcx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // r13
  unsigned int v16; // r12d
  char DoesBackdropInputContributeToSubgraph; // di
  int BackdropImageFromRenderTarget; // eax
  CCompiledEffectTemplate *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r15
  float v24; // xmm7_4
  float v25; // xmm8_4
  __int128 v26; // xmm9
  __int128 v27; // xmm10
  __int128 v28; // xmm11
  __int128 v29; // xmm12
  _OWORD *v30; // r14
  __int64 v31; // xmm0_8
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct IRenderTarget *v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  __int128 v39; // xmm0
  struct IImageSource *v40; // rcx
  struct D2D_SIZE_F v41; // rax
  CCompiledEffectTemplate *v42; // rcx
  struct CCommonDrawListCacheParameters *v43; // rdi
  unsigned int v44; // ebx
  __int64 v45; // r15
  _QWORD *v46; // r14
  __int64 v47; // rax
  const struct _GUID *v48; // r8
  unsigned int v49; // eax
  __int64 i; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  struct D2D_SIZE_F SurfaceSize; // rax
  CCompiledEffectTemplate *v55; // rcx
  __int64 v56; // rbx
  __int64 InputMapping; // rax
  __int64 v58; // r9
  unsigned int v59; // edx
  __int64 j; // rbx
  __int64 v61; // rcx
  unsigned int k; // ebx
  void (__fastcall ***v63)(_QWORD, __int64); // rcx
  unsigned int v65; // [rsp+28h] [rbp-E0h]
  bool v66[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-C8h] BYREF
  struct CCommonDrawListCacheParameters *v68; // [rsp+48h] [rbp-C0h]
  struct CRenderTargetImageSource *v69; // [rsp+50h] [rbp-B8h] BYREF
  struct IRenderTarget *v70; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+60h] [rbp-A8h]
  struct CDrawingContext *v72; // [rsp+68h] [rbp-A0h]
  struct D2D_SIZE_F v73; // [rsp+70h] [rbp-98h] BYREF
  __int128 v74; // [rsp+78h] [rbp-90h]
  __int64 v75; // [rsp+88h] [rbp-80h]
  struct CDrawListCache *v76; // [rsp+90h] [rbp-78h]
  unsigned __int64 v77; // [rsp+98h] [rbp-70h]
  _OWORD v78[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-20h]
  char v80[12]; // [rsp+F8h] [rbp-10h] BYREF
  int v81; // [rsp+104h] [rbp-4h]
  __m128 v82; // [rsp+140h] [rbp+38h] BYREF
  float v83; // [rsp+150h] [rbp+48h]
  float v84; // [rsp+154h] [rbp+4Ch]
  __int128 v85; // [rsp+160h] [rbp+58h] BYREF
  _QWORD v86[3]; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v87; // [rsp+188h] [rbp+80h] BYREF
  unsigned int v88; // [rsp+18Ch] [rbp+84h]
  __int128 v89; // [rsp+190h] [rbp+88h] BYREF
  __int128 v90; // [rsp+1A0h] [rbp+98h]
  __int128 v91; // [rsp+1B0h] [rbp+A8h]
  __int128 v92; // [rsp+1C0h] [rbp+B8h]
  _QWORD v93[11]; // [rsp+1D0h] [rbp+C8h]
  int v94; // [rsp+228h] [rbp+120h] BYREF
  unsigned int v95; // [rsp+22Ch] [rbp+124h]
  _QWORD v96[19]; // [rsp+230h] [rbp+128h] BYREF
  _QWORD v97[2]; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v98; // [rsp+2D8h] [rbp+1D0h]
  int v99; // [rsp+2DCh] [rbp+1D4h]
  unsigned int v100; // [rsp+2E0h] [rbp+1D8h]
  _BYTE v101[368]; // [rsp+2E8h] [rbp+1E0h] BYREF

  v100 = 0;
  v76 = a7;
  v77 = a3;
  v97[0] = v101;
  v72 = a2;
  v97[1] = v101;
  v10 = 0LL;
  v68 = a5;
  v98 = 5;
  v99 = 5;
  v69 = 0LL;
  `vector constructor iterator'(
    (TemporaryConfiguration *)v96,
    72LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))EffectInput::EffectInput);
  `vector constructor iterator'(
    (TemporaryConfiguration *)&v89,
    72LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))EffectInput::EffectInput);
  v86[0] = 0LL;
  v86[1] = 0LL;
  memset_0(v78, 0, 0x48uLL);
  HasSubtreeSurface = CVisual::HasSubtreeSurface(a4);
  if ( !CEffectBrush::IsReadyToDraw((CEffectBrush *)this, HasSubtreeSurface) )
  {
    v12 = -2147467259;
    v65 = 1240;
LABEL_3:
    v13 = v12;
LABEL_68:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v65);
    goto LABEL_69;
  }
  v14 = this[17];
  v75 = *((_QWORD *)v14 + 16);
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v14);
  v16 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)CompiledEffectNoRef
                                                                                            + 24LL))(CompiledEffectNoRef)
      - 1;
  v71 = 0LL;
  if ( CVisual::HasSubtreeSurface(a4) )
    v71 = *((_QWORD *)CVisual::GetTreeEffectInternal(a4) + 1);
  if ( CEffectBrush::HasBackdropInput((CEffectBrush *)this, 0LL) )
  {
    v66[0] = 0;
    DoesBackdropInputContributeToSubgraph = CEffectBrush::DoesBackdropInputContributeToSubgraph(this, v16, v66);
    if ( v66[0]
      && a6
      && (*(unsigned __int8 (__fastcall **)(CCompiledEffectTemplate *, _QWORD))(*(_QWORD *)this[19] + 48LL))(
           this[19],
           v16) )
    {
      v12 = -2003304441;
      v65 = 1274;
      goto LABEL_3;
    }
    BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                      a2,
                                      (const struct D2D_SIZE_F *)a5 + 11,
                                      DoesBackdropInputContributeToSubgraph,
                                      (struct EffectInput *)v78);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v65 = 1281;
      goto LABEL_67;
    }
  }
  v19 = this[17];
  v94 = 0;
  v95 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 16) + 32LL))(*((_QWORD *)v19 + 16));
  BackdropImageFromRenderTarget = DynArrayImpl<0>::Grow((__int64)(this + 37), 0x130u, v95, 0, 0LL);
  v12 = BackdropImageFromRenderTarget;
  if ( BackdropImageFromRenderTarget < 0 )
  {
    v65 = 1288;
LABEL_67:
    v13 = BackdropImageFromRenderTarget;
    goto LABEL_68;
  }
  v20 = v95;
  v21 = 0;
  *((_DWORD *)this + 80) = v95;
  if ( v20 )
  {
    do
    {
      v22 = v21++;
      *((_QWORD *)this[37] + 38 * v22 + 37) = 0LL;
      v20 = v95;
    }
    while ( v21 < v95 );
  }
  v23 = 0LL;
  v24 = 0.0;
  v25 = 0.0;
  if ( !v20 )
  {
LABEL_34:
    memset_0(&v82, 0, 0x20uLL);
    v43 = v68;
    v82.m128_u64[0] = *((_QWORD *)v68 + 11);
    CMILMatrix::Get2DScaleDimensions(
      (struct CCommonDrawListCacheParameters *)((char *)v68 + 8),
      &v82.m128_f32[2],
      &v82.m128_f32[3]);
    v44 = 0;
    if ( !v16 )
    {
LABEL_59:
      v87 = v16;
      v56 = 0LL;
      v88 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)CompiledEffectNoRef + 32LL))(
              CompiledEffectNoRef,
              v16);
      if ( v88 )
      {
        do
        {
          InputMapping = CEffectBrush::GetInputMapping(
                           (__int64)CompiledEffectNoRef,
                           v16,
                           (unsigned int)v56,
                           (__int64)&v94,
                           v97);
          v58 = 9 * v56;
          v56 = (unsigned int)(v56 + 1);
          *(__int128 *)((char *)&v89 + 8 * v58) = *(_OWORD *)InputMapping;
          *(__int128 *)((char *)&v90 + 8 * v58) = *(_OWORD *)(InputMapping + 16);
          *(__int128 *)((char *)&v91 + 8 * v58) = *(_OWORD *)(InputMapping + 32);
          *(_OWORD *)&v93[v58 - 2] = *(_OWORD *)(InputMapping + 48);
          v93[v58] = *(_QWORD *)(InputMapping + 64);
        }
        while ( (unsigned int)v56 < v88 );
      }
      BackdropImageFromRenderTarget = CEffectBrush::UpdateDrawListCache(
                                        (CEffectBrush *)this,
                                        v77,
                                        v43,
                                        (const struct EffectStage *)&v87,
                                        v76);
      v12 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v65 = 1465;
        goto LABEL_67;
      }
      goto LABEL_69;
    }
    v45 = 0LL;
    while ( 1 )
    {
      v81 = 0;
      BackdropImageFromRenderTarget = DynArray<EffectInput,0>::AddMultipleAndSet((__int64)v97, (__int64)v80);
      v12 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v65 = 1384;
        goto LABEL_67;
      }
      v46 = (_QWORD *)(v45 + v97[0]);
      memset_0((void *)(v45 + v97[0]), 0, 0x48uLL);
      *((_BYTE *)v46 + 8) = 1;
      v87 = v44;
      v88 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)CompiledEffectNoRef + 32LL))(
              CompiledEffectNoRef,
              v44);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v75 + 112LL))(v75, v44, v86) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CCompiledEffectTemplate *, _QWORD))(*(_QWORD *)this[19] + 48LL))(
               this[19],
               v44) )
        {
          goto LABEL_53;
        }
        v47 = CEffectBrush::GetInputMapping((__int64)CompiledEffectNoRef, v44, 0LL, (__int64)&v94, v97);
        v89 = *(_OWORD *)v47;
        v90 = *(_OWORD *)(v47 + 16);
        v91 = *(_OWORD *)(v47 + 32);
        v92 = *(_OWORD *)(v47 + 48);
        v93[0] = *(_QWORD *)(v47 + 64);
        BackdropImageFromRenderTarget = CEffectBrush::RenderExternalEffect(
                                          (CEffectBrush *)this,
                                          v72,
                                          v48,
                                          (const struct EffectStage *)&v87,
                                          (const struct CEffectBrush::IntermediateConfigurationInputs *)&v82,
                                          (struct EffectInput *)v46);
        v12 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v65 = 1405;
          goto LABEL_67;
        }
      }
      else
      {
        v49 = v88;
        for ( i = 0LL; (unsigned int)i < v88; v49 = v88 )
        {
          v51 = CEffectBrush::GetInputMapping((__int64)CompiledEffectNoRef, v44, (unsigned int)i, (__int64)&v94, v97);
          v52 = 9 * i;
          i = (unsigned int)(i + 1);
          *(__int128 *)((char *)&v89 + 8 * v52) = *(_OWORD *)v51;
          *(__int128 *)((char *)&v90 + 8 * v52) = *(_OWORD *)(v51 + 16);
          *(__int128 *)((char *)&v91 + 8 * v52) = *(_OWORD *)(v51 + 32);
          *(_OWORD *)&v93[v52 - 2] = *(_OWORD *)(v51 + 48);
          v93[v52] = *(_QWORD *)(v51 + 64);
        }
        if ( v49 == 1
          && BYTE8(v89)
          && BYTE1(v93[0])
          && (*(unsigned __int8 (__fastcall **)(CCompiledEffectTemplate *, _QWORD))(*(_QWORD *)this[19] + 48LL))(
               this[19],
               v44) )
        {
LABEL_53:
          v53 = CEffectBrush::GetInputMapping((__int64)CompiledEffectNoRef, v44, 0LL, (__int64)&v94, v97);
          *(_OWORD *)v46 = *(_OWORD *)v53;
          *((_OWORD *)v46 + 1) = *(_OWORD *)(v53 + 16);
          *((_OWORD *)v46 + 2) = *(_OWORD *)(v53 + 32);
          *((_OWORD *)v46 + 3) = *(_OWORD *)(v53 + 48);
          v46[8] = *(_QWORD *)(v53 + 64);
          if ( *((_BYTE *)v46 + 8) )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v46 + 8LL))(*v46);
          goto LABEL_56;
        }
        BackdropImageFromRenderTarget = CEffectBrush::RenderInternalEffect(
                                          (CEffectBrush *)this,
                                          v72,
                                          v68,
                                          (const struct EffectStage *)&v87,
                                          &v82,
                                          (struct EffectInput *)v46);
        v12 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v65 = 1427;
          goto LABEL_67;
        }
      }
LABEL_56:
      SurfaceSize = CEffectBrush::GetSurfaceSize((struct IImageSource *)*v46);
      v55 = this[19];
      v73 = SurfaceSize;
      BackdropImageFromRenderTarget = (*(__int64 (__fastcall **)(CCompiledEffectTemplate *, _QWORD, struct D2D_SIZE_F *, _QWORD *))(*(_QWORD *)v55 + 24LL))(
                                        v55,
                                        v44 + v95,
                                        &v73,
                                        v46 + 6);
      v12 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v65 = 1447;
        goto LABEL_67;
      }
      ++v44;
      v45 += 72LL;
      if ( v44 >= v16 )
      {
        v43 = v68;
        goto LABEL_59;
      }
    }
  }
  v26 = v78[3];
  v27 = v78[2];
  v28 = v78[1];
  v29 = v78[0];
  while ( 1 )
  {
    v30 = &v96[9 * v23];
    memset_0(v30, 0, 0x48uLL);
    if ( !CEffectBrush::IsBackdropInput((CEffectBrush *)this, v23) )
      break;
    v31 = v79;
    *v30 = v29;
    v30[1] = v28;
    v30[2] = v27;
    v30[3] = v26;
    *((_QWORD *)v30 + 8) = v31;
LABEL_29:
    if ( *((_BYTE *)v30 + 8) )
      v39 = v30[3];
    else
      v39 = *(_OWORD *)((char *)this[37] + 304 * (unsigned int)v23 + 72);
    v40 = *(struct IImageSource **)v30;
    v85 = v39;
    v41 = CEffectBrush::GetSurfaceSize(v40);
    v42 = this[19];
    v73 = v41;
    BackdropImageFromRenderTarget = (*(__int64 (__fastcall **)(CCompiledEffectTemplate *, _QWORD, struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)v42 + 24LL))(
                                      v42,
                                      (unsigned int)v23,
                                      &v73,
                                      &v85);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v65 = 1367;
      goto LABEL_67;
    }
    v23 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v23 >= v95 )
      goto LABEL_34;
  }
  v32 = v71;
  if ( !v71 || *((_QWORD *)this[31] + v23) )
  {
    v70 = (struct IRenderTarget *)(304LL * (unsigned int)v23);
    BackdropImageFromRenderTarget = CEffectBrush::GetInputParameters(
                                      (CEffectBrush *)this,
                                      v23,
                                      (const struct D2D_SIZE_F *)v68 + 11,
                                      v72,
                                      (struct CEffectBrush::GraphInputParameters *)((char *)v70 + (_QWORD)this[37]));
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v65 = 1348;
      goto LABEL_67;
    }
    *(_QWORD *)v30 = *(_QWORD *)((char *)v70 + (_QWORD)this[37] + 64);
    *((_DWORD *)v30 + 3) = v23;
    goto LABEL_29;
  }
  if ( v10 )
  {
LABEL_26:
    v37 = *(_DWORD *)(v32 + 24);
    v38 = *(_DWORD *)(v32 + 28);
    *(_QWORD *)&v74 = 0LL;
    *(unsigned __int64 *)((char *)v82.m128_u64 + 4) = 0LL;
    *((_BYTE *)v30 + 8) = 1;
    *((_BYTE *)v30 + 64) = 1;
    *(_QWORD *)v30 = v10;
    *((float *)&v74 + 3) = (float)v38;
    *((float *)&v74 + 2) = (float)v37;
    v30[3] = v74;
    v82.m128_f32[0] = 1.0 / v24;
    v82.m128_f32[3] = 1.0 / v25;
    v83 = 0.0 - (float)((float)(1.0 / v24) * 0.0);
    v84 = 0.0 - (float)((float)(1.0 / v25) * 0.0);
    Matrix3x3::operator=((_DWORD *)v30 + 3, &v82);
    goto LABEL_29;
  }
  v33 = *(_QWORD *)(v71 + 8);
  v70 = 0LL;
  Microsoft::WRL::ComPtr<CScrollPositionAnimation>::operator=(&v70, v33);
  v34 = v70;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v70 + 152LL))(v70, 1LL);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v69);
  v35 = CRenderTargetImageSource::CreateSingleAdapter(v34, &v69);
  v12 = v35;
  if ( v35 >= 0 )
  {
    v67 = 0LL;
    v36 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v34 + 192LL))(v34, &v67);
    v12 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x529u);
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v67);
      goto LABEL_43;
    }
    v24 = (float)*(int *)(v67 + 136);
    v25 = (float)*(int *)(v67 + 140);
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v67);
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v34 + 16LL))(v34);
    v32 = v71;
    v10 = v69;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x526u);
LABEL_43:
  if ( v34 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_69:
  if ( *(_QWORD *)&v78[0] )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v78[0] + 16LL))(*(_QWORD *)&v78[0]);
  v59 = v100;
  for ( j = 0LL; (unsigned int)j < v59; j = (unsigned int)(j + 1) )
  {
    if ( *(_BYTE *)(v97[0] + 72 * j + 8) )
    {
      v61 = *(_QWORD *)(v97[0] + 72 * j);
      if ( v61 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
        v59 = v100;
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 80); ++k )
  {
    v63 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this[37] + 38 * k + 37);
    if ( v63 )
      (**v63)(v63, 1LL);
  }
  *((_DWORD *)this + 80) = 0;
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v69);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v97);
  return v12;
}
