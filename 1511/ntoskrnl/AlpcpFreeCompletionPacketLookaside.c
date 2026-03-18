/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x1400C4EF8
 * Callers:
 *     AlpcpAssociateIoCompletionPort @ 0x14044FDB4 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpDeletePort @ 0x14047E7D8 (AlpcpDeletePort.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400C4F48 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 */

void __fastcall AlpcpFreeCompletionPacketLookaside(__int64 a1)
{
  int v2; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1, &LockHandle);
  if ( *(_DWORD *)(a1 + 12) )
  {
    v2 = 0;
    *(_DWORD *)(a1 + 24) = 1;
  }
  else
  {
    v2 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
    AlpcpDeferredFreeCompletionPacketLookaside(a1);
}
