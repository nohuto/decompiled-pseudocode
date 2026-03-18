/*
 * XREFs of WmiSetNetworkNotify @ 0x14069EF1C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140495E58 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1404960E4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x14009D2C4 (WmipBuildTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x1404C0BE8 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404C0C34 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiSetNetworkNotify(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r8
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1;
  v6 = 0LL;
  v5 = 0;
  v1 = WmipBuildTraceDeviceList(0x200000, &v6, &v5);
  if ( v1 >= 0 )
  {
    LOBYTE(v2) = 10;
    v1 = WmipSendWmiIrpToTraceDeviceList((__int64)v6, v5, v2, 8, (__int64)&v4);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( v6 )
    WmipFreeTraceDeviceList(v6, v5);
  return (unsigned int)v1;
}
