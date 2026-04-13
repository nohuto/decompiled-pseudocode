/*
 * XREFs of ??1?$RuntimeClass@U?$IMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@VNil@Details@78@V9Details@78@V9Details@78@V9Details@78@V9Details@78@V9Details@78@V9Details@78@@WRL@Microsoft@@UEAA@XZ @ 0x180010264
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::AppInstallInfoRecord_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::AppInstallInfoRecord_____ptr64_0_1_0___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18005A07C (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--AppInstallIn_ea_18005A07C.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionManagerImpl_::_1_::dtor$0 @ 0x18005B987 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--SubscriptionManagerImpl_.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_0_1_0___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18005C744 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--TargetedCont_ea_18005C744.c)
 *     _Windows::Foundation::Collections::Internal::HashMap_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultHash_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentValue_____ptr64__Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__0_1_0___::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18005C756 (_Windows--Foundation--Collections--Internal--HashMap_HSTRING_______ptr64_ContentManagement--Targ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *> *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *> *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
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
