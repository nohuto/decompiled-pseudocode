/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UITargetedContentSubscription@TargetedContent@ContentManagement@@UISubscriptionPriv@Internal@67@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAA@XZ @ 0x18003FB38
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::_SubscriptionImpl_::_1_::dtor$0 @ 0x18005BC18 (_ContentManagement--TargetedContent--SubscriptionImpl--_SubscriptionImpl_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 < 0 )
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v2));
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
