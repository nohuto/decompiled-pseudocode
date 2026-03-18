/*
 * XREFs of CmpOKToFollowLink @ 0x140448C8C
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

char __fastcall CmpOKToFollowLink(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r9
  _QWORD *v11; // rsi
  _QWORD *i; // rax
  _QWORD *v13; // rax
  ULONG_PTR v14; // rtt
  ULONG_PTR v15; // rtt

  v4 = 0LL;
  if ( !a1 || a1 == (_QWORD *)a2 )
    return 1;
  if ( (*(_DWORD *)(a2 + 5360) & 1) != 0 )
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v9, (ULONG_PTR)&CmpHiveListHeadLock, v10);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v11 = (_QWORD *)(a2 + 5368);
    for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)v13[671] )
    {
      v13 = i - 671;
      if ( v13 == a1 )
      {
        _m_prefetchw(&CmpHiveListHeadLock);
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v4 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v14 = CmpHiveListHeadLock,
              v14 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v4,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v8);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        return 1;
      }
    }
    _m_prefetchw(&CmpHiveListHeadLock);
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v15 = CmpHiveListHeadLock,
          v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v4, CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock, v8);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  }
  return 0;
}
