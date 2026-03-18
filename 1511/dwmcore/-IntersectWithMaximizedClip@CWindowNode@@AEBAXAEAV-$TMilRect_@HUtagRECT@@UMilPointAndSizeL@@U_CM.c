/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18005ED2C
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180061690 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800F73A8 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800B4DE4 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

char __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1, LONG *a2)
{
  LONG v4; // eax
  _DWORD *v5; // r9
  LONG v6; // edx
  LONG v7; // r8d
  LONG v8; // eax
  RECT rcSrc1; // [rsp+20h] [rbp-20h] BYREF

  LOBYTE(v4) = AreAllMarginsZero((const struct _MARGINS *)(a1 + 1108));
  if ( !(_BYTE)v4 )
  {
    v6 = *(_DWORD *)(a1 + 1116) + *(_DWORD *)(a1 + 844);
    v7 = *(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 1120);
    v8 = *v5 + *(_DWORD *)(a1 + 840);
    rcSrc1.right = *(_DWORD *)(a1 + 848) - *(_DWORD *)(a1 + 1112);
    rcSrc1.top = v6;
    rcSrc1.bottom = v7;
    rcSrc1.left = v8;
    IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)(a1 + 904));
    v4 = EqualRect(&rcSrc1, (const RECT *)(a1 + 904));
    if ( !v4 )
    {
      OffsetRect(&rcSrc1, -*(_DWORD *)(a1 + 904), -*(_DWORD *)(a1 + 908));
      if ( rcSrc1.left > *a2 )
        *a2 = rcSrc1.left;
      if ( rcSrc1.top > a2[1] )
        a2[1] = rcSrc1.top;
      if ( rcSrc1.right < a2[2] )
        a2[2] = rcSrc1.right;
      if ( rcSrc1.bottom < a2[3] )
        a2[3] = rcSrc1.bottom;
      v4 = *a2;
      if ( a2[2] <= *a2 || (v4 = a2[1], a2[3] <= v4) )
      {
        a2[3] = 0;
        a2[2] = 0;
        a2[1] = 0;
        *a2 = 0;
      }
    }
  }
  return v4;
}
