/*
 * XREFs of ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013A318 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x18001BE60 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DExtendModeFromD3DAddressMode@@YA?AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z @ 0x180084614 (-D2DExtendModeFromD3DAddressMode@@YA-AW4D2D1_EXTEND_MODE@@W4D3D11_TEXTURE_ADDRESS_MODE@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180084638 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?D2DBitmapInterpolationModeFromMilFilterMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@@Z @ 0x180085098 (-D2DBitmapInterpolationModeFromMilFilterMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@FilterMode@@.c)
 *     ?CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush1@@@Z @ 0x18008F404 (-CreateBitmapBrush@CD2DContext@@QEAAJPEAUID2D1Bitmap@@PEBUD2D1_BITMAP_BRUSH_PROPERTIES1@@PEBUD2D.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180112180 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1ImageBrush@@@Z @ 0x1801352A8 (-CreateImageBrush@CD2DContext@@QEAAJPEAUID2D1Image@@PEBUD2D1_IMAGE_BRUSH_PROPERTIES@@PEBUD2D1_BR.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180136610 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z @ 0x180136720 (-GetColorContextNoRef@CD2DContext@@QEAAJW4D2D1_COLOR_SPACE@@PEAPEAUID2D1ColorContext@@@Z.c)
 */

__int64 __fastcall CHwBitmapBrush::GetD2DBrush(CD2DContext **a1, FLOAT a2, __int64 a3, CD2DContext **a4)
{
  struct ID2D1Effect *v4; // r14
  struct ID2D1Bitmap *v5; // r15
  CD2DContext *v7; // rbx
  __m128 v9; // xmm2
  D2D1_RECT_F v10; // xmm0
  __int64 v11; // rax
  __int64 (__fastcall *v12)(CHwBitmapColorSource *); // rsi
  int v13; // eax
  unsigned int v14; // esi
  int D2DBitmap; // eax
  CD2DContext *v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  D2D1_INTERPOLATION_MODE interpolationMode; // r14d
  CD2DContext **v21; // r12
  CD2DContext *v22; // r15
  CD2DContext *v23; // rax
  int CachedEffectNoRef; // eax
  bool v26; // si
  __int64 v27; // rax
  FLOAT v28; // xmm6_4
  int *v29; // rax
  CD2DContext *v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  D2D1_INTERPOLATION_MODE v33; // eax
  __int64 v34; // r8
  int v35; // r9d
  struct ID2D1Effect *v36; // r8
  ID2D1Effect *v37; // r14
  unsigned int v38; // [rsp+28h] [rbp-A9h]
  bool v39; // [rsp+38h] [rbp-99h]
  struct ID2D1Bitmap *v40; // [rsp+40h] [rbp-91h] BYREF
  struct ID2D1ColorContext *v41; // [rsp+48h] [rbp-89h] BYREF
  struct ID2D1ColorContext *v42; // [rsp+50h] [rbp-81h] BYREF
  ID2D1Effect *v43; // [rsp+58h] [rbp-79h] BYREF
  struct ID2D1Image *v44; // [rsp+60h] [rbp-71h] BYREF
  D2D1_RECT_F v45; // [rsp+68h] [rbp-69h]
  struct ID2D1Effect *v46; // [rsp+80h] [rbp-51h] BYREF
  char v47[4]; // [rsp+88h] [rbp-49h] BYREF
  int v48; // [rsp+8Ch] [rbp-45h]
  struct D2D1_BITMAP_BRUSH_PROPERTIES1 v49; // [rsp+90h] [rbp-41h] BYREF
  D2D1_BRUSH_PROPERTIES v50; // [rsp+A0h] [rbp-31h] BYREF
  D2D1_IMAGE_BRUSH_PROPERTIES v51; // [rsp+C0h] [rbp-11h] BYREF

  v50.opacity = a2;
  v4 = 0LL;
  *a4 = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  v7 = a1[2];
  v43 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v9 = (__m128)*((unsigned int *)v7 + 21);
  v10 = *(D2D1_RECT_F *)((char *)v7 + 68);
  v40 = 0LL;
  *(_QWORD *)&v50.transform.m[2][0] = _mm_unpacklo_ps(v9, (__m128)*((unsigned int *)v7 + 22)).m128_u64[0];
  *(D2D1_RECT_F *)&v50.transform.m11 = v10;
  v11 = *(_QWORD *)v7;
  v46 = 0LL;
  v45 = v10;
  v12 = *(__int64 (__fastcall **)(CHwBitmapColorSource *))(v11 + 40);
  if ( v12 == CHwBitmapColorSource::Realize )
    v13 = CHwBitmapColorSource::Realize(v7);
  else
    v13 = v12(v7);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x57u);
    goto LABEL_11;
  }
  D2DBitmap = CHwTexturedColorSource::GetD2DBitmap(a1[2], &v40);
  v14 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x59u);
    v5 = v40;
    goto LABEL_11;
  }
  v16 = a1[2];
  if ( *((_DWORD *)v16 + 25) != 2 )
  {
    v49.extendModeX = D2DExtendModeFromD3DAddressMode(*((enum D3D11_TEXTURE_ADDRESS_MODE *)v16 + 7));
    v49.extendModeY = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v17 + 32));
    v49.interpolationMode = D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v18 + 24));
    interpolationMode = v49.interpolationMode;
    if ( *(float *)(v19 + 36) > 0.0 )
    {
      if ( *(float *)(v19 + 40) > 0.0 )
        interpolationMode = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
      v49.interpolationMode = interpolationMode;
    }
    v21 = a1 + 3;
    v22 = a1[3];
    if ( v22 )
    {
      (*(void (__fastcall **)(CD2DContext *, _QWORD))(*(_QWORD *)v22 + 128LL))(a1[3], (unsigned int)interpolationMode);
      (*(void (__fastcall **)(CD2DContext *, _QWORD))(*(_QWORD *)*v21 + 64LL))(*v21, (unsigned int)v49.extendModeX);
      (*(void (__fastcall **)(CD2DContext *, _QWORD))(*(_QWORD *)*v21 + 72LL))(*v21, (unsigned int)v49.extendModeY);
      v5 = v40;
      (*(void (__fastcall **)(CD2DContext *, struct ID2D1Bitmap *))(*(_QWORD *)*v21 + 88LL))(*v21, v40);
      (*(void (__fastcall **)(CD2DContext *))(*(_QWORD *)*v21 + 32LL))(*v21);
      (*(void (__fastcall **)(CD2DContext *, D2D1_MATRIX_3X2_F *))(*(_QWORD *)*v21 + 40LL))(*v21, &v50.transform);
LABEL_9:
      v23 = *v21;
LABEL_10:
      *a4 = v23;
      goto LABEL_11;
    }
    v5 = v40;
    CachedEffectNoRef = CD2DContext::CreateBitmapBrush(a1[1], v40, &v49, &v50, a1 + 3);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef >= 0 )
      goto LABEL_9;
    v38 = 212;
    goto LABEL_51;
  }
  v5 = v40;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, char *))(*(_QWORD *)v40 + 48LL))(v40, v47);
  v26 = v48 == 3;
  v39 = v48 == 3;
  v27 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap *, struct ID2D1Bitmap **))(*(_QWORD *)v5 + 40LL))(v5, &v40);
  *(_QWORD *)&v45.left = 0LL;
  v28 = (float)*(int *)(v27 + 4);
  v29 = (int *)(*(__int64 (__fastcall **)(struct ID2D1Bitmap *, struct D2D1_BITMAP_BRUSH_PROPERTIES1 *))(*(_QWORD *)v5 + 40LL))(
                 v5,
                 &v49);
  v30 = a1[2];
  v45.bottom = v28;
  v45.right = (float)*v29;
  v51.sourceRectangle = v45;
  v51.extendModeX = D2DExtendModeFromD3DAddressMode(*((enum D3D11_TEXTURE_ADDRESS_MODE *)v30 + 7));
  v51.extendModeY = D2DExtendModeFromD3DAddressMode(*(enum D3D11_TEXTURE_ADDRESS_MODE *)(v31 + 32));
  v33 = (unsigned int)D2DBitmapInterpolationModeFromMilFilterMode(*(unsigned int *)(v32 + 24));
  v51.interpolationMode = v33;
  if ( *(float *)(v34 + 36) > 0.0 )
  {
    if ( *(float *)(v34 + 40) > 0.0 )
      v33 = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
    v51.interpolationMode = v33;
  }
  if ( !v26 )
    goto LABEL_32;
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(a1[1], 1LL, &v46);
  v14 = CachedEffectNoRef;
  if ( CachedEffectNoRef >= 0 )
  {
    v4 = v46;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v46 + 112LL))(
      v46,
      0LL,
      v5,
      1LL);
    LODWORD(v40) = 2;
    CachedEffectNoRef = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct ID2D1Bitmap **, int))(*(_QWORD *)v4 + 72LL))(
                          v4,
                          1LL,
                          0LL,
                          &v40,
                          4);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v38 = 127;
      goto LABEL_51;
    }
    CachedEffectNoRef = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, void *, int))(*(_QWORD *)v4 + 72LL))(
                          v4,
                          0LL,
                          0LL,
                          &unk_1801758E0,
                          80);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef < 0 )
    {
      v38 = 130;
      goto LABEL_51;
    }
