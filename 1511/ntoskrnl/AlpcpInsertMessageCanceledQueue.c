/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x1404833FC
 * Callers:
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = (unsigned __int64 *)(a1 + 136);
  v5 = KeAbPreAcquire(a1 + 136, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a2 + 80) = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2 + 80;
  *(_QWORD *)(a1 + 392) = a2 + 80;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
}
