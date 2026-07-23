/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x1800040E8
 * Callers:
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180004FE0 (RtlQueryResourcePolicy.c)
 *     RtlInitializeSListHead @ 0x1800663A0 (RtlInitializeSListHead.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextInitialize(unsigned __int64 a1, __int64 a2, char a3, __int128 *a4)
{
  __m128i v8; // xmm6
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int64 v12; // rdi
  __m128i *v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rax
  _SLIST_HEADER *v16; // rdi
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v8 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  memset((void *)a1, 0, 0x4D0uLL);
  v9 = *a4;
  *(_QWORD *)a1 = a2;
  v10 = 2LL;
  v11 = a4[1];
  v12 = RtlpHeapKey;
  v13 = (__m128i *)(a1 + 8);
  *(_OWORD *)(a1 + 8) = v9;
  *(_QWORD *)&v9 = *((_QWORD *)a4 + 4);
  *(_OWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 40) = v9;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  do
  {
    *v13 = _mm_xor_si128(_mm_xor_si128(_mm_loadu_si128(v13), v14), v8);
    ++v13;
    --v10;
  }
  while ( v10 );
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 )
    *(_QWORD *)(a1 + 40) = a1 ^ v12 ^ v15;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v20, 4LL) >= 0 && v20 <= 10 )
    a3 = 1;
  v16 = (_SLIST_HEADER *)(a1 + 80);
  v17 = 7LL;
  do
  {
    RtlInitializeSListHead(v16++);
    --v17;
  }
  while ( v17 );
  v18 = a3;
  if ( (unsigned __int8)a3 > 0x40u )
    v18 = 64;
  *(_BYTE *)(a1 + 56) = v18;
  if ( v18 > 1u )
    *(_QWORD *)(a1 + 64) = (char *)&unk_180100A70
                         + ((unsigned __int64)((62 - (64 - v18)) * (64 - (unsigned int)v18 + 61)) >> 1);
  memset64((void *)(a1 + 192), 1uLL, 0x81uLL);
  return RtlpInitializeLfhRandomDataArray();
}