LABEL_32:
    CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(a1[1], 5LL, &v43);
    v14 = CachedEffectNoRef;
    if ( CachedEffectNoRef >= 0 )
    {
      CachedEffectNoRef = CD2DContext::GetColorContextNoRef(a1[1], D2D1_COLOR_SPACE_SCRGB, &v41);
      v14 = CachedEffectNoRef;
      if ( CachedEffectNoRef >= 0 )
      {
        CachedEffectNoRef = CD2DContext::GetColorContextNoRef(a1[1], D2D1_COLOR_SPACE_SRGB, &v42);
        v14 = CachedEffectNoRef;
        if ( CachedEffectNoRef >= 0 )
        {
          if ( v39 )
          {
            v36 = v4;
            v37 = v43;
            ID2D1Effect::SetInputEffect(v43, 0, v36, v35);
          }
          else
          {
            v37 = v43;
            (*(void (__fastcall **)(ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v43 + 112LL))(
              v43,
              0LL,
              v5,
              1LL);
          }
          CachedEffectNoRef = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v37 + 72LL))(
                                v37,
                                0LL,
                                0LL,
                                &v41,
                                8);
          v14 = CachedEffectNoRef;
          if ( CachedEffectNoRef >= 0 )
          {
            CachedEffectNoRef = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, struct ID2D1ColorContext **, int))(*(_QWORD *)v37 + 72LL))(
                                  v37,
                                  2LL,
                                  0LL,
                                  &v42,
                                  8);
            v14 = CachedEffectNoRef;
            if ( CachedEffectNoRef >= 0 )
            {
              (*(void (__fastcall **)(ID2D1Effect *, struct ID2D1Image **))(*(_QWORD *)v37 + 144LL))(v37, &v44);
              CachedEffectNoRef = CD2DContext::CreateImageBrush(a1[1], v44, &v51, &v50, a1 + 4);
              v14 = CachedEffectNoRef;
              if ( CachedEffectNoRef >= 0 )
              {
                v23 = a1[4];
                goto LABEL_10;
              }
              v38 = 188;
            }
            else
            {
              v38 = 171;
            }
          }
          else
          {
            v38 = 166;
          }
        }
        else
        {
          v38 = 146;
        }
      }
      else
      {
        v38 = 141;
      }
    }
    else
    {
      v38 = 136;
    }
    goto LABEL_51;
  }
  v38 = 122;
LABEL_51:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, CachedEffectNoRef, v38);
LABEL_11:
  if ( v44 )
    (*(void (__fastcall **)(struct ID2D1Image *))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  return v14;
}
