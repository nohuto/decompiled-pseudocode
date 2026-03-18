/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x140481CB4
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v3 = KeAbPreAcquire(v1 + 176, 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v3, v1 + 176);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 176));
  KeAbPostRelease(v1 + 176);
  --*(_WORD *)(a1 - 30);
}
