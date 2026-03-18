/*
 * XREFs of AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140481CB4 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpInsertMessageLargeMessageQueue @ 0x140482E48 (AlpcpInsertMessageLargeMessageQueue.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1404833FC (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpReturnMessageOnInsufficientBuffer(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v5; // rbp

  v2 = (unsigned __int64 *)(a1 + 352);
  v5 = KeAbPreAcquire(a1 + 352, 0LL, 0LL);
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
LABEL_9:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return 3221225507LL;
  }
  if ( a2[2] )
  {
    AlpcpRemoveMessageFromPendingQueue((__int64)a2);
LABEL_8:
    ++*((_WORD *)a2 - 15);
    AlpcpInsertMessageLargeMessageQueue(a1, a2);
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
    goto LABEL_8;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return 3221227264LL;
}
