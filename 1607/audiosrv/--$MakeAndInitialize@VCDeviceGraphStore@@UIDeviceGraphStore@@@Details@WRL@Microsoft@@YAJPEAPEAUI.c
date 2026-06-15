/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphStore@@UIDeviceGraphStore@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphStore@@@Z @ 0x180032B18
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180024D54 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180032BF0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphStore@@VNil@Details@WRL@Microsoft@@@Detail.c)
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x180032C48 (--0CDeviceGraphStore@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphStore,IDeviceGraphStore>()
{
  CDeviceGraphStore *v0; // rbx
  CDeviceGraphStore *v1; // rax
  const struct _GUID *v2; // rcx
  unsigned int v3; // edi

  g_DeviceGraphStore = 0LL;
  v0 = 0LL;
  v1 = (CDeviceGraphStore *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1 )
  {
    v0 = CDeviceGraphStore::CDeviceGraphStore(v1);
    g_DeviceGraphStore = 0LL;
    if ( InlineIsEqualGUID(&GUID_9ed6c6e0_99af_4caf_a174_10c8df20dc3b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_DeviceGraphStore = v0;
      (*(void (__fastcall **)(CDeviceGraphStore *))(*(_QWORD *)v0 + 8LL))(v0);
      v3 = 0;
    }
    else if ( InlineIsEqualGUID(v2, v2) )
    {
      g_DeviceGraphStore = v0;
      v3 = 0;
      (*(void (__fastcall **)(CDeviceGraphStore *))(*(_QWORD *)v0 + 8LL))(v0);
    }
    else
    {
      v3 = -2147467262;
    }
  }
  else
  {
    v3 = -2147024882;
  }
  if ( v0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v0);
  return v3;
}
