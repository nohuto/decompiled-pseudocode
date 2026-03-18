/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x140523E50
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall ExpInsertLowLevelTableIntoFreeList(
        volatile signed __int32 *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __m128i v6; // xmm2
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r11
  __m128i v10; // xmm3
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rsi

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( (_BYTE)a4 )
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
  if ( (_BYTE)a4 )
  {
    v13 = KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0LL, a4);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v13, (ULONG_PTR)a3, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
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
