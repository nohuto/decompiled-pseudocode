/*
 * XREFs of ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x180041AC4
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021670 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawD2DBitmapInternal(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        __int128 *a3,
        __int128 *a4,
        float a5,
        int a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  const struct D2D_RECT_F *v13; // rsi
  const struct D2D_RECT_F *v14; // rdi
  enum D2D1_PRIMITIVE_BLEND v15; // r15d
  const struct ID2DContextOwner *v16; // rbx
  enum D2D1_INTERPOLATION_MODE v17; // eax
  int v18; // ecx
  struct ID2D1PrivateCompositorRenderer **v19; // r14
  enum D2D1_ANTIALIAS_MODE v20; // r12d
  __int64 (__fastcall *v21)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND); // r13
  int v22; // eax
  int v24; // r9d
  int v25; // r15d
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-69h]
  __int64 v29; // [rsp+58h] [rbp-31h]
  __int128 v30; // [rsp+60h] [rbp-29h] BYREF
  __int128 v31; // [rsp+70h] [rbp-19h] BYREF

  v9 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 2084;
LABEL_16:
    v24 = v9;
    goto LABEL_29;
  }
  if ( a3 )
    v31 = *a3;
  if ( a4 )
    v30 = *a4;
  v11 = a1 + 56;
  if ( !*(_DWORD *)(a1 + 488)
    || (v12 = *(_DWORD *)(a1 + 488)) == 0
    || !*(_BYTE *)((unsigned int)(v12 - 1) + *(_QWORD *)(a1 + 504)) )
  {
    v13 = (const struct D2D_RECT_F *)((unsigned __int64)&v30 & -(__int64)(a4 != 0LL));
    v14 = (const struct D2D_RECT_F *)((unsigned __int64)&v31 & -(__int64)(a3 != 0LL));
    v15 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
    v16 = (const struct ID2DContextOwner *)(v11 & -(__int64)(a1 != 0));
    if ( a6 )
    {
      if ( a6 == 1 )
      {
        v15 = D2D1_PRIMITIVE_BLEND_COPY;
      }
      else if ( a6 == 4 )
      {
        v15 = D2D1_PRIMITIVE_BLEND_MIN;
      }
    }
    v17 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 244));
    v18 = *(_DWORD *)(a1 + 248);
    v19 = *(struct ID2D1PrivateCompositorRenderer ***)(a1 + 376);
    v20 = v18 != 0;
    v21 = (__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND))*((_QWORD *)*v19 + 11);
    if ( v21 == CD2DContext::DrawBitmap )
      v22 = CD2DContext::DrawBitmap(v19, v16, a2, v14, v13, a5, v20, v17, v15);
    else
      v22 = ((__int64 (__fastcall *)(struct ID2D1PrivateCompositorRenderer **, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND))v21)(
              v19,
              v16,
              a2,
              v14,
              v13,
              LODWORD(a5),
              v20,
              v17,
              v15);
    v10 = v22;
    if ( v22 >= 0 )
      return v10;
    v27 = 2111;
    v24 = v22;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v27);
    return v10;
  }
  v25 = 0;
  v29 = v11 & -(__int64)(a1 != 0);
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v25 = 1;
    }
    else if ( a6 == 4 )
    {
      v25 = 2;
    }
  }
  v26 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 244));
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Bitmap1 *, unsigned __int64, unsigned __int64, float, bool, int, int))(**(_QWORD **)(a1 + 376) + 112LL))(
         *(_QWORD *)(a1 + 376),
         v29,
         a2,
         (unsigned __int64)&v31 & -(__int64)(a3 != 0LL),
         (unsigned __int64)&v30 & -(__int64)(a4 != 0LL),
         COERCE_FLOAT(LODWORD(a5)),
         *(_DWORD *)(a1 + 248) != 0,
         v26,
         v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 2122;
    goto LABEL_16;
  }
  return v10;
}
