/*
 * XREFs of ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x18002F194
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180024D54 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CAudioResourceManager@@QEAA@XZ @ 0x180032F38 (--0CAudioResourceManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034520 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphManager@@VNil@Details@WRL@Microsoft@@@Deta.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180074A1C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceL_ea_180074A1C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager>()
{
  CAudioResourceManager *v0; // rbx
  CAudioResourceManager *v1; // rax
  const struct _GUID *v2; // rcx
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // r9
  __int64 v5; // rdx
  CAudioResourceManager *v6; // r8
  int CanCastTo; // edi

  g_AudioResourceManager = 0LL;
  v0 = 0LL;
  v1 = (CAudioResourceManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1 )
  {
    v0 = CAudioResourceManager::CAudioResourceManager(v1);
    *((_BYTE *)v0 + 80) = 1;
    g_AudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_5336b665_7f9f_4334_a035_c323adb76330, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      g_AudioResourceManager = v0;
      (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v0 + 8LL))(v0);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v3, v4) )
      {
        g_AudioResourceManager = v6;
        CanCastTo = 0;
LABEL_6:
        (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v6 + 8LL))(v6);
        goto LABEL_7;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
                    (char *)v6 + 8,
                    v5,
                    &g_AudioResourceManager);
      if ( CanCastTo >= 0 )
      {
        v6 = g_AudioResourceManager;
        goto LABEL_6;
      }
    }
  }
  else
  {
    CanCastTo = -2147024882;
  }
LABEL_7:
  if ( v0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v0);
  return (unsigned int)CanCastTo;
}
