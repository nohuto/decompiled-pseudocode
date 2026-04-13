/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180044790
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180019350 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@2.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_770ef59a870ab0485516ac767e870dae_>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  HSTRING v5; // rcx
  __int64 v6; // rcx

  v4 = a1[5];
  if ( v4 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)a1[3];
  if ( v5 )
    WindowsDeleteString(v5);
  v6 = a1[2];
  if ( v6 )
  {
    a1[2] = 0LL;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v6);
  }
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
