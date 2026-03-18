/*
 * XREFs of ExpShutdownWorkerFactory @ 0x14002DA50
 * Callers:
 *     NtShutdownWorkerFactory @ 0x14012B508 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x14046FB88 (ExpCloseWorkerFactory.c)
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002DDCC (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x14002DE1C (KeDeregisterObjectNotification.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     IoSetIoCompletionEx @ 0x14012CB98 (IoSetIoCompletionEx.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(PKSPIN_LOCK *Object)
{
  PVOID *v2; // rsi
  __int64 v3; // rbp
  char v4; // di
  PKSPIN_LOCK v5; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(Object[2], &LockHandle);
  v2 = (PVOID *)(Object + 9);
  v3 = 4LL;
  *((_DWORD *)Object + 36) = (_DWORD)Object[18] & 0xFFFFFFF8 | 4;
  v4 = 1;
  do
  {
    if ( *v2 )
    {
      ObfDereferenceObjectWithTag(*v2, 0x746C6644u);
      *v2 = 0LL;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( ((_DWORD)Object[18] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( (unsigned __int8)KeDeregisterObjectNotification(Object + 20, Object + 37) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *((_BYTE *)Object[2] + 33) = 1;
  v5 = Object[2];
  *((_DWORD *)Object + 29) = 0;
  *((_DWORD *)Object + 28) = 0;
  if ( !*((_DWORD *)v5 + 7) || *((_BYTE *)v5 + 32) )
    v4 = 0;
  else
    *((_BYTE *)v5 + 32) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = KeCancelTimer2(Object + 20, 0LL);
  if ( v4 )
    return IoSetIoCompletionEx(Object[2][1], 0, 0, 0, 0LL, 0, Object[2][2]);
  return result;
}
