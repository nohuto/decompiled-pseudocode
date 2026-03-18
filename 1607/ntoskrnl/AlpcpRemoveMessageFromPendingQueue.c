/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x140409320
 * Callers:
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404B3C60 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DB9C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbp
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (_BYTE *)KeAbPreAcquire(v1 + 176, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 176), v3, v1 + 176);
  if ( v4 )
    v4[26] |= 1u;
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 176));
  result = KeAbPostRelease(v1 + 176);
  --*(_WORD *)(a1 - 30);
  return result;
}
