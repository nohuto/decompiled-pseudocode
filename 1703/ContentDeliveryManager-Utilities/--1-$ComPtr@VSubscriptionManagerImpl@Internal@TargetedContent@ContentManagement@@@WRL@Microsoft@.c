/*
 * XREFs of ??1?$ComPtr@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18003BCB4
 * Callers:
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::dtor$0 @ 0x180071E4D (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$0 @ 0x1800722CF (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$InterfaceList@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003C910 (-Release@-$RuntimeClass@U-$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentM.c)
 */

int __fastcall Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~ComPtr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v1);
  }
  return (int)v1;
}
