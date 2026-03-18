/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C016C8FC
 * Callers:
 *     DxgkNotifyMonitorDimming @ 0x1C012ABC0 (DxgkNotifyMonitorDimming.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016BEC4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, char a2)
{
  char *DeviceExtension; // rbx

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension || *((_DWORD *)DeviceExtension + 4) != 1953656900 || *((_DWORD *)DeviceExtension + 5) != 2 )
    return 3221225485LL;
  KeWaitForSingleObject(DeviceExtension + 2928, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)DeviceExtension + 400) )
  {
    if ( (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 0) >= 0 )
    {
      DeviceExtension[2848] = a2;
      DpiBrightnessAISetBacklightOptLevel(a1);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(DeviceExtension + 2928), 0);
  return 0LL;
}
