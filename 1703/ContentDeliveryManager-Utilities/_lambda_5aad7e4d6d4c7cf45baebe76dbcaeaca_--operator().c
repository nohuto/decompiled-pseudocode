/*
 * XREFs of _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x18003A498
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18003F720 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca__0__wistd--detai.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004288 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIThumbnailCacheHelper@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FDB0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIThumbnailCach.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$InterfaceList@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003C910 (-Release@-$RuntimeClass@U-$InterfaceList@UISubscriptionManager@Internal@TargetedContent@ContentM.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___ @ 0x18003E760 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rbx
  struct Windows::Internal::IComPoolTask *v2; // rdi
  DWORD CurrentThreadId; // eax
  int v4; // edi
  const char *v5; // r9
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v9; // [rsp+58h] [rbp+10h] BYREF
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v10; // [rsp+60h] [rbp+18h]

  try
  {
    v1 = *a1;
    v10 = v1;
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IThumbnailCacheHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v1);
    v9 = v1;
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IThumbnailCacheHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v1);
    v2 = *(struct Windows::Internal::IComPoolTask **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___(
                                                       &v8,
                                                       &v9);
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v2, 0LL);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v4);
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x38,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      v5);
  }
}
