/*
 * XREFs of WmiTraceRundownNotify @ 0x1405332B4
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404D5EA8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x14011A6D4 (WmipBuildTraceDeviceList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     WmipFreeTraceDeviceList @ 0x140533358 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiTraceRundownNotify(int a1)
{
  int v1; // ebx
  __int64 v2; // r8
  unsigned int v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h] BYREF
  int v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+44h] [rbp-24h]
  int v8; // [rsp+48h] [rbp-20h]

  v7 = a1;
  v6 = 1;
  v8 = 0x400000;
  v5 = 0LL;
  v4 = 0;
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
