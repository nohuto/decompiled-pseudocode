/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x180041B1C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180041B90 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Det.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180041C30 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Deta.c)
 *     ??0CDeviceGraphManager@@QEAA@XZ @ 0x180041D1C (--0CDeviceGraphManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>()
{
  CDeviceGraphManager *v0; // rax
  CDeviceGraphManager *v1; // rdi
  unsigned int v2; // ebx

  g_DeviceGraphManager = 0LL;
  v0 = (CDeviceGraphManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CDeviceGraphManager::CDeviceGraphManager(v0);
    v2 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
           v1,
           &GUID_1bfbfec9_2233_424d_aae7_3ea4dc44f9eb,
           &g_DeviceGraphManager);
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
