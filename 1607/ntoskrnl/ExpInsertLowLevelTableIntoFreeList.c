/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x1404AD1B4
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1404ACFE4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall ExpInsertLowLevelTableIntoFreeList(
        volatile signed __int32 *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        char a4)
{
  __m128i v6; // xmm2
  unsigned __int64 result; // rax
  unsigned int v8; // r8d
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r11
  __m128i v11; // xmm3
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  _BYTE *v14; // rax
  _BYTE *v15; // rsi

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v8 = 1;
    v9 = a2 + 3;
    v10 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v11 = _mm_cvtsi32_si128(4u);
    do
    {
      v12 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 0);
      v8 += 2;
      *(v9 - 1) = 0LL;
      v9[1] = v10;
      v13 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_add_epi32(v12, (__m128i)_xmm), (__m128i)_xmm), (__m128i)0LL),
                v11),
              v6);
      *v9 = v13.m128i_i64[0];
      v9 += 4;
      *(v9 - 2) = _mm_srli_si128(v13, 8).m128i_u64[0];
    }
    while ( v8 < 0xFF );
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)a3, 0LL, 0);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
      ExfAcquirePushLockExclusiveEx(a3, v14, (ULONG_PTR)a3);
    if ( v15 )
      v15[26] |= 1u;
    if ( a3[1] )
      *(_QWORD *)(a3[2] + 8) = a2 + 2;
    else
      a3[1] = (unsigned __int64)(a2 + 2);
    a3[2] = (unsigned __int64)(a2 + 510);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    return KeAbPostRelease((ULONG_PTR)a3);
  }
  return result;
}
