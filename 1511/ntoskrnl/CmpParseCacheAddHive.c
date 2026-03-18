/*
 * XREFs of CmpParseCacheAddHive @ 0x1403BB0AC
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpParseCacheAllocEntry @ 0x1403BB2A0 (CmpParseCacheAllocEntry.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpParseCacheAddHive(__int64 a1, _QWORD *a2)
{
  __m128i v3; // xmm6
  unsigned __int16 v5; // r13
  _QWORD *v6; // rcx
  unsigned __int64 v7; // xmm6_8
  signed __int64 v8; // rbx
  _WORD *v9; // rdi
  _WORD *v10; // rdx
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  signed __int8 v18; // cf
  __int64 v19; // rdi
  _QWORD *j; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rtt
  ULONG_PTR v25; // rtt
  __int64 **v26; // rbx
  __int64 *v27; // rcx
  __int64 v28; // rax
  _WORD v29[4]; // [rsp+20h] [rbp-58h] BYREF
  _WORD *v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+80h] [rbp+8h] BYREF
  _WORD *i; // [rsp+88h] [rbp+10h]

  v3 = *(__m128i *)(a1 + 3024);
  CmpLockKcbShared(a2);
  v5 = _mm_cvtsi128_si32(v3);
  v6 = a2;
  v7 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v8 = 0LL;
  v9 = (_WORD *)(v7 + 2 * ((unsigned __int64)(v5 - 1) >> 1));
  v10 = v9;
  for ( i = v9; ; v10 = i )
  {
    while ( v7 < (unsigned __int64)v9 && *v9 != 92 )
      --v9;
    v29[1] = v5;
    v30 = v9 + 1;
    v11 = v6 + 9;
    v29[0] = 2 * (v10 - v9);
    v12 = v6[9];
    v13 = v12 ? *(unsigned int *)(v12 + 40) : 0xFFFFFFFFLL;
    v14 = ((__int64 (__fastcall *)(_WORD *, __int64, _QWORD *, __int64 *))CmpParseCacheAllocEntry)(v29, v13, a2, &v31);
    if ( v14 < 0 )
      break;
    v15 = *(_QWORD *)(a1 + 2784);
    v16 = v31 + 8;
    *(_QWORD *)(v31 + 8) = v15;
    *(_QWORD *)(v16 + 8) = a1 + 2784;
    if ( *(_QWORD *)(v15 + 8) != a1 + 2784 )
      __fastfail(3u);
    *(_QWORD *)(v15 + 8) = v16;
    --v9;
    *(_QWORD *)(a1 + 2784) = v16;
    v6 = (_QWORD *)*v11;
    if ( !*v11 )
      break;
  }
  v17 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL);
  v18 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v19 = v17;
  if ( v18 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v17, (ULONG_PTR)&CmpParseCacheLock);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  if ( v14 < 0 )
  {
    _m_prefetchw(&CmpParseCacheLock);
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v8 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 2) != 0
      || (v25 = CmpParseCacheLock,
          v25 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v8, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    v26 = (__int64 **)(a1 + 2784);
    while ( *v26 != (__int64 *)v26 )
    {
      v27 = *v26;
      v28 = **v26;
      if ( (__int64 **)(*v26)[1] != v26 || *(__int64 **)(v28 + 8) != v27 )
        __fastfail(3u);
      *v26 = (__int64 *)v28;
      *(_QWORD *)(v28 + 8) = v26;
      ExFreePoolWithTag(v27 - 1, 0x65504D43u);
    }
  }
  else
  {
    for ( j = *(_QWORD **)(a1 + 2784); j != (_QWORD *)(a1 + 2784); j = (_QWORD *)*j )
    {
      v21 = CmpParseCacheTable;
      v22 = ((unsigned __int8)(-93 * (*((_BYTE *)j + 32) ^ (*((_DWORD *)j + 8) >> 9))) ^ (unsigned __int8)((unsigned int)(101027 * (*((_DWORD *)j + 8) ^ (*((_DWORD *)j + 8) >> 9))) >> 9)) & 0x1F;
      *(j - 1) = *(_QWORD *)(CmpParseCacheTable + 8 * v22 + 8);
      *(_QWORD *)(v21 + 8 * v22 + 8) = j - 1;
    }
    _m_prefetchw(&CmpParseCacheLock);
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v8 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 2) != 0
      || (v23 = CmpParseCacheLock,
          v23 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v8, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    CmpReferenceKeyControlBlock((ULONG_PTR)a2);
  }
  CmpUnlockKcb(a2);
  return (unsigned int)v14;
}
