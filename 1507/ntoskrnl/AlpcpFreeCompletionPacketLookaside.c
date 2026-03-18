/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x14006BCD8
 * Callers:
 *     AlpcpDeletePort @ 0x1404A30E4 (AlpcpDeletePort.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14052CB7C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14006BD28 (AlpcpDeferredFreeCompletionPacketLookaside.c)
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
