/*
 * XREFs of bCvtPts1 @ 0x14007822C
 * Callers:
 *     GreExcludeClipRect @ 0x1400406B0 (GreExcludeClipRect.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x14006E5A0 (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     GreDrawStream @ 0x140075C4C (GreDrawStream.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x140077378 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x140077804 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140077868 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400781A0 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400781D0 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400AC974 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     NtGdiPatBlt @ 0x1400ACCD0 (NtGdiPatBlt.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1400AE1E8 (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiSetPixel @ 0x1400B0250 (NtGdiSetPixel.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400BB534 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiGetPixel @ 0x1400BB9B0 (NtGdiGetPixel.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A85BC (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x1401A8A60 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1401B9860 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     NtGdiPtVisible @ 0x140229960 (NtGdiPtVisible.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int *v4; // rbx
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ecx
  int i; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  int v12; // r10d
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // r10d
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r11
  _DWORD *v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r11
  _DWORD *v29; // r11
  int v30; // [rsp+40h] [rbp+8h] BYREF
  int v31; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (int *)a2;
  LODWORD(a3) = 0;
  LODWORD(a2) = 0;
  v30 = 0;
  v5 = a1;
  v31 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        for ( ; v3; --v3 )
        {
          bFToL(a1, v4, 6LL);
          bFToL(v20, v22, v21);
          *v4 += *(_DWORD *)(v5 + 24);
          v4 += 2;
          *v23 += *(_DWORD *)(v5 + 28);
        }
        break;
      case 3:
        for ( ; v3; --v3 )
        {
          *v4 += *(_DWORD *)(a1 + 24);
          v4 += 2;
          *(v4 - 1) += *(_DWORD *)(a1 + 28);
        }
        break;
      case 8:
        for ( ; v3; --v3 )
        {
          bFToL(a1, &v30, 6LL);
          bFToL(v24, &v31, v25);
          a1 = (unsigned int)((((*(_DWORD *)(v5 + 24) + v30) >> 3) + 1) >> 1);
          *v4 = a1;
          v4[1] = (((v31 + *(_DWORD *)(v5 + 28)) >> 3) + 1) >> 1;
          v4 += 2;
        }
        break;
      case 9:
        for ( ; v3; --v3 )
        {
          v10 = (__m128i)COERCE_UNSIGNED_INT((float)*v4);
          v11 = (__m128i)COERCE_UNSIGNED_INT((float)v4[1]);
          *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * *(float *)a1;
          *(float *)v11.m128i_i32 = *(float *)v11.m128i_i32 * *(float *)(a1 + 12);
          v12 = _mm_cvtsi128_si32(v10);
          v13 = (unsigned __int8)(v12 >> 23);
          if ( v13 <= 0x9E )
          {
            v14 = v12 & 0x7FFFFFLL | 0x800000;
            v15 = v13 < 0x76 ? v14 >> (118 - (unsigned __int8)v13) : v14 << ((unsigned __int8)v13 - 118);
            a3 = (v15 + 0x80000000LL) >> 32;
            if ( v12 < 0 )
              LODWORD(a3) = -(int)a3;
          }
          v16 = _mm_cvtsi128_si32(v11);
          v17 = (unsigned __int8)(v16 >> 23);
          if ( v17 <= 0x9E )
          {
            v18 = v16 & 0x7FFFFFLL | 0x800000;
            v19 = v17 < 0x76 ? v18 >> (118 - (unsigned __int8)v17) : v18 << ((unsigned __int8)v17 - 118);
            a2 = (v19 + 0x80000000LL) >> 32;
            if ( v16 < 0 )
              LODWORD(a2) = -(int)a2;
          }
          *v4 = ((((int)a3 + *(_DWORD *)(a1 + 24)) >> 3) + 1) >> 1;
          v4[1] = ((((int)a2 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
          v4 += 2;
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        for ( i = ((v6 >> 3) + 1) >> 1; v3; --v3 )
        {
          *v4 += i;
          v4[1] += v7;
          v4 += 2;
        }
        break;
    }
  }
  else
  {
    for ( ; v3; --v3 )
    {
      bFToL(a1, v4, 6LL);
      bFToL(v26, v28, v27);
      *v4 += *(_DWORD *)(v5 + 24);
      v4 += 2;
      a1 = *(unsigned int *)(v5 + 28);
      *v29 += a1;
    }
  }
  return 1LL;
}
