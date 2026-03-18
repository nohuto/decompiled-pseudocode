/*
 * XREFs of ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CB74
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE00 (-GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C3F0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C820 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CD0C (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800328A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBoundsInternal(__int64 a1, __int64 a2, float *a3)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _BYTE *, __int128 *); // rsi
  char Transform; // al
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float *v12; // rax
  __int64 v13; // rcx
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  __int128 v22; // [rsp+28h] [rbp-69h] BYREF
  __int128 v23; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v24[48]; // [rsp+48h] [rbp-49h] BYREF
  float v25; // [rsp+78h] [rbp-19h]
  float v26; // [rsp+7Ch] [rbp-15h]
  float v27[3]; // [rsp+88h] [rbp-9h] BYREF
  char v28; // [rsp+94h] [rbp+3h] BYREF

  if ( *(_QWORD *)(a1 + 448) )
  {
    if ( !(unsigned __int8)CCompositionSurfaceBitmap::BoundsFromLayoutSize(a1, a2, a3) )
    {
      v5 = *(_QWORD *)(v4 + 448);
      v6 = *(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *))(*(_QWORD *)(v5 + 112) + 32LL);
      if ( (char *)v6 == (char *)CDxHandleBitmapRealization::GetTransform )
        Transform = CDxHandleBitmapRealization::GetTransform(v5 + 112, v24, &v22, v4);
      else
        Transform = v6(v5 + 112, v24, &v22);
      if ( Transform )
      {
        v8 = *((float *)&v22 + 2);
        v9 = *((float *)&v22 + 3);
        v23 = v22;
        if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v24) )
        {
          v20 = v26 + v11;
          v21 = v25 + v8;
          v14 = v26 + v9;
          *a3 = v25 + v10;
          a3[1] = v20;
          a3[2] = v21;
        }
        else
        {
          CBaseMatrix::Transform2DRectToPerspective(
            (CBaseMatrix *)v24,
            (const struct MilRectF *)&v23,
            (struct MilPoint2F *const)v27);
          v12 = (float *)&v28;
          *(_QWORD *)&v23 = *(_QWORD *)v27;
          v13 = 3LL;
          v14 = v27[1];
          v15 = v27[0];
          *(_QWORD *)&v22 = *(_QWORD *)v27;
          v16 = v27[1];
          v17 = v27[0];
          do
          {
            v18 = *(v12 - 1);
            if ( v17 > v18 )
              v17 = *(v12 - 1);
            if ( v16 > *v12 )
              v16 = *v12;
            if ( v18 > v15 )
              v15 = *(v12 - 1);
            if ( *v12 > v14 )
              v14 = *v12;
            v12 += 2;
            --v13;
          }
          while ( v13 );
          *a3 = v17;
          a3[1] = v16;
          a3[2] = v15;
        }
        a3[3] = v14;
      }
      else
      {
        *(_OWORD *)a3 = v22;
      }
    }
  }
  else
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  return 0LL;
}
