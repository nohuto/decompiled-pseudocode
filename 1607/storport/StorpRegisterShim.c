/*
 * XREFs of StorpRegisterShim @ 0x1C005BEC0
 * Callers:
 *     DllInitialize @ 0x1C00178E0 (DllInitialize.c)
 * Callees:
 *     WPP_SF_D @ 0x1C002AE50 (WPP_SF_D.c)
 */

__int64 StorpRegisterShim()
{
  int v0; // r9d
  int v1; // eax
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
      (__int64)&WPP_89b78b25eb713f58affd896bde38d0ee_Traceguids,
      v0);
  }
  v1 = KseRegisterShim(&DeviceIdShim, 0LL, 0LL);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_89b78b25eb713f58affd896bde38d0ee_Traceguids,
      v1);
  }
  result = KseRegisterShim(&ATADeviceIdShim, 0LL, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return WPP_SF_D(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             0xCu,
             (__int64)&WPP_89b78b25eb713f58affd896bde38d0ee_Traceguids,
             result);
  }
  return result;
}
