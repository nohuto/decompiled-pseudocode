/*
 * XREFs of CmpGetLastHive @ 0x140548294
 * Callers:
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpGetLastHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG_PTR v13; // rtt

  v4 = 0LL;
  v5 = 0LL;
  v7 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v7, (ULONG_PTR)&CmpHiveListHeadLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = qword_14077ED20;
  v10 = &CmpHiveListHead;
  while ( (__int64 *)v9 != v10 )
  {
    if ( CmpReferenceHive(v9 - 2728) )
    {
      v5 = v11;
      break;
    }
    v9 = *(_QWORD *)(v12 + 8);
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v13 = CmpHiveListHeadLock,
        v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v4, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock, v6);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  return v5;
}
