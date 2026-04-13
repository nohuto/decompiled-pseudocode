/*
 * XREFs of ??1?$ComPtr@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEAA@XZ @ 0x18001A5B8
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync_::_1_::dtor$2 @ 0x18005BF27 (_ContentManagement--TargetedContent--SubscriptionStaticsImpl--GetSubscriptionAsync_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180019350 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@2.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::SubscriptionStaticsImpl>::~ComPtr<ContentManagement::TargetedContent::SubscriptionStaticsImpl>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(result);
  }
  return result;
}
