/*
 * XREFs of ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180033F20
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIVolumeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033FD0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIVolumeProvider@@VNil@Details@WRL@Microsoft@@@D.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVolumeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034030 (-Release@-$RuntimeClass@U-$InterfaceList@UIVolumeProvider@@VNil@Details@WRL@Microsoft@@@Details@.c)
 *     ??0CVolumeProvider@@QEAA@XZ @ 0x180034088 (--0CVolumeProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider>()
{
  CVolumeProvider *v0; // rax
  CVolumeProvider *v1; // rbx
  __int64 (__fastcall *v2)(CVolumeProvider *, GUID *, CVolumeProvider **); // rax
  unsigned int Interface; // eax
  unsigned int v4; // edi
  void (__fastcall *v5)(CVolumeProvider *); // rax

  g_pVolumeProvider = 0LL;
  v0 = (CVolumeProvider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CVolumeProvider::CVolumeProvider(v0);
    v2 = **(__int64 (__fastcall ***)(CVolumeProvider *, GUID *, CVolumeProvider **))v1;
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeProvider,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeProvider,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    v1,
                    &GUID_20b2a72d_4632_4a08_bd47_6aca4e517f6a,
                    &g_pVolumeProvider);
    else
      Interface = v2(v1, &GUID_20b2a72d_4632_4a08_bd47_6aca4e517f6a, &g_pVolumeProvider);
    v4 = Interface;
    v5 = *(void (__fastcall **)(CVolumeProvider *))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeProvider,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVolumeProvider,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      v5(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
