/*
 * XREFs of UsbhDriverUnload @ 0x1C004AFE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhModuleDispatch @ 0x1C0025134 (UsbhModuleDispatch.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     USBHUB_FreeBugCheck @ 0x1C004AA24 (USBHUB_FreeBugCheck.c)
 */

__int64 __fastcall UsbhDriverUnload(__int64 a1, __int64 a2)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids);
  UsbhModuleDispatch(0, a2, 0LL, 4, 0LL, 0LL);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckPortArray);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckHubExt);
  return WppCleanupKm(a1);
}
