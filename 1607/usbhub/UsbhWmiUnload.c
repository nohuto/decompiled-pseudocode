/*
 * XREFs of UsbhWmiUnload @ 0x1C004F1B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

void UsbhWmiUnload()
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids);
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
