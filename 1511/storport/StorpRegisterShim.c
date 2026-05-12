/*
 * XREFs of StorpRegisterShim @ 0x1C0054538
 * Callers:
 *     DllInitialize @ 0x1C0013D00 (DllInitialize.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0027BA0 (WPP_SF_D.c)
 */

__int64 StorpRegisterShim()
{
  int v0; // r9d
  __int64 result; // rax

  v0 = KseRegisterShim(&SrbShim, 0LL, 0LL);
  if ( v0 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_0e2033ffec88805dc5dfbfc3b9546116_Traceguids,
      v0);
  }
  result = KseRegisterShim(&DeviceIdShim, 0LL, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return WPP_SF_D(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             0xBu,
             (__int64)&WPP_0e2033ffec88805dc5dfbfc3b9546116_Traceguids,
             result);
  }
  return result;
}
