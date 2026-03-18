/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x1403E3198
 * Callers:
 *     ExpAllocateHandleTable @ 0x1403E308C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall ExpInsertLowLevelTableIntoFreeList(
        volatile signed __int32 *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        char a4)
{
  __m128i v6; // xmm2
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r11
  __m128i v10; // xmm3
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rsi

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v7 = 1;
    v8 = a2 + 3;
    v9 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v10 = _mm_cvtsi32_si128(4u);
    do
    {
      v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v7), 0);
      v7 += 2;
      *(v8 - 1) = 0LL;
      v8[1] = v9;
      v12 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_add_epi32(v11, (__m128i)_xmm), (__m128i)_xmm), (__m128i)0LL),
                v10),
              v6);
      *v8 = v12.m128i_i64[0];
      v8 += 4;
      *(v8 - 2) = _mm_srli_si128(v12, 8).m128i_u64[0];
    }
    while ( v7 < 0xFF );
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  _InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    v13 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v13, (ULONG_PTR)a3);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    if ( a3[1] )
      *(_QWORD *)(a3[2] + 8) = a2 + 2;
    else
      a3[1] = (unsigned __int64)(a2 + 2);
    a3[2] = (unsigned __int64)(a2 + 510);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    KeAbPostRelease((ULONG_PTR)a3);
  }
}
