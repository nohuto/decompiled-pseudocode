/*
 * XREFs of CmpParseCacheRemoveHive @ 0x1404EE97C
 * Callers:
 *     CmpDestroyHive @ 0x1404EE8E0 (CmpDestroyHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpParseCacheRemoveHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  __int64 **v11; // rbx
  __int64 **i; // r8
  __int64 **v13; // r9
  __int64 **v14; // rcx
  __int64 **j; // rax
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rcx

  v5 = 0LL;
  v6 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v6, (ULONG_PTR)&CmpParseCacheLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = (__int64 **)(a1 + 2784);
  for ( i = *(__int64 ***)(a1 + 2784); i != v11; i = (__int64 **)*i )
  {
    v13 = i - 1;
    v7 = CmpParseCacheTable + 8;
    v14 = (__int64 **)(CmpParseCacheTable
                     + 8
                     + 8LL
                     * (((unsigned __int8)(-93 * (*((_BYTE *)i + 32) ^ (*((_DWORD *)i + 8) >> 9))) ^ (unsigned __int8)((unsigned int)(101027 * (*((_DWORD *)i + 8) ^ (*((_DWORD *)i + 8) >> 9))) >> 9)) & 0x1F));
    for ( j = (__int64 **)*v14; j; j = (__int64 **)*j )
    {
      if ( j == v13 )
      {
        *v14 = *v13;
        break;
      }
      v14 = j;
    }
  }
  _m_prefetchw(&CmpParseCacheLock);
  if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v16 = CmpParseCacheLock - 16;
  else
    v16 = 0LL;
  if ( (CmpParseCacheLock & 2) != 0
    || (v17 = CmpParseCacheLock,
        v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v16, CmpParseCacheLock)) )
  {
    ExfReleasePushLock(&CmpParseCacheLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
  while ( *v11 != (__int64 *)v11 )
  {
    v18 = *v11;
    v19 = **v11;
    if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v19 + 8) != v18 )
      __fastfail(3u);
    *v11 = (__int64 *)v19;
    *(_QWORD *)(v19 + 8) = v11;
    v20 = v18 - 1;
    if ( !v5 )
      v5 = v20[6];
    ExFreePoolWithTag(v20, 0x65504D43u);
  }
  if ( v5 )
    CmpDereferenceKeyControlBlock(v5);
  return 0LL;
}
