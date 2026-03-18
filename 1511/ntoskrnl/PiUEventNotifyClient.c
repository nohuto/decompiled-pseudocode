/*
 * XREFs of PiUEventNotifyClient @ 0x1404E12F8
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404BECFC (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404E1078 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1404E2ACC (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14054CC98 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404E13D0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x1404E1428 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1404E1464 (PiUEventReferenceEventEntry.c)
 *     PiUEventIsClientStuck @ 0x1404E1498 (PiUEventIsClientStuck.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1404E1958 (PiUEventDequeuePendingEventWorker.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  _QWORD *PoolWithTag; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( *(_BYTE *)(a2 + 140) )
  {
    if ( !(unsigned __int8)PiUEventIsClientStuck(a2) )
      goto LABEL_3;
    ++*(_DWORD *)(a2 + 136);
  }
  v5 = 1;
LABEL_3:
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
  if ( !v5 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PiUEventReferenceEventEntry(a1);
      PoolWithTag[3] = a1;
      ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
      v4 = PiUEventQueuePendingEvent(a2, PoolWithTag);
      if ( v4 >= 0
        || (PiUEventDequeuePendingEventWorker(a2, *(_QWORD *)(a2 + 112), 0LL),
            ++*(_DWORD *)(a2 + 136),
            v4 = PiUEventQueuePendingEvent(a2, PoolWithTag),
            v4 >= 0) )
      {
        PoolWithTag[2] = MEMORY[0xFFFFF78000000014];
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
        PiUEventNotifyClientPendingEvent(a2);
      }
      else
      {
        ++*(_DWORD *)(a2 + 136);
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a2 + 16));
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
