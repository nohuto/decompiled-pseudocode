/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@@Z @ 0x18003342C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800334E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180033540 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristicsCache@@VNil@Details@WRL@Micros.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x180033598 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ @ 0x18003360C (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache>()
{
  CEndpointCharacteristicsCache *v0; // rbx
  CEndpointCharacteristicsCache *v1; // rax
  int v2; // edi
  __int64 (__fastcall *v3)(CEndpointCharacteristicsCache *, GUID *, CEndpointCharacteristicsCache **); // rax
  int Interface; // eax
  void (__fastcall *v5)(CEndpointCharacteristicsCache *); // rax

  g_pEndpointCharacteristicsCache = 0LL;
  v0 = 0LL;
  v1 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1 )
  {
    v0 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v1);
    v2 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v0);
    if ( v2 >= 0 )
    {
      v3 = **(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, CEndpointCharacteristicsCache **))v0;
      if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      v0,
                      &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
                      &g_pEndpointCharacteristicsCache);
      else
        Interface = v3(v0, &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656, &g_pEndpointCharacteristicsCache);
      v2 = Interface;
    }
  }
  else
  {
    v2 = -2147024882;
  }
  if ( v0 )
  {
    v5 = *(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v0 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristicsCache,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v0);
    else
      v5(v0);
  }
  return (unsigned int)v2;
}
