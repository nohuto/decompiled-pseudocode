/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1801230A0
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801450D0 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawYCbCrBitmap(
        CDrawingContext *this,
        struct CResource *a2,
        struct CResource *a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4)
{
  __int64 v4; // rax
  struct ID2DContextOwner *v9; // rdx
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v11; // ebx
  struct ID2DContextOwner *v12; // rdx
  int v13; // eax
  int v14; // xmm6_4
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r9d
  unsigned int v19; // [rsp+28h] [rbp-39h]
  struct ID2D1Bitmap1 *v20; // [rsp+58h] [rbp-9h] BYREF
  struct ID2D1Bitmap1 *v21; // [rsp+60h] [rbp-1h] BYREF
  _DWORD v22[2]; // [rsp+68h] [rbp+7h] BYREF
  _DWORD v23[4]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)a2;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 92LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 92LL) )
  {
    if ( this )
      v9 = (CDrawingContext *)((char *)this + 128);
    else
      v9 = 0LL;
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            (struct CResource *)((char *)a2 + 144),
                                            v9,
                                            &v20);
    v11 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      v19 = 4553;
    }
    else
    {
      if ( this )
        v12 = (CDrawingContext *)((char *)this + 128);
      else
        v12 = 0LL;
      D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                              (struct CResource *)((char *)a3 + 144),
                                              v12,
                                              &v21);
      v11 = D2DBitmapRealizationForContextOwner;
      if ( D2DBitmapRealizationForContextOwner < 0 )
      {
        v19 = 4554;
      }
      else
      {
        v13 = *((_DWORD *)this + 754);
        if ( !v13 )
        {
          v11 = -2147467259;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x11CDu);
          goto LABEL_21;
        }
        v14 = *(_DWORD *)(*((_QWORD *)this + 379) + 4LL * (unsigned int)(v13 - 1));
        (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v20 + 40LL))(v20, v22);
        v23[0] = 0;
        v23[1] = 0;
        *(float *)&v23[2] = (float)v22[0];
        *(float *)&v23[3] = (float)v22[1];
        D2DBitmapRealizationForContextOwner = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v11 = D2DBitmapRealizationForContextOwner;
        if ( D2DBitmapRealizationForContextOwner < 0 )
        {
          v19 = 4567;
        }
        else
        {
          v15 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 81));
          D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, int, int, int))(**((_QWORD **)this + 57) + 168LL))(
                                                  *((_QWORD *)this + 57),
                                                  v16,
                                                  v20,
                                                  v21,
                                                  a4,
                                                  v23,
                                                  v14,
                                                  v15,
                                                  v17);
          v11 = D2DBitmapRealizationForContextOwner;
          if ( D2DBitmapRealizationForContextOwner >= 0 )
            goto LABEL_21;
          v19 = 4576;
        }
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, v19);
  }
  else
  {
    v11 = -2147024809;
  }
LABEL_21:
  if ( v20 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v21 + 16LL))(v21);
  return v11;
}
