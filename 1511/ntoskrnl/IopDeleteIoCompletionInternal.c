/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1400DF4A0
 * Callers:
 *     IopDeleteIoCompletion @ 0x1404A3268 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x1404A3270 (IopCloseIoCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x1400DF520 (KeRundownQueueEx.c)
 *     IopFreeCompletionListPackets @ 0x1404A3290 (IopFreeCompletionListPackets.c)
 */

void __fastcall IopDeleteIoCompletionInternal(__int64 a1, __int64 a2)
{
  char v2; // si
  char v4; // al
  _QWORD **v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
    *(_BYTE *)(a1 + 72) = 1;
    v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  LOBYTE(a2) = v4;
  v5 = (_QWORD **)KeRundownQueueEx(a1, a2);
  if ( v2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
  {
    *v5[1] = 0LL;
    IopFreeCompletionListPackets(v5);
  }
}
