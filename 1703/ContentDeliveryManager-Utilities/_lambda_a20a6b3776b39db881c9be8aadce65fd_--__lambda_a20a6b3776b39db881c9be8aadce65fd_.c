/*
 * XREFs of _lambda_a20a6b3776b39db881c9be8aadce65fd_::__lambda_a20a6b3776b39db881c9be8aadce65fd_ @ 0x180048E00
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$3 @ 0x180072B2C (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_180072B2C.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180020560 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManag.c)
 */

HRESULT __fastcall lambda_a20a6b3776b39db881c9be8aadce65fd_::__lambda_a20a6b3776b39db881c9be8aadce65fd_(_QWORD *a1)
{
  HSTRING v2; // rcx
  HRESULT result; // eax
  HSTRING v4; // rcx
  __int64 v5; // rcx

  v2 = (HSTRING)a1[4];
  if ( v2 )
    result = WindowsDeleteString(v2);
  v4 = (HSTRING)a1[2];
  if ( v4 )
    result = WindowsDeleteString(v4);
  v5 = a1[1];
  if ( v5 )
  {
    a1[1] = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v5);
  }
  return result;
}
