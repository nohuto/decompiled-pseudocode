/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008AD0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WCI@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A190 (-GetBounds@CCompositionSurfaceBitmap@@WCI@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WEA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A1A0 (-GetBounds@CCompositionSurfaceBitmap@@WEA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CYCbCrSurface@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010CBB0 (-GetBounds@CYCbCrSurface@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008A78 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E9E0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(
        CCompositionSurfaceBitmap *a1,
        __int64 a2,
        float *a3,
        __int64 a4)
{
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _BYTE *, __int128 *); // rsi
  char Transform; // al
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float *v15; // rax
  __int64 v16; // rcx
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  __int128 v25; // [rsp+28h] [rbp-69h] BYREF
  __int128 v26; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v27[48]; // [rsp+48h] [rbp-49h] BYREF
  float v28; // [rsp+78h] [rbp-19h]
  float v29; // [rsp+7Ch] [rbp-15h]
  float v30[3]; // [rsp+88h] [rbp-9h] BYREF
  char v31; // [rsp+94h] [rbp+3h] BYREF

  CCompositionSurfaceBitmap::EnsureBitmapRealization(a1, 0);
  if ( *((_QWORD *)a1 + 55) )
  {
    if ( !CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)a1, a3, (_DWORD *)a4) )
    {
      v8 = *((_QWORD *)a1 + 55);
      v9 = *(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *))(*(_QWORD *)(v8 + 112) + 32LL);
      if ( (char *)v9 == (char *)CDxHandleBitmapRealization::GetTransform )
        Transform = CDxHandleBitmapRealization::GetTransform(v8 + 112, v27, &v25, v7);
      else
        Transform = v9(v8 + 112, v27, &v25);
      if ( Transform )
      {
        v11 = *((float *)&v25 + 2);
        v12 = *((float *)&v25 + 3);
        v26 = v25;
        if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v27) )
        {
          v23 = v29 + v14;
          v24 = v28 + v11;
          v17 = v29 + v12;
          *(float *)a4 = v28 + v13;
          *(float *)(a4 + 4) = v23;
          *(float *)(a4 + 8) = v24;
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)v27,
            (const struct MilRectF *)&v26,
            (struct MilPoint2F *const)v30);
          v15 = (float *)&v31;
          *(_QWORD *)&v26 = *(_QWORD *)v30;
          v16 = 3LL;
          v17 = v30[1];
          v18 = v30[0];
          *(_QWORD *)&v25 = *(_QWORD *)v30;
          v19 = v30[1];
          v20 = v30[0];
          do
          {
            v21 = *(v15 - 1);
            if ( v20 > v21 )
              v20 = *(v15 - 1);
            if ( v19 > *v15 )
              v19 = *v15;
            if ( v21 > v18 )
              v18 = *(v15 - 1);
            if ( *v15 > v17 )
              v17 = *v15;
            v15 += 2;
            --v16;
          }
          while ( v16 );
          *(float *)a4 = v20;
          *(float *)(a4 + 4) = v19;
          *(float *)(a4 + 8) = v18;
        }
        *(float *)(a4 + 12) = v17;
      }
      else
      {
        *(_OWORD *)a4 = v25;
      }
    }
  }
  else
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
