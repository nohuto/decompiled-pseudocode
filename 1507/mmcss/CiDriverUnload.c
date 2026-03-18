/*
 * XREFs of CiDriverUnload @ 0x1C000BF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 */

__int64 CiDriverUnload()
{
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x13u,
      (__int64)&WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids);
  if ( CiDeviceObject )
  {
    IoDeleteDevice(CiDeviceObject);
    CiDeviceObject = 0LL;
  }
  return CsTerminate();
}
