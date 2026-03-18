/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800DC8AC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18000DCE0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800DC78C (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180104D20 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(
        _DWORD *a1,
        char a2,
        const struct _MARGINS *a3,
        float *a4,
        LONG *a5,
        LONG *a6)
{
  char v10; // r14
  char v11; // r10
  int v12; // ecx
  LONG v13; // r8d
  LONG v14; // r9d
  LONG v15; // r8d
  int v16; // edx
  LONG v17; // r9d
  LONG v18; // eax
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  LONG v22; // eax
  char v23; // r10
  __int128 v25; // [rsp+20h] [rbp-48h]

  v10 = 0;
  LODWORD(v25) = (int)*a4;
  DWORD1(v25) = (int)a4[1];
  DWORD2(v25) = (int)a4[2];
  HIDWORD(v25) = (int)a4[3];
  *(_OWORD *)a5 = v25;
  LODWORD(v25) = (int)*a4;
  DWORD1(v25) = (int)a4[1];
  DWORD2(v25) = (int)a4[2];
  HIDWORD(v25) = (int)a4[3];
  *(_OWORD *)a6 = v25;
  CWindowNode::IntersectWithMaximizedClip((__int64)a1, a5);
  if ( a3 && !AreAllMarginsZero(a3) )
  {
    v10 = v11;
    v12 = *a6 + a3->cxLeftWidth;
    v13 = a6[2];
    v14 = a6[3];
    *a6 = v12;
    v15 = v13 - a3->cxRightWidth;
    a6[2] = v15;
    v16 = a6[1] + a3->cyTopHeight;
    a6[1] = v16;
    v17 = v14 - a3->cyBottomHeight;
    a6[3] = v17;
    if ( a2 )
    {
      *a6 = v12 - (int)*a4;
      a6[1] = v16 - (int)a4[1];
      a6[2] = v15 + a1[240] - a1[238] - (int)a4[2];
      a6[3] = v17 + a1[241] - a1[239] - (int)a4[3];
    }
    v18 = *a6;
    if ( a6[2] > *a6 )
      v18 = a6[2];
    a6[2] = v18;
    v19 = a6[1];
    if ( a6[3] > v19 )
      v19 = a6[3];
    a6[3] = v19;
  }
  if ( *a5 > *a6 )
    *a6 = *a5;
  v20 = a5[1];
  if ( v20 > a6[1] )
    a6[1] = v20;
  v21 = a5[2];
  if ( v21 < a6[2] )
    a6[2] = v21;
  v22 = a5[3];
  if ( v22 < a6[3] )
    a6[3] = v22;
  if ( a6[2] <= *a6 || a6[3] <= a6[1] )
  {
    a6[3] = 0;
    a6[2] = 0;
    a6[1] = 0;
    *a6 = 0;
  }
  if ( !v10 || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(a6, a5) )
    return 0;
  return v23;
}
