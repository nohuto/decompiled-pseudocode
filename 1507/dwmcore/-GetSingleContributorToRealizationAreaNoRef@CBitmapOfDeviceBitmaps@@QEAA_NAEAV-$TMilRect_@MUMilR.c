/*
 * XREFs of ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180137D7C
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801377A4 (-DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@U.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(__int64 a1, float *a2, _QWORD *a3)
{
  char v3; // bl
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm1_4
  float v13; // xmm9_4
  unsigned int v14; // esi
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  unsigned int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // r14

  v3 = 0;
  v7 = *a2;
  v8 = 0.0;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*a2) & _xmm);
  if ( v9 < 8388608.0 )
  {
    v10 = floorf_0(v7 + 0.5) - v7;
    if ( v10 <= -0.5 )
      v10 = v10 + 1.0;
  }
  else
  {
    v10 = 0.0;
  }
  v11 = a2[1];
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
  if ( v12 < 8388608.0 )
  {
    v8 = floorf_0(v11 + 0.5) - v11;
    if ( v8 <= -0.5 )
      v8 = v8 + 1.0;
  }
  v13 = v7 + v10;
  v14 = 0;
  v15 = v10 + a2[2];
  v16 = v11 + v8;
  v17 = v8 + a2[3];
  *a2 = v13;
  a2[2] = v15;
  a2[1] = v16;
  a2[3] = v17;
  v18 = *(_DWORD *)(a1 + 320);
  if ( !v18 )
    goto LABEL_17;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = v19 + *(_QWORD *)(a1 + 296);
    if ( CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DoesIntersectValid((int *)v20, a2) )
      break;
LABEL_13:
    ++v14;
    v19 += 96LL;
    if ( v14 >= v18 )
      goto LABEL_16;
  }
  if ( !v3 )
  {
    v3 = 1;
    *a3 = *(_QWORD *)(v20 + 16);
    goto LABEL_13;
  }
  v3 = 0;
LABEL_16:
  if ( !v3 )
LABEL_17:
    *a3 = 0LL;
  return v3;
}
