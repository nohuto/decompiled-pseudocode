/*
 * XREFs of WmiSetNetworkNotify @ 0x1406E146C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x14011A6D4 (WmipBuildTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x140533358 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiSetNetworkNotify(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  v5 = 0LL;
  v4 = 0;
  v1 = WmipBuildTraceDeviceList(0x200000, &v5, &v4);
  if ( v1 >= 0 )
  {
    v1 = WmipSendWmiIrpToTraceDeviceList((__int64)v5, v4, 0xAu, 8u, (__int64)&v3);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( v5 )
    WmipFreeTraceDeviceList(v5, v4);
  return (unsigned int)v1;
}
