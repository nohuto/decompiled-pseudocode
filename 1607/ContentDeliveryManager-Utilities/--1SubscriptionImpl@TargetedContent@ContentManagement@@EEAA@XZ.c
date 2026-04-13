/*
 * XREFs of ??1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ @ 0x18003F988
 * Callers:
 *     ??_GSubscriptionImpl@TargetedContent@ContentManagement@@EEAAPEAXI@Z @ 0x18003FB00 (--_GSubscriptionImpl@TargetedContent@ContentManagement@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x180032CD0 (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 *     ?CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040888 (-CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ContentManagement::TargetedContent::SubscriptionImpl::~SubscriptionImpl(
        ContentManagement::TargetedContent::SubscriptionImpl *this)
{
  ContentManagement::TargetedContent::SubscriptionImpl *v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  CreativeFramework::SubscribedContentStore *StringRawBuffer; // rax
  const unsigned __int16 *v5; // rdx
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rcx
  HSTRING v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = this;
  *(_QWORD *)this = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable';
  *((_QWORD *)this + 1) = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 4) = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscription,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 5) = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentSubscription'};
  *((_QWORD *)this + 6) = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>,1,0>'};
  try
  {
    ContentManagement::TargetedContent::SubscriptionImpl::CancelContentUpdateRetry(this);
    v2 = *((_QWORD *)v1 + 10);
    if ( v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 56LL))(
             v2,
             *((_QWORD *)v1 + 9),
             (__int64)v1 + 48);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x100,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
          (const char *)(unsigned int)v3);
    }
    StringRawBuffer = (CreativeFramework::SubscribedContentStore *)WindowsGetStringRawBuffer(*((HSTRING *)v1 + 9), 0LL);
    CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed(StringRawBuffer, v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x106,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      v6);
    v1 = this;
  }
  v7 = *((_QWORD *)v1 + 20);
  if ( v7 )
  {
    *((_QWORD *)v1 + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)v1 + 17);
  if ( v8 )
  {
    *((_QWORD *)v1 + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)v1 + 12);
  if ( v9 )
  {
    *((_QWORD *)v1 + 12) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
  }
  v10 = *((_QWORD *)v1 + 10);
  if ( v10 )
  {
    *((_QWORD *)v1 + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (HSTRING)*((_QWORD *)v1 + 9);
  if ( v11 )
    WindowsDeleteString(v11);
  v12 = *((_QWORD *)v1 + 8);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v12));
  v13 = *((_QWORD *)v1 + 3);
  if ( v13 )
  {
    *((_QWORD *)v1 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
