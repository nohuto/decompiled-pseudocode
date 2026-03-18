/*
 * XREFs of ACPIPccInitialize @ 0x1C007BAA4
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C0085D88 (ACPILoadProcessRSDT.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 *     AcpiTranslateAccessSize @ 0x1C0078B40 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitilizeSubspace @ 0x1C007BDD0 (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int128 *v1; // rdi
  unsigned __int64 v2; // r8
  unsigned int v3; // esi
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // r12
  char *PoolWithTag; // r15
  char *v9; // rbx
  __m128d v10; // xmm3
  __int64 v11; // xmm1_8
  __m128i v12; // xmm0
  unsigned __int64 v13; // r11
  unsigned int v14; // r10d
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+20h] [rbp-40h]
  _BYTE v20[24]; // [rsp+40h] [rbp-20h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h]

  v1 = (__int128 *)(a1 + 48);
  v2 = a1 + *(unsigned int *)(a1 + 4);
  v3 = 0;
  v5 = a1 + 48;
  if ( a1 + 50 <= v2 )
  {
    do
    {
      v6 = *(_BYTE *)(v5 + 1);
      if ( v6 < 2u )
        break;
      v5 += v6;
      if ( v5 > v2 )
        break;
      ++v3;
    }
    while ( v5 + 2 <= v2 );
    if ( v3 )
    {
      v7 = v3;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 528LL * v3, 0x4D706341u);
      if ( PoolWithTag )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        memset(PoolWithTag, 0, 528LL * v3);
        v9 = PoolWithTag + 82;
        do
        {
          if ( !*(_BYTE *)v1 && *((_BYTE *)v1 + 1) >= 0x3Eu )
          {
            v10 = (__m128d)v1[1];
            v11 = *((_QWORD *)v1 + 6);
            v19 = *v1;
            v12 = (__m128i)v1[2];
            *(_QWORD *)&v20[16] = v11;
            *(__m128i *)v20 = v12;
            *(_QWORD *)(v9 - 2) = *(_OWORD *)&_mm_unpackhi_pd(v10, v10);
            *(_DWORD *)(v9 + 6) = _mm_cvtsi128_si32(v12);
            v9[1] = AcpiTranslateAccessSize(v9[1], *(v9 - 1), *v9);
            *(_QWORD *)(v9 - 18) = *(_QWORD *)&v20[4];
            *(_QWORD *)(v9 - 26) = *(_QWORD *)&v20[12];
            *(_QWORD *)(v9 + 14) = *((_QWORD *)&v19 + 1);
            *(_DWORD *)(v9 - 78) = *(_DWORD *)&v20[20];
            *(_DWORD *)(v9 + 22) = _mm_cvtsi128_si32((__m128i)v10);
            *(_DWORD *)(v9 - 70) = v13;
            *(_DWORD *)(v9 - 74) = v14 / 0x3C;
            v22 = (v13 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart) >> 64;
            if ( is_mul_ok(v13, PerformanceFrequency.QuadPart) )
            {
              v15 = v13 * PerformanceFrequency.QuadPart / 0xF4240;
            }
            else
            {
              *(_QWORD *)(v9 + 94) = -1LL;
              v15 = *(unsigned int *)(v9 - 70) * (PerformanceFrequency.QuadPart / 1000000);
            }
            *(_QWORD *)(v9 + 94) = v15;
            *(_DWORD *)(v9 - 82) ^= (*(_DWORD *)(v9 - 82) ^ (2 * *(_DWORD *)(a1 + 36))) & 2;
            if ( (int)AcpiPccInitilizeSubspace(v9 - 82) >= 0 )
            {
              v16 = *(_QWORD *)(v9 - 50);
              *(_QWORD *)(v9 - 66) = v16 + 8;
              *(_DWORD *)(v9 - 58) = *(_DWORD *)(v9 + 22) - 8;
              *(_QWORD *)(v9 - 42) = v16 + 4;
              *(_QWORD *)(v9 - 34) = v16 + 6;
              *(_DWORD *)(v9 - 82) = *(_DWORD *)(v9 - 82) & 0xFFFFFFC3 | 8;
            }
          }
          v9 += 528;
          v1 = (__int128 *)((char *)v1 + *((unsigned __int8 *)v1 + 1));
          --v7;
        }
        while ( v7 );
        _InterlockedOr(v18, 0);
        AcpiPccSubspaces = (__int64)PoolWithTag;
        AcpiPccSubspaceCount = v3;
      }
    }
  }
  return 0LL;
}
