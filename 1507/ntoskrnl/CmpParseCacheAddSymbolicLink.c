/*
 * XREFs of CmpParseCacheAddSymbolicLink @ 0x1405BB434
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpParseCacheAllocEntry @ 0x1404EA4A4 (CmpParseCacheAllocEntry.c)
 */

__int64 __fastcall CmpParseCacheAddSymbolicLink(ULONG_PTR a1)
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
  ULONG_PTR v13; // rcx
  ULONG_PTR *v14; // r15
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  signed __int8 v24; // cf
  __int64 v25; // rbx
  _QWORD *v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  signed __int64 v30; // rcx
  ULONG_PTR v31; // rtt
  signed __int64 v33; // rcx
  ULONG_PTR v34; // rtt
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD v37[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v38; // [rsp+30h] [rbp-40h] BYREF
  __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h] BYREF
  __int64 v41; // [rsp+50h] [rbp-20h]
  ULONG_PTR v42; // [rsp+58h] [rbp-18h]

  v37[1] = v37;
  v37[0] = v37;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x606uLL, 0x39344D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v3 = &v40;
  v41 = *(_QWORD *)(a1 + 72);
  v4 = 3LL;
  v42 = a1;
  v5 = 92;
  v6 = 0;
  v40 = *(_QWORD *)(v41 + 72);
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
    WORD1(v38) = v11;
    *((_QWORD *)&v38 + 1) = v12 + 1;
    v14 = (ULONG_PTR *)(v13 + 72);
    LOWORD(v38) = 2 * (&PoolWithTag[(unsigned __int64)(v11 - 1) >> 1] - v12);
    v15 = *(_QWORD *)(v13 + 72);
    v16 = v15 ? *(_DWORD *)(v15 + 40) : -1;
    v18 = CmpParseCacheAllocEntry(&v38, v16, a1, &v39);
    if ( v18 < 0 )
      break;
    v19 = v37[0];
    v20 = (_QWORD *)(v39 + 8);
    *(_QWORD *)(v39 + 16) = v37;
    *v20 = v19;
    if ( *(_QWORD **)(v19 + 8) != v37 )
      __fastfail(3u);
    *(_QWORD *)(v19 + 8) = v20;
    --v12;
    v37[0] = v20;
    v13 = *v14;
    if ( !*v14 )
      break;
    v5 = 92;
  }
  v21 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL, v17);
  v24 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v25 = v21;
  if ( v24 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v21, (ULONG_PTR)&CmpParseCacheLock, v23);
  if ( v25 )
    *(_BYTE *)(v25 + 26) |= 1u;
  if ( v18 < 0 )
  {
    _m_prefetchw(&CmpParseCacheLock);
    v33 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( (CmpParseCacheLock & 2) != 0
      || (v34 = CmpParseCacheLock,
          v34 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v33, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock, v22);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    while ( 1 )
    {
      v35 = v37[0];
      if ( (_QWORD *)v37[0] == v37 )
        break;
      v36 = *(_QWORD *)v37[0];
      if ( *(_QWORD **)(v37[0] + 8LL) != v37 || *(_QWORD *)(v36 + 8) != v37[0] )
        __fastfail(3u);
      v37[0] = *(_QWORD *)v37[0];
      *(_QWORD *)(v36 + 8) = v37;
      ExFreePoolWithTag((PVOID)(v35 - 8), 0x65504D43u);
    }
  }
  else
  {
    v26 = (_QWORD *)v37[0];
    if ( (_QWORD *)v37[0] != v37 )
    {
      do
      {
        v22 = CmpParseCacheTable;
        v27 = ((unsigned __int8)(-93 * (*((_BYTE *)v26 + 32) ^ (*((_DWORD *)v26 + 8) >> 9))) ^ (unsigned __int8)((unsigned int)(101027 * (*((_DWORD *)v26 + 8) ^ (*((_DWORD *)v26 + 8) >> 9))) >> 9)) & 0x1F;
        *(v26 - 1) = *(_QWORD *)(CmpParseCacheTable + 8 * v27 + 8);
        *(_QWORD *)(v22 + 8 * v27 + 8) = v26 - 1;
        v26 = (_QWORD *)*v26;
      }
      while ( v26 != v37 );
      v26 = (_QWORD *)v37[0];
    }
    v28 = (_QWORD *)v26[1];
    v29 = (_QWORD *)v28[1];
    if ( (_QWORD *)*v28 != v26 || (_QWORD *)*v29 != v28 )
      __fastfail(3u);
    v26[1] = v29;
    *v29 = v26;
    _m_prefetchw(&CmpParseCacheLock);
    v30 = CmpParseCacheLock - 16;
    if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = 0LL;
    if ( (CmpParseCacheLock & 2) != 0
      || (v31 = CmpParseCacheLock,
          v31 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v30, CmpParseCacheLock)) )
    {
      ExfReleasePushLock(&CmpParseCacheLock, v22);
    }
    KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
    CmpReferenceKeyControlBlock(a1);
  }
  if ( v18 < 0 )
    ExFreePoolWithTag(PoolWithTag, 0x39344D43u);
  return (unsigned int)v18;
}
