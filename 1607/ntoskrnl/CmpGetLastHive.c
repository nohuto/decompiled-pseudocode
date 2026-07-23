/*
 * XREFs of CmpGetLastHive @ 0x1404BFFDC
 * Callers:
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 CmpGetLastHive()
{
  signed __int64 v0; // rbx
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  ULONG_PTR v7; // rtt

  v0 = 0LL;
  v1 = 0LL;
  v2 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v2, (ULONG_PTR)&CmpHiveListHeadLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  v3 = qword_140747E38;
  v4 = &CmpHiveListHead;
  while ( (__int64 *)v3 != v4 )
  {
    if ( CmpReferenceHive(v3 - 2728) )
    {
      v1 = v5;
      break;
    }
    v3 = *(_QWORD *)(v6 + 8);
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v7 = CmpHiveListHeadLock,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v0, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  return v1;
}
