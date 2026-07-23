/*
 * XREFs of MiSyncSystemPdes @ 0x1400FF3CC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateSystemPdes @ 0x1401E0CF0 (MiUpdateSystemPdes.c)
 */

void __fastcall MiSyncSystemPdes(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    if ( (*(_DWORD *)(a1 + 772) & 0x800000) == 0 )
      break;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 772), 0xFF7FFFFF);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiUpdateSystemPdes(a1);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x800u);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
