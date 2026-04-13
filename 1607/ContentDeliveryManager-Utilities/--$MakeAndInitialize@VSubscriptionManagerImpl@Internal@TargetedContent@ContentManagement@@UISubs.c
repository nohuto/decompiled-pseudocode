/*
 * XREFs of ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180038A44
 * Callers:
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180036380 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 * Callees:
 *     ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x180034BD4 (-RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$InterfaceList@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037390 (-Release@-$RuntimeClass@U-$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentM.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$InterfaceList@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037430 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISubscriptionManager@Internal@TargetedContent@C.c)
 *     ??0SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@XZ @ 0x18003960C (--0SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager>(
        __int64 *a1)
{
  __int64 v2; // rcx
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v3; // rax
  int Interface; // esi
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v5; // rbx
  __int64 v6; // rdx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = 0LL;
  v3 = (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)operator new(
                                                                                  0x90uLL,
                                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionManagerImpl(v3);
    Interface = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(v5, v6);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    (__int64)v5,
                    &GUID_d5343860_de91_4cae_b38a_84536a72847c,
                    a1);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
