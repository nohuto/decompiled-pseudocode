/*
 * XREFs of _lambda_9a4f04edc0957699874c67f46dec02c4_::__lambda_9a4f04edc0957699874c67f46dec02c4_ @ 0x18003FCF0
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAsync_::_1_::dtor$1 @ 0x18005BCBD (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAsync_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042180 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180042180.c)
 */

int __fastcall lambda_9a4f04edc0957699874c67f46dec02c4_::__lambda_9a4f04edc0957699874c67f46dec02c4_(__int64 a1)
{
  ContentManagement::TargetedContent::SubscriptionImpl *v1; // rax

  v1 = *(ContentManagement::TargetedContent::SubscriptionImpl **)(a1 + 8);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v1);
  }
  return (int)v1;
}
