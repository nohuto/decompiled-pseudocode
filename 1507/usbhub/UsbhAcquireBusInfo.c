/*
 * XREFs of UsbhAcquireBusInfo @ 0x1C004D480
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetDeviceBusInfo @ 0x1C003BD68 (UsbhGetDeviceBusInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003CF38 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhAcquireBusInfo(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int DeviceBusInfo; // eax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x10u,
      (__int64)&WPP_1fd1aa707f2aca2a0a7df2845784e29f_Traceguids,
      v12,
      a3);
  }
  *a4 = 0;
  if ( a3 >= 0x10 )
  {
    *a4 = 16;
    DeviceBusInfo = UsbhGetDeviceBusInfo(a1, 0LL, a5, a3);
    v10 = DeviceBusInfo;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v13) = *a4;
      LODWORD(v11) = DeviceBusInfo;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)*a4,
        1u,
        0x12u,
        (__int64)&WPP_1fd1aa707f2aca2a0a7df2845784e29f_Traceguids,
        v11,
        v13);
    }
    return v10;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_1fd1aa707f2aca2a0a7df2845784e29f_Traceguids);
    return 3221225507LL;
  }
}
