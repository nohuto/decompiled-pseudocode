/*
 * XREFs of ExpShutdownWorkerFactory @ 0x1400C5128
 * Callers:
 *     NtShutdownWorkerFactory @ 0x1400C501C (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x140487A64 (ExpCloseWorkerFactory.c)
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002E49C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x14002E4EC (KeDeregisterObjectNotification.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeCancelTimer2 @ 0x1400C5258 (KeCancelTimer2.c)
 *     IoSetIoCompletionEx @ 0x1400C6954 (IoSetIoCompletionEx.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(char *Object)
{
  PVOID *v2; // rsi
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
  v2 = (PVOID *)(Object + 72);
  v3 = 4LL;
  *((_DWORD *)Object + 36) = *((_DWORD *)Object + 36) & 0xFFFFFFF8 | 4;
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
  if ( (*((_DWORD *)Object + 36) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( KeDeregisterObjectNotification((volatile signed __int32 *)Object + 40, (__int64 *)Object + 37) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v5 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 29) = 0;
  *((_DWORD *)Object + 28) = 0;
  if ( !*(_DWORD *)(v5 + 28) || *(_BYTE *)(v5 + 32) )
    v4 = 0;
  else
    *(_BYTE *)(v5 + 32) = 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  result = KeCancelTimer2(Object + 160, 0LL);
  if ( v4 )
    return IoSetIoCompletionEx(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0,
             0,
             0,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL));
  return result;
}
