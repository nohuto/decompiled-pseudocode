/*
 * XREFs of _lambda_770ef59a870ab0485516ac767e870dae_::__lambda_770ef59a870ab0485516ac767e870dae_ @ 0x1800412AC
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync_::_1_::dtor$3 @ 0x18005BF33 (_ContentManagement--TargetedContent--SubscriptionStaticsImpl--GetSubscriptionAsync_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180019350 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@2.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_770ef59a870ab0485516ac767e870dae_::__lambda_770ef59a870ab0485516ac767e870dae_(_QWORD *a1)
{
  __int64 v2; // rcx
  HRESULT result; // eax
  HSTRING v4; // rcx
  __int64 v5; // rcx

  v2 = a1[4];
  if ( v2 )
  {
    a1[4] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = (HSTRING)a1[2];
  if ( v4 )
    result = WindowsDeleteString(v4);
  v5 = a1[1];
  if ( v5 )
  {
    a1[1] = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v5);
  }
  return result;
}
