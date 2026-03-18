/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0171368
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C017079C (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int v3; // r14d
  void (__fastcall *v4)(_QWORD); // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 1596) )
  {
    KeWaitForSingleObject(DeviceExtension + 2992, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1096] )
    {
      DpiBrightnessCleanupAggregateEvents(a1, 0);
    }
    else
    {
      DpiBrightnessCleanupAggregateEvents(a1, 1);
      v4 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 402);
      if ( v4 )
      {
        v4(*((_QWORD *)DeviceExtension + 400));
        memset(DeviceExtension + 3192, 0, 0x58uLL);
      }
    }
    memset(DeviceExtension + 3192, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 2992), 0);
  }
  return 0LL;
}
