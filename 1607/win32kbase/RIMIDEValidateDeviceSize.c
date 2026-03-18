/*
 * XREFs of RIMIDEValidateDeviceSize @ 0x1C00D71CC
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C00D278C (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
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
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      20,
      (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids);
    v4 = -1073741668;
  }
  if ( *(_DWORD *)(a1 + 196) <= *(_DWORD *)(a1 + 188) || *(_DWORD *)(a1 + 200) <= *(_DWORD *)(a1 + 192) )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      21,
      (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids);
    v4 = -1073741668;
  }
  if ( *(_DWORD *)(a1 + 164) <= *(_DWORD *)(a1 + 156) || *(_DWORD *)(a1 + 168) <= *(_DWORD *)(a1 + 160) )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      22,
      (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids);
    return (unsigned int)-1073741668;
  }
  return v4;
}
