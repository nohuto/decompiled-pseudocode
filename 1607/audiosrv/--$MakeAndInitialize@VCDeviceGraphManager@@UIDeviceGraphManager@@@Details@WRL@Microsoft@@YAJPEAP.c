/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x18002F0D4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180024D54 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034520 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Deta.c)
 *     ??0CDeviceGraphManager@@QEAA@XZ @ 0x18003477C (--0CDeviceGraphManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180074A1C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceL_ea_180074A1C.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager>()
{
  CDeviceGraphManager *v0; // rax
  CDeviceGraphManager *v1; // rax
  CDeviceGraphManager *v2; // rdi
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // rcx
  const struct _GUID *v5; // r9
  __int64 v6; // rdx
  CDeviceGraphManager *v7; // r8
  int CanCastTo; // ebx

  g_DeviceGraphManager = 0LL;
  v0 = (CDeviceGraphManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v0 )
    return (unsigned int)-2147024882;
  v1 = CDeviceGraphManager::CDeviceGraphManager(v0);
  g_DeviceGraphManager = 0LL;
  v2 = v1;
  if ( InlineIsEqualGUID(&GUID_a46a7edf_b019_46c3_aeda_bf6341899a2a, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    g_DeviceGraphManager = v2;
    (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)v2 + 8LL))(v2);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, v5) )
    {
      g_DeviceGraphManager = v7;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(CDeviceGraphManager *))(*(_QWORD *)v7 + 8LL))(v7);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
                  (char *)v7 + 8,
                  v6,
                  &g_DeviceGraphManager);
    if ( CanCastTo >= 0 )
    {
      v7 = g_DeviceGraphManager;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v2);
  return (unsigned int)CanCastTo;
}
