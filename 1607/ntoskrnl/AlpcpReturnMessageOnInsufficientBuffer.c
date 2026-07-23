/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x1404BEFCC
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404081E0 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x1404BF0D8 (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1404C263C (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v5; // rbp

  v2 = (unsigned __int64 *)(a1 + 352);
  v5 = KeAbPreAcquire(a1 + 352, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, v5, (ULONG_PTR)v2);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( a2[8] == a1 )
  {
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      a2[8] = 0LL;
      a2[7] = 0LL;
    }
    else
    {
      ++*((_WORD *)a2 - 15);
      AlpcpInsertMessageCanceledQueue(a1, a2);
    }
LABEL_16:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return 3221225507LL;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
  {
    if ( a2[2] )
      AlpcpRemoveMessageFromPendingQueue((__int64)a2);
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_16;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return 3221227264LL;
}
