/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x1400F7BB4
 * Callers:
 *     AlpcpDeletePort @ 0x14040B5C8 (AlpcpDeletePort.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140472B2C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F86C0 (AlpcpDeferredFreeCompletionPacketLookaside.c)
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
