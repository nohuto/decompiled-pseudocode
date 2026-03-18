/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0004ED0
 * Callers:
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0004FFC (WPP_RECORDER_SF_sqqDqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  __int64 v0; // rbx
  int v1; // edi
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // rcx
  _QWORD v6[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v7; // [rsp+70h] [rbp-28h]
  struct _KEVENT Event; // [rsp+78h] [rbp-20h] BYREF

  v0 = RootDeviceExtension;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6[0] = 0LL;
  v6[1] = &Event;
  v7 = 3221225473LL;
  v1 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v0 + 712), ACPIRootDeviceDiscoverDeviceCompletion, v6);
  if ( v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v1 = v7;
  }
  if ( v1 >= 0 )
  {
    if ( v6[0] )
    {
      *(_QWORD *)(v0 + 896) = v6[0];
      _InterlockedOr64((volatile signed __int64 *)(v0 + 912), 0x4000000uLL);
    }
    v2 = *(_QWORD *)(v0 + 8);
    v3 = qword_1C002C340;
    v4 = qword_1C002C340;
    if ( (v2 & 0x200000000000LL) != 0 )
    {
      v3 = *(__int64 **)(v0 + 560);
      if ( (v2 & 0x400000000000LL) != 0 )
        v4 = *(__int64 **)(v0 + 568);
    }
    WPP_RECORDER_SF_sqqDqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      0,
      30,
      (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids,
      (__int64)"ACPIRootDeviceNotifyPepDiscoverDevice",
      v0,
      *(_QWORD *)(v0 + 896),
      v1,
      v0,
      (__int64)v3,
      (__int64)v4);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 912), 0x2000000uLL);
  return (unsigned int)v1;
}
