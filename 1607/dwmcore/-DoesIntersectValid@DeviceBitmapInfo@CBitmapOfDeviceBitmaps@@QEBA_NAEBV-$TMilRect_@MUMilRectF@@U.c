/*
 * XREFs of ?DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179218
 * Callers:
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801797E4 (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::DoesIntersectValid(int *a1, float *a2)
{
  char v2; // bl
  LONG v3; // xmm1_4
  int v4; // eax
  LONG v5; // xmm0_4
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  HRGN v9; // rcx
  float v10; // xmm0_4
  float v11; // eax
  double v12; // xmm0_8
  int v13; // eax
  double v14; // xmm0_8
  int v15; // eax
  float v17; // [rsp+20h] [rbp-28h]
  RECT rect; // [rsp+28h] [rbp-20h] BYREF

  v2 = 0;
  *(float *)&v3 = (float)a1[7];
  v4 = a1[8];
  *(float *)&rect.left = (float)a1[6];
  *(float *)&v5 = (float)v4;
  v6 = a1[9];
  rect.top = v3;
  rect.right = v5;
  *(float *)&rect.bottom = (float)v6;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)&rect.left, a2) )
  {
    v9 = *(HRGN *)(v8 + 40);
    v10 = *(float *)v7 + 6291456.25;
    v11 = v10;
    v12 = *(float *)(v7 + 4);
    rect.left = (int)(LODWORD(v11) << 10) >> 11;
    *(float *)&v12 = v12 + 6291456.25;
    v13 = LODWORD(v12);
    v14 = *(float *)(v7 + 8);
    rect.top = v13 << 10 >> 11;
    *(float *)&v14 = v14 + 6291456.25;
    v15 = LODWORD(v14);
    LODWORD(v14) = *(_DWORD *)(v7 + 12);
    rect.right = v15 << 10 >> 11;
    v17 = *(float *)&v14 + 6291456.25;
    rect.bottom = (int)(LODWORD(v17) << 10) >> 11;
    if ( !v9 || RectInRegion(v9, &rect) )
      return 1;
  }
  return v2;
}
