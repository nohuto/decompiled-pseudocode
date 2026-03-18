/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x1800DCA98
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004418 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001FE18 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800DC78C (-IntersectWithMaximizedClip@CWindowNode@@AEBAXAEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        _DWORD *a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        LONG *a3,
        __int64 a4,
        CRegionShape *a5,
        char a6)
{
  unsigned int v7; // edi
  LONG v8; // ecx
  LONG v12; // eax
  bool v13; // cc
  float v14; // xmm1_4
  __m128i v15; // xmm0
  float v16; // xmm1_4
  int v17; // eax
  int v18; // eax
  float v20[4]; // [rsp+30h] [rbp-58h] BYREF

  *a3 += a1[282];
  v7 = 0;
  v8 = *a3;
  a3[2] -= a1[283];
  a3[1] += a1[284];
  a3[3] -= a1[285];
  v12 = a3[1];
  if ( a3[2] > v8 )
    v8 = a3[2];
  v13 = a3[3] <= v12;
  a3[2] = v8;
  if ( !v13 )
    v12 = a3[3];
  a3[3] = v12;
  CWindowNode::IntersectWithMaximizedClip((__int64)a1, a3);
  v14 = (float)a3[1];
  v20[0] = (float)*a3;
  v15 = _mm_cvtsi32_si128(a3[2]);
  v20[1] = v14;
  v16 = (float)a3[3];
  LODWORD(v20[2]) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v20[3] = v16;
  if ( a6 )
  {
    v17 = COcclusionContext::DrawImage(a4, a2, (__int64)v20, a1[286]);
    v7 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC5Du);
  }
  else if ( a5 )
  {
    v18 = COcclusionContext::DrawClippedImage(a4, (__int64)a2, v20, a5, a1[286]);
    v7 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC64u);
  }
  return v7;
}
