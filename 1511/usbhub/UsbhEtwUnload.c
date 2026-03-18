/*
 * XREFs of UsbhEtwUnload @ 0x1C0057810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

int UsbhEtwUnload()
{
  int result; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0xAu,
               (__int64)&WPP_6fd46692a7c47e97d9551f52465ab7cc_Traceguids);
  if ( RegHandle )
  {
    result = EtwUnregister(RegHandle);
    RegHandle = 0LL;
  }
  return result;
}
