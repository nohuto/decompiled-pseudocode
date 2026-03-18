/*
 * XREFs of AlpcpWalkConnectionList @ 0x14048286C
 * Callers:
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  volatile signed __int32 **v1; // rdi
  volatile signed __int32 *i; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi

  v1 = (volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != (volatile signed __int32 *)v1; i = *(volatile signed __int32 **)i )
  {
    v3 = KeAbPreAcquire((ULONG_PTR)(i - 10), 0LL, 0LL);
    v4 = v3;
    if ( _interlockedbittestandset64(i - 10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i - 5, v3, (ULONG_PTR)(i - 10));
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)i - 5);
    KeAbPostRelease((ULONG_PTR)(i - 10));
  }
}
