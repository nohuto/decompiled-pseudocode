/*
 * XREFs of ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800441F4
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003B888 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800443B8 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@UIAudioResourceManager@@VNil@Details@WRL@Microsoft@@@D.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800446C0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Deta.c)
 *     ??0CAudioResourceManager@@QEAA@XZ @ 0x18004490C (--0CAudioResourceManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager>()
{
  CAudioResourceManager *v0; // rbx
  CAudioResourceManager *v1; // rax
  unsigned int v2; // edi

  g_AudioResourceManager = 0LL;
  v0 = 0LL;
  v1 = (CAudioResourceManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1 )
  {
    v0 = CAudioResourceManager::CAudioResourceManager(v1);
    *((_BYTE *)v0 + 80) = 1;
    v2 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAudioResourceManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
           v0,
           &GUID_49c04909_3d09_47ea_957d_5ab631c29855,
           &g_AudioResourceManager);
  }
  else
  {
    v2 = -2147024882;
  }
  if ( v0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v0);
  return v2;
}
