/*
 * XREFs of ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18002C874
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800721B0 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  CD2DContext *v18; // r12
  enum D2D1_ANTIALIAS_MODE v19; // r14d
  __int64 (__usercall *v20)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, struct ID2D1Bitmap1 *@<r8>, const struct D2D_RECT_F *@<r9>, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND); // r13
  int v21; // eax
  int v23; // r9d
  int v24; // r15d
  __int64 v25; // r14
  BOOL v26; // edi
  enum D2D1_INTERPOLATION_MODE v27; // eax
  __int64 v28; // r10
  unsigned int v29; // [rsp+20h] [rbp-69h]
  unsigned __int64 v30; // [rsp+50h] [rbp-39h]
  __int64 v32; // [rsp+60h] [rbp-29h]
  __int128 v33; // [rsp+68h] [rbp-21h] BYREF
  __int128 v34; // [rsp+78h] [rbp-11h] BYREF

  v9 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v29 = 2077;
LABEL_15:
    v23 = v9;
    goto LABEL_29;
  }
  if ( a3 )
    v34 = *a3;
  if ( a4 )
    v33 = *a4;
  v11 = a1 + 56;
  if ( !*(_DWORD *)(a1 + 488)
    || (v12 = *(_DWORD *)(a1 + 488)) == 0
    || !*(_BYTE *)((unsigned int)(v12 - 1) + *(_QWORD *)(a1 + 504)) )
  {
    v13 = (const struct D2D_RECT_F *)((unsigned __int64)&v33 & -(__int64)(a4 != 0LL));
    v14 = (const struct D2D_RECT_F *)((unsigned __int64)&v34 & -(__int64)(a3 != 0LL));
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
    D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode((CDrawingContext *)a1);
    v18 = *(CD2DContext **)(a1 + 376);
    v19 = *(_DWORD *)(a1 + 248) != 0;
    v20 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, struct ID2D1Bitmap1 *@<r8>, const struct D2D_RECT_F *@<r9>, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v18 + 88LL);
    if ( v20 == CD2DContext::DrawBitmap )
      v21 = CD2DContext::DrawBitmap(v18, v16, a2, v14, v13, a5, v19, D2DInterpolationMode, v15);
    else
      v21 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, _DWORD, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND))v20)(
              v18,
              v16,
              a2,
              v14,
              v13,
              LODWORD(a5),
              v19,
              D2DInterpolationMode,
              v15);
    v10 = v21;
    if ( v21 >= 0 )
      return v10;
    v29 = 2104;
    v23 = v21;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v29);
    return v10;
  }
  v30 = (unsigned __int64)&v34 & -(__int64)(a3 != 0LL);
  v24 = 0;
  v32 = v11 & -(__int64)(a1 != 0);
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v24 = 1;
    }
    else if ( a6 == 4 )
    {
      v24 = 2;
    }
  }
  v25 = *(_QWORD *)(a1 + 376);
  v26 = *(_DWORD *)(a1 + 248) != 0;
  v27 = CDrawingContext::GetD2DInterpolationMode((CDrawingContext *)a1);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, struct ID2D1Bitmap1 *, unsigned __int64, unsigned __int64, float, BOOL, enum D2D1_INTERPOLATION_MODE, int))(v28 + 112))(
         v25,
         v32,
         a2,
         v30,
         (unsigned __int64)&v33 & -(__int64)(a4 != 0LL),
         COERCE_FLOAT(LODWORD(a5)),
         v26,
         v27,
         v24);
  v10 = v9;
  if ( v9 < 0 )
  {
    v29 = 2115;
    goto LABEL_15;
  }
  return v10;
}
