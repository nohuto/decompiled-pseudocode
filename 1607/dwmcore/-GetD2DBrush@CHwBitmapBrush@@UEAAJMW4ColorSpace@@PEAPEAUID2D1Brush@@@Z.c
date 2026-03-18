/*
 * XREFs of ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AB1B0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?D2DExtendModeFromD3DAddressMode@@YA?AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z @ 0x1800AB3E8 (-D2DExtendModeFromD3DAddressMode@@YA-AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z.c)
 *     ?UsingSuperSampling@CHwTexturedColorSource@@QEBAHXZ @ 0x1800AB45C (-UsingSuperSampling@CHwTexturedColorSource@@QEBAHXZ.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800AB484 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?D2DBitmapInterpolationModeFromMilFilterMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@@Z @ 0x1800AB4FC (-D2DBitmapInterpolationModeFromMilFilterMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18014CCFC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180177350 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x180177440 (-GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z.c)
 */

__int64 __fastcall CHwBitmapBrush::GetD2DBrush(__int64 a1, float a2, __int64 a3, _QWORD *a4)
{
  struct ID2D1Effect *v4; // rsi
  struct ID2D1Bitmap1 *v5; // r14
  __int64 *v8; // rcx
  __m128 v9; // xmm2
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 (*v12)(void); // rax
  int v13; // eax
  unsigned int v14; // ebx
  int D2DBitmap; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  CHwTexturedColorSource *v19; // r8
  int v20; // eax
  int v21; // edx
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rax
  int CachedEffectNoRef; // eax
  bool v27; // r13
  __int64 v28; // rax
  float v29; // xmm6_4
  int *v30; // rax
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // r9
  CHwTexturedColorSource *v34; // r9
  int v35; // r8d
  int v36; // eax
  int v37; // r9d
  int v38; // r9d
  struct ID2D1Effect *v39; // r8
  ID2D1Effect *v40; // rsi
  __int64 v41; // rax
  __int64 *v42; // rdi
  unsigned int v43; // [rsp+28h] [rbp-A9h]
  struct ID2D1Bitmap1 *v44; // [rsp+38h] [rbp-99h] BYREF
  struct ID2D1ColorContext *v45; // [rsp+40h] [rbp-91h] BYREF
  struct ID2D1ColorContext *v46; // [rsp+48h] [rbp-89h] BYREF
  ID2D1Effect *v47; // [rsp+50h] [rbp-81h] BYREF
  __int64 v48; // [rsp+58h] [rbp-79h] BYREF
  __int128 v49; // [rsp+60h] [rbp-71h]
  struct ID2D1Effect *v50; // [rsp+78h] [rbp-59h] BYREF
  char v51[4]; // [rsp+80h] [rbp-51h] BYREF
  int v52; // [rsp+84h] [rbp-4Dh]
  enum D2D1_EXTEND_MODE v53; // [rsp+88h] [rbp-49h] BYREF
  enum D2D1_EXTEND_MODE v54; // [rsp+8Ch] [rbp-45h]
  int v55; // [rsp+90h] [rbp-41h]
  float v56; // [rsp+98h] [rbp-39h] BYREF
  __int128 v57; // [rsp+9Ch] [rbp-35h] BYREF
  unsigned __int64 v58; // [rsp+ACh] [rbp-25h]
  __int128 v59; // [rsp+B8h] [rbp-19h] BYREF
  enum D2D1_EXTEND_MODE v60; // [rsp+C8h] [rbp-9h]
  enum D2D1_EXTEND_MODE v61; // [rsp+CCh] [rbp-5h]
  int v62; // [rsp+D0h] [rbp-1h]

  v56 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v48 = 0LL;
  *a4 = 0LL;
  v8 = *(__int64 **)(a1 + 16);
  v47 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v9 = (__m128)*((unsigned int *)v8 + 21);
  v10 = *(_OWORD *)((char *)v8 + 68);
  v44 = 0LL;
  v58 = _mm_unpacklo_ps(v9, (__m128)*((unsigned int *)v8 + 22)).m128_u64[0];
  v57 = v10;
  v11 = *v8;
  v50 = 0LL;
  v49 = v10;
  v12 = *(__int64 (**)(void))(v11 + 40);
  if ( (char *)v12 == (char *)CHwBitmapColorSource::Realize )
    v13 = CHwBitmapColorSource::Realize((CHwBitmapColorSource *)v8);
  else
    v13 = v12();
  v14 = v13;
  if ( v13 < 0 )
  {
    v43 = 87;
    v37 = v13;
    goto LABEL_49;
  }
  D2DBitmap = CHwTexturedColorSource::GetD2DBitmap(*(CHwTexturedColorSource **)(a1 + 16), &v44);
  v14 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x59u);
    v5 = v44;
    goto LABEL_12;
  }
  v16 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v16 + 100) != 2 )
  {
    v53 = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v16 + 28));
    v54 = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v17 + 32));
    v55 = D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v18 + 24));
    v20 = CHwTexturedColorSource::UsingSuperSampling(v19);
    v22 = (_QWORD *)(a1 + 24);
    v23 = *(_QWORD *)(a1 + 24);
    if ( v20 )
      v21 = 3;
    v55 = v21;
    if ( v23 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 128LL))(v23);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v22 + 64LL))(*v22, (unsigned int)v53);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v22 + 72LL))(*v22, (unsigned int)v54);
      v5 = v44;
      (*(void (__fastcall **)(_QWORD, struct ID2D1Bitmap1 *))(*(_QWORD *)*v22 + 88LL))(*v22, v44);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 32LL))(*v22);
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v22 + 40LL))(*v22, &v57);
LABEL_10:
      v24 = *v22;
