/*
 * XREFs of GetInertiaRegionInVirtualizedScreen @ 0x1C02399AC
 * Callers:
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C0229E48 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     D3DXVec4Transform @ 0x1C01E4B88 (D3DXVec4Transform.c)
 */

__int64 __fastcall GetInertiaRegionInVirtualizedScreen(__int64 a1, int *a2)
{
  int v2; // eax
  int *v6; // rcx
  float *v7; // r8
  __m128i v8; // xmm1
  float v9; // xmm0_4
  _DWORD *v10; // r9
  __int64 v11; // r10
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 136);
  if ( (v2 & 1) == 0 )
    return 0LL;
  if ( (v2 & 4) != 0 )
    v6 = (int *)(a1 + 40);
  else
    v6 = (int *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(a1 + 120)
                           + gSharedInfo[1])
               + 112LL);
  *a2 = *v6;
  a2[1] = v6[1];
  a2[2] = v6[2];
  a2[3] = v6[1];
  a2[4] = v6[2];
  a2[5] = v6[3];
  a2[6] = *v6;
  a2[7] = v6[3];
  if ( (*(_DWORD *)(a1 + 136) & 4) != 0 )
  {
    v7 = (float *)(a1 + 56);
    do
    {
      v8 = _mm_cvtsi32_si128(a2[1]);
      v9 = (float)*a2;
      *((_QWORD *)&v12 + 1) = 0x3F8000003F800000LL;
      *(float *)&v12 = v9;
      DWORD1(v12) = _mm_cvtepi32_ps(v8).m128_u32[0];
      D3DXVec4Transform(&v12, (float *)&v12, v7);
      *v10 = (int)*(float *)&v12;
      a2 = v10 + 2;
      *(a2 - 1) = (int)*((float *)&v12 + 1);
    }
    while ( v11 != 1 );
  }
  return 1LL;
}
