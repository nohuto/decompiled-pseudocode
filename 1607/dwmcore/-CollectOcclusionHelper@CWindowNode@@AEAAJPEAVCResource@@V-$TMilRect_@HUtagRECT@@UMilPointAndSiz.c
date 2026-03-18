/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180028358
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800116C0 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800265CC (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005C884 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        _DWORD *a1,
        __int64 a2,
        LONG *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned int v7; // ebx
  LONG v8; // ecx
  LONG v12; // eax
  bool v13; // cc
  __int64 v14; // r8
  signed __int64 v15; // rdi
  int v16; // eax
  int v18; // eax
  float v19[4]; // [rsp+30h] [rbp-58h] BYREF

  *a3 += a1[222];
  v7 = 0;
  v8 = *a3;
  a3[2] -= a1[223];
  a3[1] += a1[224];
  a3[3] -= a1[225];
  v12 = a3[1];
  if ( a3[2] > v8 )
    v8 = a3[2];
  v13 = a3[3] <= v12;
  a3[2] = v8;
  if ( !v13 )
    v12 = a3[3];
  a3[3] = v12;
  CWindowNode::IntersectWithMaximizedClip((__int64)a1, a3);
  v14 = 0LL;
  v15 = (char *)a3 - (char *)v19;
  do
  {
    v19[v14] = (float)*(int *)((char *)&v19[v14] + v15);
    ++v14;
  }
  while ( v14 < 4 );
  if ( a6 )
  {
    v16 = COcclusionContext::DrawImage(a4, a2, v19, (unsigned int)a1[226]);
    v7 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC5Au);
  }
  else if ( a5 )
  {
    v18 = COcclusionContext::DrawClippedImage(a4, a2, v19, a5, a1[226]);
    v7 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC61u);
  }
  return v7;
}
