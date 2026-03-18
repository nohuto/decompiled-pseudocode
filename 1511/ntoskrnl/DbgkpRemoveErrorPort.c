/*
 * XREFs of DbgkpRemoveErrorPort @ 0x1405F0618
 * Callers:
 *     DbgkFlushErrorPort @ 0x1403E7698 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     DbgkpDeleteErrorPort @ 0x1405F05F4 (DbgkpDeleteErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(__int64 a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi

  if ( !_interlockedbittestandset((volatile signed __int32 *)(a2 + 4), 0) )
  {
    v4 = 0;
    --*(_WORD *)(a1 + 484);
    v5 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&DbgkpErrorPortLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&DbgkpErrorPortLock, v5, (ULONG_PTR)&DbgkpErrorPortLock);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( DbgkpErrorPort == a2 )
    {
      DbgkpErrorProcess = 0LL;
      DbgkpErrorPort = 0LL;
      v4 = 1;
      _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
    KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
    KeLeaveCriticalRegionThread(a1);
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        DbgkpDeleteErrorPort((HANDLE *)a2);
      KeResetEvent((PRKEVENT)DbgkErrorPortRegisteredEvent);
    }
  }
}
