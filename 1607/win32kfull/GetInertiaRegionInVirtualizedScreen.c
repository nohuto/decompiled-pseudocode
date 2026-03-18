/*
 * XREFs of GetInertiaRegionInVirtualizedScreen @ 0x1C022A0EC
 * Callers:
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C02200A0 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     D3DXVec4Transform @ 0x1C01DB42C (D3DXVec4Transform.c)
 */

__int64 __fastcall GetInertiaRegionInVirtualizedScreen(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // r9
  float *v10; // r8
  __m128i v11; // xmm1
  float v12; // xmm0_4
  int v13; // ecx
  int *v14; // r9
  __int64 v15; // r11
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 136);
  LODWORD(v3) = 1;
  if ( (v2 & 1) == 0 )
    return 0LL;
  if ( (v2 & 4) != 0 )
    v7 = a1 + 40;
  else
    v7 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(a1 + 120) + gSharedInfo[1])
       + 112LL;
  *a2 = *(_DWORD *)v7;
  a2[1] = *(_DWORD *)(v7 + 4);
  a2[2] = *(_DWORD *)(v7 + 8);
  a2[3] = *(_DWORD *)(v7 + 4);
  a2[4] = *(_DWORD *)(v7 + 8);
  a2[5] = *(_DWORD *)(v7 + 12);
  a2[6] = *(_DWORD *)v7;
  a2[7] = *(_DWORD *)(v7 + 12);
  if ( (*(_DWORD *)(a1 + 136) & 4) != 0 )
  {
    if ( (unsigned int)NlsNullProc((struct tagKE *)v7) )
    {
      v10 = (float *)(v8 + 56);
      do
      {
        v11 = _mm_cvtsi32_si128(v9[1]);
        v12 = (float)*v9;
        *((_QWORD *)&v16 + 1) = 0x3F8000003F800000LL;
        *(float *)&v16 = v12;
        DWORD1(v16) = _mm_cvtepi32_ps(v11).m128_u32[0];
        D3DXVec4Transform(&v16, (float *)&v16, v10);
        v13 = (int)*(float *)&v16;
        v14[1] = (int)*((float *)&v16 + 1);
        *v14 = v13;
        v9 = v14 + 2;
      }
      while ( v15 != v3 );
    }
    else
    {
      LODWORD(v3) = 0;
    }
  }
  return (unsigned int)v3;
}
