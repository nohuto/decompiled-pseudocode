/*
 * XREFs of xxxUnregisterDeviceClassNotifications @ 0x1C009F580
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 xxxUnregisterDeviceClassNotifications()
{
  PVOID v0; // rbx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v2; // rax
  struct _FAST_MUTEX *v3; // rcx
  __int64 result; // rax

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  v0 = gCDROMClassRegistrationEntry;
  if ( gCDROMClassRegistrationEntry )
  {
    gCDROMClassRegistrationEntry = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
    IoUnregisterPlugPlayNotification(v0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  }
  while ( 1 )
  {
    Flink = gCDROMNotifyList.Flink;
    v2 = gCDROMNotifyList.Flink->Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList || v2->Blink != gCDROMNotifyList.Flink )
      __fastfail(3u);
    v3 = gMediaChangeMutex;
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v2->Blink = &gCDROMNotifyList;
    result = ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
    if ( Flink == &gCDROMNotifyList )
      break;
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  }
  return result;
}
