/*
 * XREFs of CmpGetNextHive @ 0x140447A6C
 * Callers:
 *     CmpUnblockHiveWrites @ 0x1404075C8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14040760C (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 */

__int64 *__fastcall CmpGetNextHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 **v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 *v10; // r8
  __int64 **v11; // r8
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt

  v4 = 0LL;
  v6 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v6 = (__int64 **)(a1 + 2728);
  v8 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v8, (ULONG_PTR)&CmpHiveListHeadLock, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = *v6;
  while ( v10 != &CmpHiveListHead )
  {
    v4 = v10 - 341;
    if ( CmpReferenceHive((__int64)(v10 - 341)) )
      break;
    v10 = *v11;
    v4 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v12 = CmpHiveListHeadLock - 16;
  else
    v12 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v13 = CmpHiveListHeadLock,
        v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v12, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( a1 )
    CmpDereferenceHive(a1);
  return v4;
}
