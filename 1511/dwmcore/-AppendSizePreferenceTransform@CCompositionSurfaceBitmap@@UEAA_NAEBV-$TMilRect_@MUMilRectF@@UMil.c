/*
 * XREFs of ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18002E3E0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CB04 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE50 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x18002E610 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CCompositionSurfaceBitmap::AppendSizePreferenceTransform(__int64 a1, float *a2, struct D2DMatrix *a3)
{
  char v6; // di
  int SizePreference; // eax
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int32 v13; // xmm1_4
  float v14; // xmm0_4
  __m256i v16; // [rsp+28h] [rbp-99h] BYREF
  __int128 v17; // [rsp+48h] [rbp-79h]
  __int128 v18; // [rsp+58h] [rbp-69h]
  float v19; // [rsp+68h] [rbp-59h] BYREF
  float v20; // [rsp+6Ch] [rbp-55h]
  float v21; // [rsp+70h] [rbp-51h]
  float v22; // [rsp+74h] [rbp-4Dh]
  _QWORD v23[2]; // [rsp+78h] [rbp-49h] BYREF
  __m256i v24; // [rsp+88h] [rbp-39h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-19h]
  __int128 v26; // [rsp+B8h] [rbp-9h]

  v6 = 0;
  CCompositionSurfaceBitmap::GetTransform(a1, (__int64)&v24, v23);
  v16 = v24;
  v17 = v25;
  v18 = v26;
  CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v16, (const struct MilRectF *)v23, (struct MilRectF *)&v19);
  SizePreference = CCompositionSurfaceBitmap::GetSizePreference(a1);
  if ( SizePreference != 1 )
  {
    v8 = v21 - v19;
    if ( (float)(v21 - v19) > 0.0 )
    {
      v9 = v22 - v20;
      if ( (float)(v22 - v20) > 0.0 )
      {
        v10 = a2[2] - *a2;
        *(_QWORD *)((char *)&v18 + 4) = 0LL;
        LODWORD(v18) = 0;
        *(_QWORD *)&v17 = 0LL;
        v16.m256i_i64[3] = 0LL;
        *(__int64 *)((char *)&v16.m256i_i64[1] + 4) = 0LL;
        v16.m256i_i32[2] = 0;
        v11 = a2[3] - a2[1];
        HIDWORD(v18) = 1065353216;
        *((_QWORD *)&v17 + 1) = 1065353216LL;
        v16.m256i_i32[5] = 1065353216;
        v16.m256i_i64[0] = 1065353216LL;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - v8)) & _xmm) > 0.00390625
          || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - v9)) & _xmm), v12 > 0.00390625) )
        {
          if ( SizePreference )
          {
            *(float *)&v13 = v10 / v8;
            v14 = (float)(v10 / v8) * v9;
            if ( v11 < v14 )
            {
              *(float *)&v13 = v11 / v9;
              *(float *)&v18 = (float)(v10 - (float)((float)(v11 / v9) * v8)) * 0.5;
            }
            else
            {
              *((float *)&v18 + 1) = (float)(v11 - v14) * 0.5;
            }
            v16.m256i_i32[0] = v13;
            v16.m256i_i32[5] = v13;
          }
          else
          {
            *(float *)v16.m256i_i32 = v10 / v8;
            *(float *)&v16.m256i_i32[5] = v11 / v9;
          }
          D2DMatrixMultiply(a3, a3, (const struct D2DMatrix *)&v16);
          return 1;
        }
      }
    }
  }
  return v6;
}
