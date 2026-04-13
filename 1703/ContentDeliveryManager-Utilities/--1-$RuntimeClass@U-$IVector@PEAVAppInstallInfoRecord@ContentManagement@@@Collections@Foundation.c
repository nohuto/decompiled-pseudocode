/*
 * XREFs of ??1?$RuntimeClass@U?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@234@VFtmBase@WRL@Microsoft@@VNil@Details@78@V9Details@78@V9Details@78@V9Details@78@V9Details@78@V9Details@78@V9Details@78@@WRL@Microsoft@@UEAA@XZ @ 0x180015DEC
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::AppInstallInfoRecord_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::AppInstallInfoRecord_____ptr64_0_1_0___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180070CD5 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--AppInstallIn_ea_180070CD5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionManagerImpl_::_1_::dtor$0 @ 0x1800723D3 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--SubscriptionManagerImpl_.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_0_1_0___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800732D5 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800732D5.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011AB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v2));
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
