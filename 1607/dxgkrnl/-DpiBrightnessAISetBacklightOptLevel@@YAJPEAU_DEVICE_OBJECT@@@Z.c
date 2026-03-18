/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01989EC
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00EA23C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C0198AD4 (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0198B60 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0198D90 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0198E40 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C019948C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C01995CC (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rcx
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v3; // edi
  bool v4; // zf
  unsigned int v5; // ebx
  _QWORD v7[8]; // [rsp+20h] [rbp-50h] BYREF

  DeviceExtension = a1->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 552) )
  {
    if ( DeviceExtension[4080] )
    {
      v3 = DxgkBacklightOptimizationDisable;
    }
    else if ( DeviceExtension[4064] )
    {
      v3 = DxgkBacklightOptimizationDimmed;
    }
    else
    {
      v3 = (DeviceExtension[4104] != 0) + 1;
    }
    v4 = DeviceExtension[4128] == 0;
    *((_DWORD *)DeviceExtension + 1033) = v3;
    if ( v4 )
    {
      v5 = DpiBrightnessSetBacklightOptimizationHelper(a1, v3);
      memset(v7, 0, sizeof(v7));
      v7[0] = 0x4000000006LL;
      memset(&v7[1], 0, 36);
      LODWORD(v7[6]) = 66;
      HIDWORD(v7[6]) = v3;
      v7[7] = v5;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7);
    }
  }
  return 0LL;
}
