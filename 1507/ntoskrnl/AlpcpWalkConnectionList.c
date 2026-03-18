/*
 * XREFs of AlpcpWalkConnectionList @ 0x1404A4F58
 * Callers:
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpWalkConnectionList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 *i; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rsi

  v4 = (volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v4; i != (volatile signed __int32 *)v4; i = *(volatile signed __int32 **)i )
  {
    v6 = KeAbPreAcquire((ULONG_PTR)(i - 10), 0LL, 0LL, a4);
    v8 = v6;
    if ( _interlockedbittestandset64(i - 10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)i - 5, v6, (ULONG_PTR)(i - 10), v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)i - 5);
    KeAbPostRelease((ULONG_PTR)(i - 10));
  }
}
