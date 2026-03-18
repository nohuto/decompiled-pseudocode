/*
 * XREFs of RIMDirectStartDeviceClassNotifications @ 0x1C00872C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00072B4 (RIMDiscoverDevicesOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDirectStartDeviceClassNotifications(void *a1, struct _DRIVER_OBJECT *a2)
{
  int v4; // esi
  PDRIVER_OBJECT *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x6Eu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (PDRIVER_OBJECT *)Object;
    RIMLockExclusive((__int64)Object + 96);
    v5[14] = a2;
    RIMUnlockExclusive((__int64)(v5 + 12));
    RIMDiscoverDevicesOfInputType(v5);
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x6Fu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v7);
  return (unsigned int)v4;
}
