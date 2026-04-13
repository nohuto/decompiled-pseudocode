/*
 * XREFs of ??1?$ComPtr@VUpdatedEventArgsImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x1800414A0
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary_::_1_::dtor$1 @ 0x18005BEF1 (_ContentManagement--TargetedContent--SubscriptionImpl--NotifySubscribersIfNecessary_ea_18005BEF1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042490 (-Release@-$RuntimeClass@U-$InterfaceList@V-$DeferrableEventArgs@UITargetedContentUpdatedEventArg.c)
 */

int __fastcall Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::UpdatedEventArgsImpl>::~ComPtr<ContentManagement::TargetedContent::UpdatedEventArgsImpl>(
        ContentManagement::TargetedContent::UpdatedEventArgsImpl **a1)
{
  ContentManagement::TargetedContent::UpdatedEventArgsImpl *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v1);
  }
  return (int)v1;
}
