/*
 * XREFs of CmpParseCacheAddHive @ 0x1404EA29C
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpParseCacheAllocEntry @ 0x1404EA4A4 (CmpParseCacheAllocEntry.c)
 */

__int64 __fastcall CmpParseCacheAddHive(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __m128i v5; // xmm6
  unsigned __int16 v7; // r13
  char *v8; // rcx
  unsigned __int64 v9; // xmm6_8
  signed __int64 v10; // rbx
  _WORD *v11; // rdi
  _WORD *v12; // rdx
  char **v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  signed __int8 v23; // cf
  __int64 v24; // rdi
  _QWORD *j; // r10
  __int64 v26; // rcx
  ULONG_PTR v27; // rtt
  ULONG_PTR v29; // rtt
  __int64 **v30; // rbx
  __int64 *v31; // rcx
  __int64 v32; // rax
  _WORD v33[4]; // [rsp+20h] [rbp-58h] BYREF
  _WORD *v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  _WORD *i; // [rsp+88h] [rbp+10h]

  v5 = *(__m128i *)(a1 + 3024);
  CmpLockKcbShared((__int64)a2, (__int64)a2, a3, a4);
  v7 = _mm_cvtsi128_si32(v5);
  v8 = a2;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  v10 = 0LL;
  v11 = (_WORD *)(v9 + 2 * ((unsigned __int64)(v7 - 1) >> 1));
  v12 = v11;
  for ( i = v11; ; v12 = i )
  {
    while ( v9 < (unsigned __int64)v11 && *v11 != 92 )
      --v11;
    v33[1] = v7;
    v34 = v11 + 1;
    v13 = (char **)(v8 + 72);
    v33[0] = 2 * (v12 - v11);
    v14 = *((_QWORD *)v8 + 9);
    v15 = v14 ? *(unsigned int *)(v14 + 40) : 0xFFFFFFFFLL;
    v16 = ((__int64 (__fastcall *)(_WORD *, __int64, char *, __int64 *))CmpParseCacheAllocEntry)(v33, v15, a2, &v35);
    if ( v16 < 0 )
      break;
    v18 = *(_QWORD *)(a1 + 2784);
    v19 = v35 + 8;
    *(_QWORD *)(v35 + 8) = v18;
    *(_QWORD *)(v19 + 8) = a1 + 2784;
    if ( *(_QWORD *)(v18 + 8) != a1 + 2784 )
      __fastfail(3u);
    *(_QWORD *)(v18 + 8) = v19;
    --v11;
    *(_QWORD *)(a1 + 2784) = v19;
    v8 = *v13;
    if ( !*v13 )
      break;
  }
  v20 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL, v17);
  v23 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v24 = v20;
  if ( v23 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v20, (ULONG_PTR)&CmpParseCacheLock, v22);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  if ( v16 < 0 )
  {
    _m_prefetchw(&CmpParseCacheLock);
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v10 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 2) != 0
      || (v29 = CmpParseCacheLock,
          v29 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v10, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock, v21);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    v30 = (__int64 **)(a1 + 2784);
    while ( *v30 != (__int64 *)v30 )
    {
      v31 = *v30;
      v32 = **v30;
      if ( (__int64 **)(*v30)[1] != v30 || *(__int64 **)(v32 + 8) != v31 )
        __fastfail(3u);
      *v30 = (__int64 *)v32;
      *(_QWORD *)(v32 + 8) = v30;
      ExFreePoolWithTag(v31 - 1, 0x65504D43u);
    }
  }
  else
  {
    for ( j = *(_QWORD **)(a1 + 2784); j != (_QWORD *)(a1 + 2784); j = (_QWORD *)*j )
    {
      v21 = CmpParseCacheTable;
      v26 = ((unsigned __int8)(-93 * (*((_BYTE *)j + 32) ^ (*((_DWORD *)j + 8) >> 9))) ^ (unsigned __int8)((unsigned int)(101027 * (*((_DWORD *)j + 8) ^ (*((_DWORD *)j + 8) >> 9))) >> 9)) & 0x1F;
      *(j - 1) = *(_QWORD *)(CmpParseCacheTable + 8 * v26 + 8);
      *(_QWORD *)(v21 + 8 * v26 + 8) = j - 1;
    }
    _m_prefetchw(&CmpParseCacheLock);
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v10 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 2) != 0
      || (v27 = CmpParseCacheLock,
          v27 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v10, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock, v21);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    CmpReferenceKeyControlBlock((ULONG_PTR)a2);
  }
  CmpUnlockKcb(a2);
  return (unsigned int)v16;
}
