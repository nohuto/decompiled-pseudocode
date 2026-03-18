/*
 * XREFs of CmpParseCacheRemoveHive @ 0x14049949C
 * Callers:
 *     CmpDestroyHive @ 0x140499400 (CmpDestroyHive.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpParseCacheRemoveHive(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rbx
  __int64 **v6; // rbx
  __int64 **i; // r8
  __int64 **v8; // r9
  __int64 **v9; // rcx
  __int64 **j; // rax
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rcx

  v2 = 0LL;
  v3 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v3, (ULONG_PTR)&CmpParseCacheLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = (__int64 **)(a1 + 2784);
  for ( i = *(__int64 ***)(a1 + 2784); i != v6; i = (__int64 **)*i )
  {
    v8 = i - 1;
    v9 = (__int64 **)(CmpParseCacheTable
                    + 8
                    + 8LL
                    * (((unsigned __int8)(-93 * (*((_BYTE *)i + 32) ^ (*((_DWORD *)i + 8) >> 9))) ^ (unsigned __int8)((unsigned int)(101027 * (*((_DWORD *)i + 8) ^ (*((_DWORD *)i + 8) >> 9))) >> 9)) & 0x1F));
    for ( j = (__int64 **)*v9; j; j = (__int64 **)*j )
    {
      if ( j == v8 )
      {
        *v9 = *v8;
        break;
      }
      v9 = j;
    }
  }
  _m_prefetchw(&CmpParseCacheLock);
  if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v11 = CmpParseCacheLock - 16;
  else
    v11 = 0LL;
  if ( (CmpParseCacheLock & 2) != 0
    || (v12 = CmpParseCacheLock,
        v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v11, CmpParseCacheLock)) )
  {
    ExfReleasePushLock(&CmpParseCacheLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
  while ( *v6 != (__int64 *)v6 )
  {
    v13 = *v6;
    v14 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v14 + 8) != v13 )
      __fastfail(3u);
    *v6 = (__int64 *)v14;
    *(_QWORD *)(v14 + 8) = v6;
    v15 = v13 - 1;
    if ( !v2 )
      v2 = v15[6];
    ExFreePoolWithTag(v15, 0x65504D43u);
  }
  if ( v2 )
    CmpDereferenceKeyControlBlock(v2);
  return 0LL;
}
