/*
 * XREFs of ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180036380
 * Callers:
 *     ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180018DE0 (-ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPE.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AsWeak@?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z @ 0x18003725C (-AsWeak@-$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x180038A44 (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z @ 0x18003AFEC (-IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18003B2A8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(
        __int64 *a1)
{
  int IsCallingProcessAppContainer; // eax
  bool *v3; // r8
  int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+18h] BYREF
  unsigned __int16 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF

  IsCallingProcessAppContainer = CallerIdentity::IsCallingProcessAppContainer(2LL, &SRWLock);
  if ( IsCallingProcessAppContainer < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)IsCallingProcessAppContainer);
    __debugbreak();
  }
  v4 = CallerIdentity::CheckCallerCapability(retaddr, &v14, v3);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( (_BYTE)SRWLock && !(_BYTE)v14 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)0x80070005LL);
  v15 = 0LL;
  if ( !ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
    || ((*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                          + 24LL))(
          ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
          &GUID_d5343860_de91_4cae_b38a_84536a72847c,
          &v15),
        (v6 = v15) == 0) )
  {
    wil::srwlock::lock_exclusive(
      (RTL_SRWLOCK *)&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton,
      &SRWLock);
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v15 = 0LL;
    if ( !ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
      || ((*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                            + 24LL))(
            ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
            &GUID_d5343860_de91_4cae_b38a_84536a72847c,
            &v15),
          (v6 = v15) == 0) )
    {
      v8 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager>(&v15);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x103,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      v9 = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::ISubscriptionManager>::AsWeak(
              &v15,
              &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x104,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      v6 = v15;
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v6 = v15;
    }
  }
  *a1 = 0LL;
  if ( a1 != &v15 )
  {
    *a1 = v6;
    v6 = 0LL;
  }
  if ( v6 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
