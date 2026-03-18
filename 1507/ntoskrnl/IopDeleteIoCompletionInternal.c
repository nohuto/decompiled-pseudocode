/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1401127F4
 * Callers:
 *     IopDeleteIoCompletion @ 0x14052B618 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x14052B620 (IopCloseIoCompletion.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x140112874 (KeRundownQueueEx.c)
 *     IopFreeCompletionListPackets @ 0x14052B640 (IopFreeCompletionListPackets.c)
 */

void __fastcall IopDeleteIoCompletionInternal(__int64 a1, __int64 a2)
{
  char v2; // si
  char v4; // al
  __int64 v5; // rdi
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
  v5 = KeRundownQueueEx(a1, a2);
  if ( v2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
  {
    **(_QWORD **)(v5 + 8) = 0LL;
    IopFreeCompletionListPackets((PSLIST_ENTRY)v5);
  }
}
