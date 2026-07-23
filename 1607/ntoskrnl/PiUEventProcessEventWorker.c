/*
 * XREFs of PiUEventProcessEventWorker @ 0x140489744
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140488F5C (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventDereferenceEventEntry @ 0x1404898C4 (PiUEventDereferenceEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140489978 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140489C70 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14048A778 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575F80 (PiUEventNotifyDeviceInstancePropertyChange.c)
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
      case 4:
        goto LABEL_9;
      case 2:
        v5 = PiUEventNotifyDeviceInterfaceChange(v3);
        break;
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
