/*
 * XREFs of ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016BEC4
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00C51A8 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z @ 0x1C016BF8C (-DpiBrightnessCleanupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C016C018 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C016C250 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C016C300 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C016C8FC (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C016CA3C (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessAISetBacklightOptLevel(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rcx
  enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL v3; // edi
  bool v4; // zf
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD v10[16]; // [rsp+30h] [rbp-58h] BYREF

  DeviceExtension = a1->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 400) )
  {
    if ( DeviceExtension[2864] )
    {
      v3 = DxgkBacklightOptimizationDisable;
    }
    else if ( DeviceExtension[2848] )
    {
      v3 = DxgkBacklightOptimizationDimmed;
    }
    else
    {
      v3 = (DeviceExtension[2888] != 0) + 1;
    }
    v4 = DeviceExtension[2912] == 0;
    *((_DWORD *)DeviceExtension + 729) = v3;
    if ( v4 )
    {
      v5 = DpiBrightnessSetBacklightOptimizationHelper(a1, v3);
      memset(v10, 0, sizeof(v10));
      DxgkDiagInitializeCodePointPacket(v10, 66, v3, v5, 0);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v10, v6, v7, v8);
    }
  }
  return 0LL;
}
