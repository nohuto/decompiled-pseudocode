/*
 * XREFs of AlpcpWalkConnectionList @ 0x1404DC2D4
 * Callers:
 *     AlpcpDisconnectPort @ 0x140409FEC (AlpcpDisconnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  volatile signed __int32 **v1; // rdi
  volatile signed __int32 *i; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rsi

  v1 = (volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != (volatile signed __int32 *)v1; i = *(volatile signed __int32 **)i )
  {
    v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(i - 10), 0LL, 0);
    v4 = v3;
    if ( _interlockedbittestandset64(i - 10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i - 5, v3, (ULONG_PTR)(i - 10));
    if ( v4 )
      v4[26] |= 1u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)i - 5);
    KeAbPostRelease((ULONG_PTR)(i - 10));
  }
}
