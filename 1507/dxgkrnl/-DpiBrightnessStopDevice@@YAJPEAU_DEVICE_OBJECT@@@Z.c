/*
 * XREFs of ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016CB58
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C0168634 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C016BF8C (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall DpiBrightnessStopDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int v3; // r14d
  void (__fastcall *v4)(_QWORD); // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( *((_WORD *)DeviceExtension + 1564) )
  {
    KeWaitForSingleObject(DeviceExtension + 2928, Executive, 0, 0, 0LL);
    v3 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( v3 < 0 && DeviceExtension[1063] )
    {
      DpiBrightnessCleanupAggregateEvents(a1, 0);
    }
    else
    {
      DpiBrightnessCleanupAggregateEvents(a1, 1);
      v4 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 394);
      if ( v4 )
      {
        v4(*((_QWORD *)DeviceExtension + 392));
        memset(DeviceExtension + 3128, 0, 0x58uLL);
      }
    }
    memset(DeviceExtension + 3128, 0, 0x58uLL);
    if ( v3 >= 0 )
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 2928), 0);
  }
  return 0LL;
}
