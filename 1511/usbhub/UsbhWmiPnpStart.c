/*
 * XREFs of UsbhWmiPnpStart @ 0x1C0026370
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhWmiPnpStart(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_1fd1aa707f2aca2a0a7df2845784e29f_Traceguids);
  v5 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  v5[718] = 6;
  *((_QWORD *)v5 + 360) = &USB_WmiGuidList;
  *((_QWORD *)v5 + 361) = UsbhQueryWmiRegInfo;
  *((_QWORD *)v5 + 362) = UsbhQueryWmiDataBlock;
  *((_QWORD *)v5 + 363) = UsbhSetWmiDataBlock;
  *((_QWORD *)v5 + 365) = UsbhExecuteWmiMethod;
  *((_QWORD *)v5 + 364) = 0LL;
  *((_QWORD *)v5 + 366) = 0LL;
  IoWMIRegistrationControl(DeviceObject, 1u);
  v5[640] |= 2u;
  Log((__int64)DeviceObject, 64, 1098345833, 0LL, 0LL);
  return 0LL;
}
