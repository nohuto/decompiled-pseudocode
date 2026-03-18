/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18010D4B0
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180127AA0 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18000B9FC (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CA50 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  unsigned int v11; // edi
  struct ID2DContextOwner *v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // r15
  int v17; // edi
  int v18; // eax
  int v19; // eax
  struct ID2D1Bitmap1 *v21; // [rsp+50h] [rbp-19h] BYREF
  struct ID2D1Bitmap1 *v22; // [rsp+58h] [rbp-11h] BYREF
  int v23; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v25[4]; // [rsp+70h] [rbp+7h] BYREF

  v4 = *(_QWORD *)a2;
  v21 = 0LL;
  v22 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 87LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 87LL) )
  {
    if ( this )
      v9 = (CDrawingContext *)((char *)this + 56);
    else
      v9 = 0LL;
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            (struct CResource *)((char *)a2 + 72),
                                            v9,
                                            &v21);
    v11 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner >= 0 )
    {
      if ( this )
        v12 = (CDrawingContext *)((char *)this + 56);
      else
        v12 = 0LL;
      v13 = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
              (struct CResource *)((char *)a3 + 72),
              v12,
              &v22);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v14 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, &v23);
        v11 = v14;
        if ( v14 >= 0 )
        {
          (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v21 + 40LL))(v21, v24);
          v25[0] = 0;
          v25[1] = 0;
          *(float *)&v25[2] = (float)v24[0];
          *(float *)&v25[3] = (float)v24[1];
          v15 = CDrawingContext::ApplyRenderStateInternal(this, 0);
          v11 = v15;
          if ( v15 >= 0 )
          {
            if ( this )
              v16 = (char *)this + 56;
            else
              v16 = 0LL;
            v17 = 0;
            if ( *((_DWORD *)this + 63) == 2 )
              v17 = 12;
            v18 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 61));
            v19 = (*(__int64 (__fastcall **)(_QWORD, char *, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, int, int, int))(**((_QWORD **)this + 47) + 176LL))(
                    *((_QWORD *)this + 47),
                    v16,
                    v21,
                    v22,
                    a4,
                    v25,
                    v23,
                    v18,
                    v17);
            v11 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1228u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x121Fu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1215u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1212u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x1211u);
    }
  }
  else
  {
    v11 = -2147024809;
  }
  if ( v21 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v22 + 16LL))(v22);
  return v11;
}
