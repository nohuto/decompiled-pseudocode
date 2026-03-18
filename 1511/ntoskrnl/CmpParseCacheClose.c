/*
 * XREFs of CmpParseCacheClose @ 0x1405E465C
 * Callers:
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 CmpParseCacheClose()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rdi
  signed __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD **v5; // rsi
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  ULONG_PTR v8; // rtt

  v0 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v0, (ULONG_PTR)&CmpParseCacheLock);
  v3 = 0LL;
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v4 = 32LL;
  v5 = (_QWORD **)(CmpParseCacheTable + 8);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        ExFreePoolWithTag(v6, 0x65504D43u);
        v6 = v7;
      }
      while ( v7 );
    }
    ++v5;
    --v4;
  }
  while ( v4 );
  CmpParseCacheTable = 0LL;
  _m_prefetchw(&CmpParseCacheLock);
  if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = CmpParseCacheLock - 16;
  if ( (CmpParseCacheLock & 2) != 0
    || (v8 = CmpParseCacheLock,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v3, CmpParseCacheLock)) )
  {
    ExfReleasePushLock(&CmpParseCacheLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
  return 0LL;
}
