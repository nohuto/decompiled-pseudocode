/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x1800F34C0
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010CB40 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180008840 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x1800E0874 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
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
  __int64 v17; // r14
  int v18; // edi
  int D2DInterpolationMode; // eax
  __int64 v20; // r8
  int v21; // eax
  struct ID2D1Bitmap1 *v23; // [rsp+50h] [rbp-19h] BYREF
  struct ID2D1Bitmap1 *v24; // [rsp+58h] [rbp-11h] BYREF
  int v25; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v26[2]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v27[4]; // [rsp+70h] [rbp+7h] BYREF

  v4 = *(_QWORD *)a2;
  v23 = 0LL;
  v24 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 79LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 79LL) )
  {
    if ( this )
      v9 = (CDrawingContext *)((char *)this + 56);
    else
      v9 = 0LL;
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            (struct CResource *)((char *)a2 + 64),
                                            v9,
                                            &v23);
    v11 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner >= 0 )
    {
      if ( this )
        v12 = (CDrawingContext *)((char *)this + 56);
      else
        v12 = 0LL;
      v13 = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
              (struct CResource *)((char *)a3 + 64),
              v12,
              &v24);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v14 = CWatermarkStack<float,64,2,10>::Top((int *)this + 646, &v25);
        v11 = v14;
        if ( v14 >= 0 )
        {
          (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v23 + 40LL))(v23, v26);
          v27[0] = 0;
          v27[1] = 0;
          *(float *)&v27[2] = (float)v26[0];
          *(float *)&v27[3] = (float)v26[1];
          v15 = CDrawingContext::ApplyRenderStateInternal(this, 0);
          v11 = v15;
          if ( v15 >= 0 )
          {
            if ( this )
              v16 = (char *)this + 56;
            else
              v16 = 0LL;
            v17 = *((_QWORD *)this + 47);
            v18 = 0;
            if ( *((_DWORD *)this + 63) == 2 )
              v18 = 12;
            D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
            v21 = (*(__int64 (__fastcall **)(__int64, char *, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, int, int, int))(v20 + 176))(
                    v17,
                    v16,
                    v23,
                    v24,
                    a4,
                    v27,
                    v25,
                    D2DInterpolationMode,
                    v18);
            v11 = v21;
            if ( v21 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1211u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1208u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x11FEu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x11FBu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x11FAu);
    }
  }
  else
  {
    v11 = -2147024809;
  }
  if ( v23 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v24 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v24 + 16LL))(v24);
  return v11;
}
