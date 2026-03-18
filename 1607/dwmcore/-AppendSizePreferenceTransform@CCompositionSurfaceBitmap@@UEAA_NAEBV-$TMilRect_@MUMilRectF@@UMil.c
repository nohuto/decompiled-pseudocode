/*
 * XREFs of ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180093A70
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F8A8 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FB30 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x180016068 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005B9A0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@UEBA?AW4SizePreference@@XZ @ 0x180093C80 (-GetSizePreference@CCompositionSurfaceBitmap@@UEBA-AW4SizePreference@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CCompositionSurfaceBitmap::AppendSizePreferenceTransform(__int64 a1, float *a2, CMILMatrix *a3)
{
  char v5; // di
  int SizePreference; // ecx
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int128 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+58h] [rbp-B0h]
  __int128 v20; // [rsp+68h] [rbp-A0h]
  __int128 v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+88h] [rbp-80h]
  _OWORD v23[4]; // [rsp+98h] [rbp-70h] BYREF
  int v24; // [rsp+D8h] [rbp-30h]
  float v25; // [rsp+E8h] [rbp-20h] BYREF
  float v26; // [rsp+ECh] [rbp-1Ch]
  float v27; // [rsp+F0h] [rbp-18h]
  float v28; // [rsp+F4h] [rbp-14h]
  _QWORD v29[2]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 0;
  v24 = 0;
  CCompositionSurfaceBitmap::GetTransform(a1, (__int64)v23, v29);
  v18 = v23[0];
  v19 = v23[1];
  v20 = v23[2];
  v21 = v23[3];
  v22 = v24;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v18, (__int64)v29, &v25);
  SizePreference = CCompositionSurfaceBitmap::GetSizePreference(a1);
  if ( SizePreference != 1 )
  {
    v8 = 0.0;
    v9 = v27 - v25;
    if ( (float)(v27 - v25) > 0.0 )
    {
      v10 = v28 - v26;
      if ( (float)(v28 - v26) > 0.0 )
      {
        v11 = a2[2] - *a2;
        v12 = a2[3] - a2[1];
        v18 = CMILMatrix::Identity;
        v20 = xmmword_1801EAD30;
        v19 = xmmword_1801EAD20;
        v21 = xmmword_1801EAD40;
        v22 = dword_1801EAD50;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - v9)) & _xmm) > 0.00390625
          || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v12 - v10)) & _xmm), v13 > 0.00390625) )
        {
          if ( SizePreference )
          {
            v14 = 0.0;
            v15 = v11 / v9;
            v16 = (float)(v11 / v9) * v10;
            if ( v12 < v16 )
            {
              v15 = v12 / v10;
              v8 = (float)(v11 - (float)((float)(v12 / v10) * v9)) * 0.5;
            }
            else
            {
              v14 = (float)(v12 - v16) * 0.5;
            }
            CMILMatrix::Set2DScaleAndOffset((CMILMatrix *)&v18, v15, v15, v8, v14);
          }
          else
          {
            CMILMatrix::SetScale((CMILMatrix *)&v18, v11 / v9, v12 / v10, 1.0, 0.0, 0.0, 0.0);
          }
          CMILMatrix::Multiply(a3, (const struct CMILMatrix *)&v18);
          return 1;
        }
      }
    }
  }
  return v5;
}
