/*
 * XREFs of ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00C5F38
 * Callers:
 *     ndisOidPostWolPatternList @ 0x1C0046510 (ndisOidPostWolPatternList.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisGetWakeUpPatternSize @ 0x1C0045AF0 (ndisGetWakeUpPatternSize.c)
 */

void __fastcall ndisXlateWakeUpPatternListToWolPatternList(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r12d
  unsigned int v4; // r9d
  SIZE_T v5; // rbp
  char *v6; // r14
  char *v7; // r10
  __m128i v8; // xmm0
  unsigned int WakeUpPatternSize; // eax
  int v10; // r11d
  __int64 v11; // r10
  size_t v12; // r8
  __m128i *PoolWithTag; // rax
  __m128i *v14; // r15
  char *v15; // r13
  __m128i *v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // xmm1_8
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __m128i v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v26 = v1;
  v4 = 0;
  v5 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v5 > *(_DWORD *)(v1 + 48) )
  {
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_(0x74u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    return;
  }
  if ( !(_DWORD)v5 )
    return;
  v6 = *(char **)(v1 + 40);
  *(_QWORD *)(v1 + 52) = 0LL;
  v7 = v6;
  if ( (unsigned int)v5 >= 0x18 )
  {
    do
    {
      v8 = *(__m128i *)v7;
      v25 = *((_QWORD *)v7 + 2);
      v24 = v8;
      WakeUpPatternSize = ndisGetWakeUpPatternSize((unsigned int *)&v24);
      v7 = (char *)(WakeUpPatternSize + v11);
    }
    while ( v10 - WakeUpPatternSize >= 0x18 );
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) < v4 )
  {
    *(_DWORD *)(v1 + 56) = v4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    v12 = v5;
LABEL_11:
    memset(v6, 0, v12);
    return;
  }
  PoolWithTag = (__m128i *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7877444Eu);
  v14 = PoolWithTag;
  v12 = v5;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_11;
  }
  memmove(PoolWithTag, v6, v5);
  memset(v6, 0, *(unsigned int *)(v1 + 48));
  v15 = v6;
  if ( (unsigned int)v5 >= 0x18 )
  {
    v16 = v14;
    do
    {
      v17 = *v16;
      v18 = v16[1].m128i_i64[0];
      v19 = v16->m128i_i64[0];
      *((_DWORD *)v15 + 2) = _mm_cvtsi128_si32(*v16);
      *((_DWORD *)v15 + 37) = HIDWORD(v19);
      v24 = v17;
      *((_DWORD *)v15 + 40) = 196;
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
      v25 = v18;
      *(_DWORD *)v15 = 12845440;
      *((_DWORD *)v15 + 3) = 1;
      *((_DWORD *)v15 + 41) = v20;
      *((_DWORD *)v15 + 42) = v20 + 196;
      *((_DWORD *)v15 + 43) = v18;
      memmove(v15 + 196, &v16[1].m128i_u64[1], v20);
      memmove(
        &v15[*((unsigned int *)v15 + 42)],
        &v16->m128i_i8[HIDWORD(_mm_srli_si128(v17, 8).m128i_u64[0])],
        *((unsigned int *)v15 + 43));
      v2 += (v20 + v18 + 203) & 0xFFFFFFF8;
      v21 = ndisGetWakeUpPatternSize((unsigned int *)&v24);
      v22 = v21;
      LODWORD(v5) = v5 - v21;
      v23 = 0LL;
      v16 = (__m128i *)((char *)v16 + v22);
      if ( (unsigned int)v5 >= 0x18 )
        v23 = v2;
      *((_DWORD *)v15 + 38) = v23;
      v15 = &v6[v23];
    }
    while ( (unsigned int)v5 >= 0x18 );
    v1 = v26;
  }
  *(_DWORD *)(v1 + 52) = v2;
  *(_DWORD *)(v1 + 56) = v2;
  ExFreePoolWithTag(v14, 0);
}
