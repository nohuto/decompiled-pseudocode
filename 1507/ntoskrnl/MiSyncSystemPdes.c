/*
 * XREFs of MiSyncSystemPdes @ 0x14006AE38
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUpdateSystemPdes @ 0x140210604 (MiUpdateSystemPdes.c)
 */

void __fastcall MiSyncSystemPdes(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*(_DWORD *)(a1 + 772) & 0x800000) == 0 )
      break;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 772), 0xFF7FFFFF);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiUpdateSystemPdes(a1);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x800u);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
