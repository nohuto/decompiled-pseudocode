/*
 * XREFs of CmpParseCacheClose @ 0x14065B5A4
 * Callers:
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpParseCacheClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  signed __int64 v9; // rbx
  __int64 v10; // rbp
  _QWORD **v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // rdi
  ULONG_PTR v14; // rtt

  v4 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&CmpParseCacheLock, 0LL);
  v8 = v4;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&CmpParseCacheLock, v4, (ULONG_PTR)&CmpParseCacheLock, v6);
  v9 = 0LL;
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = 32LL;
  v11 = (_QWORD **)(CmpParseCacheTable + 8);
  do
  {
    v12 = *v11;
    if ( *v11 )
    {
      do
      {
        v13 = (_QWORD *)*v12;
        ExFreePoolWithTag(v12, 0x65504D43u);
        v12 = v13;
      }
      while ( v13 );
    }
    ++v11;
    --v10;
  }
  while ( v10 );
  CmpParseCacheTable = 0LL;
  _m_prefetchw(&CmpParseCacheLock);
  if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = CmpParseCacheLock - 16;
  if ( (CmpParseCacheLock & 2) != 0
    || (v14 = CmpParseCacheLock,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v9, CmpParseCacheLock)) )
  {
    ExfReleasePushLock(&CmpParseCacheLock, v5);
  }
  KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
  return 0LL;
}
