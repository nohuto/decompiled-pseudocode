/*
 * XREFs of UsbhWmiUnload @ 0x1C004EAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

void UsbhWmiUnload()
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_1fd1aa707f2aca2a0a7df2845784e29f_Traceguids);
  if ( UsbhWmiInit )
  {
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    UsbhWmiInit = 0;
  }
}
