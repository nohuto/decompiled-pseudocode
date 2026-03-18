/*
 * XREFs of UsbhDriverUnload @ 0x1C004B680
 * Callers:
 *     <none>
 * Callees:
 *     UsbhModuleDispatch @ 0x1C0004C80 (UsbhModuleDispatch.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     USBHUB_FreeBugCheck @ 0x1C004B0C4 (USBHUB_FreeBugCheck.c)
 */

__int64 __fastcall UsbhDriverUnload(__int64 a1, __int64 a2)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_f44c71c208e93d614b6f1b21108c6498_Traceguids);
  UsbhModuleDispatch(0, a2, 0LL, 4, 0LL, 0LL);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckPortArray);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckHubExt);
  return WppCleanupKm(a1);
}
