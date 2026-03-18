/*
 * XREFs of CmpParseCacheAddSymbolicLink @ 0x14054488C
 * Callers:
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpParseCacheAllocEntry @ 0x1403BB2A0 (CmpParseCacheAllocEntry.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpParseCacheAddSymbolicLink(__int64 a1)
{
  _WORD *PoolWithTag; // rsi
  __int64 *v3; // r14
  __int64 v4; // r15
  __int16 v5; // r11
  unsigned __int16 v6; // di
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int16 v9; // di
  __int64 v10; // rax
  unsigned __int16 v11; // di
  _WORD *v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // r15
  __int64 v15; // rax
  int v16; // edx
  int v17; // r14d
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  signed __int8 v21; // cf
  __int64 v22; // rbx
  _QWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  signed __int64 v28; // rcx
  ULONG_PTR v29; // rtt
  signed __int64 v31; // rcx
  ULONG_PTR v32; // rtt
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD v35[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v36; // [rsp+30h] [rbp-40h] BYREF
  __int64 v37; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+48h] [rbp-28h] BYREF
  __int64 v39; // [rsp+50h] [rbp-20h]
  __int64 v40; // [rsp+58h] [rbp-18h]

  v35[1] = v35;
  v35[0] = v35;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x606uLL, 0x39344D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v3 = &v38;
  v39 = *(_QWORD *)(a1 + 72);
  v4 = 3LL;
  v40 = a1;
  v5 = 92;
  v6 = 0;
  v38 = *(_QWORD *)(v39 + 72);
  do
  {
    v7 = *v3;
    v8 = v6;
    v9 = v6 + 1;
    PoolWithTag[v8] = v5;
    if ( (*(_BYTE *)(v7 + 186) & 0x20) != 0 )
    {
      CmpCopyCompressedName(
        &PoolWithTag[v9],
        0x200u,
        (unsigned __int8 *)(*(_QWORD *)(v7 + 80) + 26LL),
        *(unsigned __int16 *)(*(_QWORD *)(v7 + 80) + 24LL));
      v6 = *(_WORD *)(*(_QWORD *)(v7 + 80) + 24LL) + v9;
    }
    else
    {
      memmove(
        PoolWithTag,
        (const void *)(*(_QWORD *)(v7 + 80) + 26LL),
        *(unsigned __int16 *)(*(_QWORD *)(v7 + 80) + 24LL));
      v5 = 92;
      v6 = (*(_WORD *)(*(_QWORD *)(v7 + 80) + 24LL) >> 1) + v9;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  v10 = v6;
  v11 = 2 * v6;
  PoolWithTag[v10] = 0;
  v12 = &PoolWithTag[(unsigned __int64)(v11 - 1) >> 1];
  v13 = a1;
  while ( 1 )
  {
    while ( PoolWithTag < v12 && *v12 != v5 )
      --v12;
    WORD1(v36) = v11;
    *((_QWORD *)&v36 + 1) = v12 + 1;
    v14 = (__int64 *)(v13 + 72);
    LOWORD(v36) = 2 * (&PoolWithTag[(unsigned __int64)(v11 - 1) >> 1] - v12);
    v15 = *(_QWORD *)(v13 + 72);
    v16 = v15 ? *(_DWORD *)(v15 + 40) : -1;
    v17 = CmpParseCacheAllocEntry(&v36, v16, a1, &v37);
    if ( v17 < 0 )
      break;
    v18 = v35[0];
    v19 = (_QWORD *)(v37 + 8);
    *(_QWORD *)(v37 + 16) = v35;
    *v19 = v18;
    if ( *(_QWORD **)(v18 + 8) != v35 )
      __fastfail(3u);
    *(_QWORD *)(v18 + 8) = v19;
    --v12;
    v35[0] = v19;
    v13 = *v14;
    if ( !*v14 )
      break;
    v5 = 92;
  }
  v20 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL);
  v21 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v22 = v20;
  if ( v21 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v20, (ULONG_PTR)&CmpParseCacheLock);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  if ( v17 < 0 )
  {
    _m_prefetchw(&CmpParseCacheLock);
    v31 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (CmpParseCacheLock & 2) != 0
      || (v32 = CmpParseCacheLock,
          v32 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v31, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    while ( 1 )
    {
      v33 = v35[0];
      if ( (_QWORD *)v35[0] == v35 )
        break;
      v34 = *(_QWORD *)v35[0];
      if ( *(_QWORD **)(v35[0] + 8LL) != v35 || *(_QWORD *)(v34 + 8) != v35[0] )
        __fastfail(3u);
      v35[0] = *(_QWORD *)v35[0];
      *(_QWORD *)(v34 + 8) = v35;
      ExFreePoolWithTag((PVOID)(v33 - 8), 0x65504D43u);
    }
  }
  else
  {
    v23 = (_QWORD *)v35[0];
    if ( (_QWORD *)v35[0] != v35 )
    {
      do
      {
        v24 = CmpParseCacheTable;
        v25 = ((unsigned __int8)(-93 * (*((_BYTE *)v23 + 32) ^ (*((_DWORD *)v23 + 8) >> 9))) ^ (unsigned __int8)((unsigned int)(101027 * (*((_DWORD *)v23 + 8) ^ (*((_DWORD *)v23 + 8) >> 9))) >> 9)) & 0x1F;
        *(v23 - 1) = *(_QWORD *)(CmpParseCacheTable + 8 * v25 + 8);
        *(_QWORD *)(v24 + 8 * v25 + 8) = v23 - 1;
        v23 = (_QWORD *)*v23;
      }
      while ( v23 != v35 );
      v23 = (_QWORD *)v35[0];
    }
    v26 = (_QWORD *)v23[1];
    v27 = (_QWORD *)v26[1];
    if ( (_QWORD *)*v26 != v23 || (_QWORD *)*v27 != v26 )
      __fastfail(3u);
    v23[1] = v27;
    *v27 = v23;
    _m_prefetchw(&CmpParseCacheLock);
    v28 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v28 = 0LL;
    if ( (CmpParseCacheLock & 2) != 0
      || (v29 = CmpParseCacheLock,
          v29 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v28, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    CmpReferenceKeyControlBlock((signed __int32 *)a1);
  }
  if ( v17 < 0 )
    ExFreePoolWithTag(PoolWithTag, 0x39344D43u);
  return (unsigned int)v17;
}
