/*
 * XREFs of ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18006A530
 * Callers:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D890 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawD2DBitmapInternal(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        __int64 a3,
        __int64 a4,
        float a5,
        int a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  enum D2D1_INTERPOLATION_MODE v12; // eax
  enum D2D1_PRIMITIVE_BLEND v13; // edx
  const struct D2D_RECT_F *v14; // r9
  const struct ID2DContextOwner *v15; // r10
  const struct D2D_RECT_F *v16; // r11
  CD2DContext *v17; // rcx
  __int64 (__fastcall *v18)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND); // rdi
  int v19; // eax
  __int64 v21; // rdx
  unsigned int v22; // [rsp+20h] [rbp-49h]

  v8 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v22 = 2077;
    goto LABEL_24;
  }
  if ( !*(_DWORD *)(a1 + 568)
    || (v10 = *(_DWORD *)(a1 + 568)) == 0
    || !*(_BYTE *)((unsigned int)(v10 - 1) + *(_QWORD *)(a1 + 584)) )
  {
    v11 = 0LL;
    if ( a6 )
    {
      if ( a6 == 1 )
      {
        v11 = 1LL;
      }
      else if ( a6 == 4 )
      {
        v11 = 2LL;
      }
    }
    v12 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 324), v11);
    v17 = *(CD2DContext **)(a1 + 456);
    v18 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v17 + 88LL);
    if ( v18 == CD2DContext::DrawBitmap )
      v19 = CD2DContext::DrawBitmap(
              v17,
              v15,
              a2,
              v16,
              v14,
              a5,
              (enum D2D1_ANTIALIAS_MODE)(*(_DWORD *)(a1 + 328) != 0),
              v12,
              v13);
    else
      v19 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *))v18)(
              v17,
              v15,
              a2,
              v16);
    v9 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x838u);
    return v9;
  }
  v21 = 0LL;
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v21 = 1LL;
    }
    else if ( a6 == 4 )
    {
      v21 = 2LL;
    }
  }
  D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 324), v21);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Bitmap1 *))(**(_QWORD **)(a1 + 456) + 112LL))(
         *(_QWORD *)(a1 + 456),
         (a1 + 128) & -(__int64)(a1 != 0),
         a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v22 = 2115;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v22);
  }
  return v9;
}
