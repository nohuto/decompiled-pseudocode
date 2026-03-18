/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C019948C
 * Callers:
 *     DxgkNotifyMonitorDimming @ 0x1C0149C40 (DxgkNotifyMonitorDimming.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0180200 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01989EC (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimming(struct _DEVICE_OBJECT *a1, char a2)
{
  struct _KMUTANT *DeviceExtension; // rbx

  DeviceExtension = (struct _KMUTANT *)a1->DeviceExtension;
  if ( !DeviceExtension
    || LODWORD(DeviceExtension->Header.WaitListHead.Blink) != 1953656900
    || HIDWORD(DeviceExtension->Header.WaitListHead.Blink) != 2 )
  {
    return 3221225485LL;
  }
  KeWaitForSingleObject(&DeviceExtension[74], Executive, 0, 0, 0LL);
  if ( *(_QWORD *)&DeviceExtension[78].Abandoned )
  {
    if ( (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 0) >= 0 )
    {
      LOBYTE(DeviceExtension[72].MutantListEntry.Blink) = a2;
      DpiBrightnessAISetBacklightOptLevel(a1);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex(DeviceExtension + 74, 0);
  return 0LL;
}
