/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18003FB7C
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::_SubscriptionImpl_::_1_::dtor$3 @ 0x18005BC44 (_ContentManagement--TargetedContent--SubscriptionImpl--_SubscriptionImpl_--_1_--dtor$3.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_eef752076538a26ed334291b1ebf7b16__Windows::Foundation::ITypedEventHandler_ContentManagement::TargetedContent::TargetedContentSubscription_____ptr64_ContentManagement::TargetedContent::TargetedContentUpdatedEventArgs_____ptr64____::_1_::dtor$0 @ 0x18005C07A (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_eef752076538a26ed334291b1ebf7b16__Win.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
