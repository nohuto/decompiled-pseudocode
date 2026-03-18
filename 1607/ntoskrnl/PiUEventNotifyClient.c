/*
 * XREFs of PiUEventNotifyClient @ 0x1403F0784
 * Callers:
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1403EF058 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1403EF800 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575A40 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1403EF44C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1403F0858 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventQueuePendingEvent @ 0x1403F08B0 (PiUEventQueuePendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1403F08EC (PiUEventReferenceEventEntry.c)
 */

__int64 __fastcall PiUEventNotifyClient(__int64 a1, __int64 a2)
{
  int v4; // edi
  char v5; // si
  _QWORD *PoolWithTag; // rsi

  v4 = 0;
  v5 = 0;
  ExAcquireFastMutex(*(PFAST_MUTEX *)(a2 + 16));
  if ( !*(_BYTE *)(a2 + 140) )
    goto LABEL_11;
  if ( *(_DWORD *)(a2 + 128)
    && *(unsigned int *)(a2 + 128)
     * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a2 + 112) + 16LL))
      / 10000LL) > 600000 )
  {
    ++*(_DWORD *)(a2 + 136);
LABEL_11:
    v5 = 1;
  }
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
        || (PiUEventDequeuePendingEventWorker(a2, *(__int64 **)(a2 + 112), 0),
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
