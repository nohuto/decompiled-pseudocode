/*
 * XREFs of MiSyncSystemPdes @ 0x14010164C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateSystemPdes @ 0x1401E0EC4 (MiUpdateSystemPdes.c)
 */

void __fastcall MiSyncSystemPdes(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
    if ( (*(_DWORD *)(a1 + 772) & 0x800000) == 0 )
      break;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 772), 0xFF7FFFFF);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiUpdateSystemPdes(a1);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x800u);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
