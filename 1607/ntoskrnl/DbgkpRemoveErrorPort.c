/*
 * XREFs of DbgkpRemoveErrorPort @ 0x14061A2C4
 * Callers:
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     DbgkpDereferenceErrorPort @ 0x1401B7488 (DbgkpDereferenceErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(__int64 a1, volatile signed __int32 *a2)
{
  int v4; // r14d
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rsi

  if ( !_interlockedbittestandset(a2 + 1, 0) )
  {
    v4 = 0;
    --*(_WORD *)(a1 + 484);
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&DbgkpErrorPortLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&DbgkpErrorPortLock, v5, (ULONG_PTR)&DbgkpErrorPortLock);
    if ( v7 )
      v7[26] |= 1u;
    if ( (volatile signed __int32 *)DbgkpErrorPort == a2 )
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
      DbgkpDereferenceErrorPort(a2);
      KeResetEvent(DbgkErrorPortRegisteredEvent);
    }
  }
}