LABEL_11:
      *a4 = v24;
      goto LABEL_12;
    }
    v5 = v44;
    CachedEffectNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 *, enum D2D1_EXTEND_MODE *, float *, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 40LL) + 528LL))(
                          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL),
                          v44,
                          &v53,
                          &v56,
                          a1 + 24);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef >= 0 )
      goto LABEL_10;
    v43 = 212;
    goto LABEL_27;
  }
  v5 = v44;
  (*(void (__fastcall **)(struct ID2D1Bitmap1 *, char *))(*(_QWORD *)v44 + 48LL))(v44, v51);
  v27 = v52 == 3;
  v28 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 **))(*(_QWORD *)v5 + 40LL))(v5, &v44);
  *(_QWORD *)&v49 = 0LL;
  v29 = (float)*(int *)(v28 + 4);
  v30 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, enum D2D1_EXTEND_MODE *))(*(_QWORD *)v5 + 40LL))(
                 v5,
                 &v53);
  v31 = *(_QWORD *)(a1 + 16);
  *((float *)&v49 + 3) = v29;
  *((float *)&v49 + 2) = (float)*v30;
  v59 = v49;
  v60 = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v31 + 28));
  v61 = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v32 + 32));
  v62 = D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v33 + 24));
  if ( (unsigned int)CHwTexturedColorSource::UsingSuperSampling(v34) )
    v35 = 3;
  v62 = v35;
  if ( !v27 )
    goto LABEL_32;
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*(_QWORD *)(a1 + 8), 1LL, &v50);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    v43 = 122;
    goto LABEL_27;
  }
  v4 = v50;
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v50 + 112LL))(
    v50,
    0LL,
    v5,
    1LL);
  LODWORD(v44) = 2;
  v36 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Bitmap1 **, int))(*(_QWORD *)v4 + 72LL))(
          v4,
          1LL,
          0LL,
          &v44,
          4);
  v14 = v36;
  if ( v36 < 0 )
  {
    v43 = 127;
    goto LABEL_30;
  }
  CachedEffectNoRef = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, void *, int))(*(_QWORD *)v4 + 72LL))(
                        v4,
                        0LL,
                        0LL,
                        &unk_1801C7CA0,
                        80);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef >= 0 )
  {
LABEL_32:
    CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*(_QWORD *)(a1 + 8), 5LL, &v47);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v43 = 136;
      goto LABEL_27;
    }
    CachedEffectNoRef = CD2DContext::GetColorContextNoRef(*(CD2DContext **)(a1 + 8), D2D1_COLOR_SPACE_SCRGB, &v45);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v43 = 141;
      goto LABEL_27;
    }
    CachedEffectNoRef = CD2DContext::GetColorContextNoRef(*(CD2DContext **)(a1 + 8), D2D1_COLOR_SPACE_SRGB, &v46);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v43 = 146;
      goto LABEL_27;
    }
    if ( v27 )
    {
      v39 = v4;
      v40 = v47;
      ID2D1Effect::SetInputEffect(v47, 0, v39, v38);
    }
    else
    {
      v40 = v47;
      (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v47 + 112LL))(
        v47,
        0LL,
        v5,
        1LL);
    }
    v36 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v40 + 72LL))(
            v40,
            0LL,
            0LL,
            &v45,
            8);
    v14 = v36;
    if ( v36 >= 0 )
    {
      CachedEffectNoRef = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v40 + 72LL))(
                            v40,
                            2LL,
                            0LL,
                            &v46,
                            8);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef < 0 )
      {
        v43 = 171;
      }
      else
      {
        (*(void (__fastcall **)(ID2D1Effect *, __int64 *))(*(_QWORD *)v40 + 144LL))(v40, &v48);
        v41 = *(_QWORD *)(a1 + 8);
        v42 = (__int64 *)(a1 + 32);
        CachedEffectNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, float *, __int64 *))(**(_QWORD **)(v41 + 40) + 520LL))(
                              *(_QWORD *)(v41 + 40),
                              v48,
                              &v59,
                              &v56,
                              v42);
        v14 = CachedEffectNoRef;
        if ( CachedEffectNoRef >= 0 )
        {
          v24 = *v42;
          goto LABEL_11;
        }
        v43 = 188;
      }
      goto LABEL_27;
    }
    v43 = 166;
LABEL_30:
    v37 = v36;
    goto LABEL_49;
  }
  v43 = 130;
LABEL_27:
  v37 = CachedEffectNoRef;
LABEL_49:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, v43);
LABEL_12:
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v5 + 16LL))(v5);
  return v14;
}
