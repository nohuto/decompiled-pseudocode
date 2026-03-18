/*
 * XREFs of ACPIPccInitialize @ 0x1C009CEE4
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00A6C1C (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AcpiTranslateAccessSize @ 0x1C009942C (AcpiTranslateAccessSize.c)
 *     AcpiPccInitilizeSubspace @ 0x1C009D21C (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int128 *v1; // rdi
  unsigned __int64 v2; // r8
  unsigned int v3; // esi
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // r12
  int v8; // edx
  char *PoolWithTag; // r15
  char *v10; // rbx
  __m128d v11; // xmm3
  __int64 v12; // xmm1_8
  __m128i v13; // xmm0
  unsigned __int64 v14; // r11
  unsigned int v15; // r10d
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v20; // [rsp+30h] [rbp-40h]
  _BYTE v21[24]; // [rsp+50h] [rbp-20h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+48h]

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
        v10 = PoolWithTag + 82;
        do
        {
          if ( !*(_BYTE *)v1 && *((_BYTE *)v1 + 1) >= 0x3Eu )
          {
            v11 = (__m128d)v1[1];
            v12 = *((_QWORD *)v1 + 6);
            v20 = *v1;
            v13 = (__m128i)v1[2];
            *(_QWORD *)&v21[16] = v12;
            *(__m128i *)v21 = v13;
            *(_QWORD *)(v10 - 2) = *(_OWORD *)&_mm_unpackhi_pd(v11, v11);
            *(_DWORD *)(v10 + 6) = _mm_cvtsi128_si32(v13);
            v10[1] = AcpiTranslateAccessSize(v10[1], *(v10 - 1), *v10);
            *(_QWORD *)(v10 - 18) = *(_QWORD *)&v21[4];
            *(_QWORD *)(v10 - 26) = *(_QWORD *)&v21[12];
            *(_QWORD *)(v10 + 14) = *((_QWORD *)&v20 + 1);
            *(_DWORD *)(v10 - 78) = *(_DWORD *)&v21[20];
            *(_DWORD *)(v10 + 22) = _mm_cvtsi128_si32((__m128i)v11);
            *(_DWORD *)(v10 - 70) = v14;
            *(_DWORD *)(v10 - 74) = v15 / 0x3C;
            v23 = (v14 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart) >> 64;
            if ( is_mul_ok(v14, PerformanceFrequency.QuadPart) )
            {
              v16 = v14 * PerformanceFrequency.QuadPart / 0xF4240;
            }
            else
            {
              *(_QWORD *)(v10 + 94) = -1LL;
              v16 = *(unsigned int *)(v10 - 70) * (PerformanceFrequency.QuadPart / 1000000);
            }
            *(_QWORD *)(v10 + 94) = v16;
            *(_DWORD *)(v10 - 82) ^= (*(_DWORD *)(v10 - 82) ^ (2 * *(_DWORD *)(a1 + 36))) & 2;
            if ( (int)AcpiPccInitilizeSubspace(v10 - 82) >= 0 )
            {
              v17 = *(_QWORD *)(v10 - 50);
              *(_QWORD *)(v10 - 66) = v17 + 8;
              *(_DWORD *)(v10 - 58) = *(_DWORD *)(v10 + 22) - 8;
              *(_QWORD *)(v10 - 42) = v17 + 4;
              *(_QWORD *)(v10 - 34) = v17 + 6;
              *(_DWORD *)(v10 - 82) = *(_DWORD *)(v10 - 82) & 0xFFFFFFC3 | 8;
            }
          }
          v10 += 528;
          v1 = (__int128 *)((char *)v1 + *((unsigned __int8 *)v1 + 1));
          --v7;
        }
        while ( v7 );
        _InterlockedOr(v19, 0);
        AcpiPccSubspaces = (__int64)PoolWithTag;
        AcpiPccSubspaceCount = v3;
      }
      else
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          21,
          11,
          (__int64)&WPP_9793c6fb28af356342f42366d28ad702_Traceguids);
      }
    }
  }
  return 0LL;
}
