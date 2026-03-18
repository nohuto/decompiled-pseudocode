/*
 * XREFs of UsbhValidateStringDescriptor @ 0x1C0028554
 * Callers:
 *     UsbhGetLanguageIdString @ 0x1C0005A20 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0007640 (UsbhGetSerialNumber.c)
 *     UsbhGetProductIdString @ 0x1C00283F4 (UsbhGetProductIdString.c)
 *     UsbhGetBillboardInfo @ 0x1C0043A00 (UsbhGetBillboardInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhValidateStringDescriptor(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  signed int v4; // eax
  PDEVICE_OBJECT v6; // rcx
  int v7; // r9d

  v4 = *a2;
  if ( v4 > a3 )
  {
    if ( a4 )
      *a4 = -1072693247;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 10;
LABEL_10:
    WPP_RECORDER_SF_(v6->DeviceExtension, 0, 1, v7, (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids);
    return 0;
  }
  if ( (unsigned __int8)v4 <= 2u )
  {
    if ( a4 )
      *a4 = -1072693247;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 11;
    goto LABEL_10;
  }
  if ( a2[1] != 3 )
  {
    if ( a4 )
      *a4 = -1072693246;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 12;
    goto LABEL_10;
  }
  if ( !(v4 % 2) )
    return 1;
  if ( a4 )
    *a4 = -1072693247;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_5bb179a8e8dc3d67ecd79814022ef394_Traceguids,
      v4 % 2);
  return 0;
}
