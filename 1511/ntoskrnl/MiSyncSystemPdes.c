/*
 * XREFs of MiSyncSystemPdes @ 0x1400187F4
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateSystemPdes @ 0x1401D0868 (MiUpdateSystemPdes.c)
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
