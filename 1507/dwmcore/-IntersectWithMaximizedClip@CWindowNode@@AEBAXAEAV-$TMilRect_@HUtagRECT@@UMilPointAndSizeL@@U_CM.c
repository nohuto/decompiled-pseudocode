/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800DC78C
 * Callers:
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x1800DC8AC (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x1800DCA98 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180104D20 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

char __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1, LONG *a2)
{
  LONG v4; // eax
  _DWORD *v5; // r9
  LONG v6; // edx
  LONG v7; // r8d
  LONG v8; // eax
  RECT rcSrc1; // [rsp+20h] [rbp-20h] BYREF

  LOBYTE(v4) = AreAllMarginsZero((const struct _MARGINS *)(a1 + 1156));
  if ( !(_BYTE)v4 )
  {
    v6 = *(_DWORD *)(a1 + 1164) + *(_DWORD *)(a1 + 892);
    v7 = *(_DWORD *)(a1 + 900) - *(_DWORD *)(a1 + 1168);
    v8 = *v5 + *(_DWORD *)(a1 + 888);
    rcSrc1.right = *(_DWORD *)(a1 + 896) - *(_DWORD *)(a1 + 1160);
    rcSrc1.top = v6;
    rcSrc1.bottom = v7;
    rcSrc1.left = v8;
    IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)(a1 + 952));
    v4 = EqualRect(&rcSrc1, (const RECT *)(a1 + 952));
    if ( !v4 )
    {
      OffsetRect(&rcSrc1, -*(_DWORD *)(a1 + 952), -*(_DWORD *)(a1 + 956));
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
