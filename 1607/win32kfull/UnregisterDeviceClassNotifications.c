/*
 * XREFs of UnregisterDeviceClassNotifications @ 0x1C01D6EEC
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterDeviceClassNotifications()
{
  PVOID v0; // rbx
  struct _FAST_MUTEX *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v6; // rax

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
    v6 = gCDROMNotifyList.Flink->Flink;
    if ( gCDROMNotifyList.Flink->Blink != &gCDROMNotifyList || v6->Blink != gCDROMNotifyList.Flink )
      __fastfail(3u);
    v1 = gMediaChangeMutex;
    gCDROMNotifyList.Flink = gCDROMNotifyList.Flink->Flink;
    v6->Blink = &gCDROMNotifyList;
    result = ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v1);
    if ( Flink == &gCDROMNotifyList )
      break;
    IoUnregisterPlugPlayNotification(Flink[1].Blink);
    Win32FreePool(Flink, v3, v4);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  }
  return result;
}
