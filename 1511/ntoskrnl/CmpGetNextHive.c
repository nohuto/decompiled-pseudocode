/*
 * XREFs of CmpGetNextHive @ 0x1403DC94C
 * Callers:
 *     CmpUnblockHiveWrites @ 0x1403BC51C (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1403DC244 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 */

__int64 *__fastcall CmpGetNextHive(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 **v3; // r14
  __int64 v4; // rdi
  __int64 *v5; // r8
  __int64 **v6; // r8
  signed __int64 v7; // rcx
  ULONG_PTR v8; // rtt

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 **)(a1 + 2728);
  v4 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v4, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = *v3;
  while ( v5 != &CmpHiveListHead )
  {
    v1 = v5 - 341;
    if ( CmpReferenceHive((__int64)(v5 - 341)) )
      break;
    v5 = *v6;
    v1 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = CmpHiveListHeadLock - 16;
  else
    v7 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v8 = CmpHiveListHeadLock,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v7, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( a1 )
    CmpDereferenceHive(a1);
  return v1;
}
