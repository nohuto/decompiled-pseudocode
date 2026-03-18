/*
 * XREFs of CmpOKToFollowLink @ 0x1403DF0B0
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

char __fastcall CmpOKToFollowLink(_QWORD *a1, __int64 a2)
{
  signed __int64 v2; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *i; // rax
  _QWORD *v9; // rax
  ULONG_PTR v10; // rtt
  ULONG_PTR v11; // rtt

  v2 = 0LL;
  if ( !a1 || a1 == (_QWORD *)a2 )
    return 1;
  if ( (*(_DWORD *)(a2 + 5360) & 1) != 0 )
  {
    v6 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&CmpHiveListHeadLock, v6, (ULONG_PTR)&CmpHiveListHeadLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = (_QWORD *)(a2 + 5368);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)v9[671] )
    {
      v9 = i - 671;
      if ( v9 == a1 )
      {
        _m_prefetchw(&CmpHiveListHeadLock);
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v2 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v10 = CmpHiveListHeadLock,
              v10 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v2,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        return 1;
      }
    }
    _m_prefetchw(&CmpHiveListHeadLock);
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v2 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v11 = CmpHiveListHeadLock,
          v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v2, CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  }
  return 0;
}
