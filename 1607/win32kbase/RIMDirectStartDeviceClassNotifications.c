/*
 * XREFs of RIMDirectStartDeviceClassNotifications @ 0x1C0088380
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C007FBEC (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMDirectStartDeviceClassNotifications(void *a1, struct _DRIVER_OBJECT *a2)
{
  struct _DRIVER_OBJECT *v2; // rbp
  int v4; // esi
  PDRIVER_OBJECT *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    111,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (PDRIVER_OBJECT *)Object;
    RIMLockExclusive((__int64)Object + 96);
    v5[14] = v2;
    RIMUnlockExclusive((__int64)(v5 + 12));
    RIMDiscoverDevicesOfInputType(v5);
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x70u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v7);
  return (unsigned int)v4;
}
