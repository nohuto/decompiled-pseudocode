/*
 * XREFs of PiUEventProcessEventWorker @ 0x1404E1828
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404BECFC (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404E1078 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventDereferenceEventEntry @ 0x1404E19A8 (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1404E1A5C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1404E2ACC (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14054CC98 (PiUEventNotifyDeviceInstancePropertyChange.c)
 */

void __fastcall PiUEventProcessEventWorker(void *a1)
{
  int v1; // edi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  do
  {
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v3 = PiUEventUsermodeEventQueue;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    v4 = *(_DWORD *)(v3 + 88);
    switch ( v4 )
    {
      case 3:
      case 1:
        v5 = PiUEventNotifyTargetDeviceChange(v3);
        break;
      case 2:
        v5 = PiUEventNotifyDeviceInterfaceChange(v3);
        break;
      case 4:
        goto LABEL_9;
      case 9:
        v5 = PiUEventNotifyDeviceInstancePropertyChange(v3);
        break;
      default:
        if ( v4 <= 9 || v4 > 11 )
        {
LABEL_12:
          PiUEventProcessBroadcastNotifications(v3);
          goto LABEL_13;
        }
LABEL_9:
        v5 = PiUEventNotifyDeviceInstanceChange(v3);
        break;
    }
    if ( v5 >= 0 )
      goto LABEL_12;
LABEL_13:
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v6 = *(_QWORD *)PiUEventUsermodeEventQueue;
    if ( *(__int64 **)(PiUEventUsermodeEventQueue + 8) != &PiUEventUsermodeEventQueue
      || *(_QWORD *)(v6 + 8) != PiUEventUsermodeEventQueue )
    {
      __fastfail(3u);
    }
    PiUEventUsermodeEventQueue = *(_QWORD *)PiUEventUsermodeEventQueue;
    *(_QWORD *)(v6 + 8) = &PiUEventUsermodeEventQueue;
    if ( (__int64 *)PiUEventUsermodeEventQueue == &PiUEventUsermodeEventQueue )
      v1 = 1;
    KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    PiUEventDereferenceEventEntry(v3);
  }
  while ( !v1 );
  ExFreePoolWithTag(a1, 0x59706E50u);
}
