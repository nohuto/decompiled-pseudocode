/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01996E8
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C0198AD4 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  struct _KMUTANT *DeviceExtension; // rdi
  int v3; // r14d
  void (__fastcall *v4)(struct _KTHREAD *); // rax

  DeviceExtension = (struct _KMUTANT *)a1->DeviceExtension;
  if ( LOWORD(DeviceExtension[77].MutantListEntry.Blink) )
  {
    KeWaitForSingleObject(&DeviceExtension[74], Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && BYTE5(DeviceExtension[20].MutantListEntry.Flink) )
    {
      DpiBrightnessCleanupAggregateEvents(a1, 0);
    }
    else
    {
      DpiBrightnessCleanupAggregateEvents(a1, 1);
      v4 = *(void (__fastcall **)(struct _KTHREAD *))&DeviceExtension[78].Header.Lock;
      if ( v4 )
      {
        v4(DeviceExtension[77].OwnerThread);
        memset(&DeviceExtension[77].MutantListEntry.Blink, 0, 0x58uLL);
      }
    }
    memset(&DeviceExtension[77].MutantListEntry.Blink, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex(DeviceExtension + 74, 0);
  }
  return 0LL;
}
