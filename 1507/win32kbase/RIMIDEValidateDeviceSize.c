/*
 * XREFs of RIMIDEValidateDeviceSize @ 0x1C00C6BAC
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIDEValidateDeviceSize(__int64 a1, int a2, int a3)
{
  unsigned int v4; // ecx
  __int128 v5; // xmm1

  v4 = 0;
  v5 = *(_OWORD *)(a1 + 172);
  *(_OWORD *)(a1 + 140) = *(_OWORD *)(a1 + 156);
  *(_OWORD *)(a1 + 188) = v5;
  if ( a2 == -1 || a3 == -1 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x11u,
      (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids);
    v4 = -1073741668;
  }
  if ( *(_DWORD *)(a1 + 196) <= *(_DWORD *)(a1 + 188) || *(_DWORD *)(a1 + 200) <= *(_DWORD *)(a1 + 192) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x12u,
      (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids);
    v4 = -1073741668;
  }
  if ( *(_DWORD *)(a1 + 164) <= *(_DWORD *)(a1 + 156) || *(_DWORD *)(a1 + 168) <= *(_DWORD *)(a1 + 160) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x13u,
      (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids);
    return (unsigned int)-1073741668;
  }
  return v4;
}
