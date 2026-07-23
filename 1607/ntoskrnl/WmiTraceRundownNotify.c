/*
 * XREFs of WmiTraceRundownNotify @ 0x1404AC86C
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140491978 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140496D14 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x14009CAC4 (WmipBuildTraceDeviceList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     WmipFreeTraceDeviceList @ 0x1404AC918 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404AC964 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiTraceRundownNotify(int a1)
{
  int v1; // ebx
  __int64 v2; // r8
  unsigned int v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+44h] [rbp-1Ch]
  int v8; // [rsp+48h] [rbp-18h]

  v7 = a1;
  v5 = 0LL;
  v8 = 0x400000;
  v4 = 0;
  v6 = 1;
  v1 = WmipBuildTraceDeviceList(0x400000, &v5, &v4);
  if ( v1 >= 0 )
  {
    LOBYTE(v2) = 12;
    v1 = WmipSendWmiIrpToTraceDeviceList(v5, v4, v2);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( v5 )
    WmipFreeTraceDeviceList(v5, v4);
  return (unsigned int)v1;
}
