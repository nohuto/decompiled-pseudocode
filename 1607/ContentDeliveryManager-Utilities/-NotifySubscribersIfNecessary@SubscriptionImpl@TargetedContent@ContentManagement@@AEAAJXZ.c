/*
 * XREFs of ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90
 * Callers:
 *     ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010 (-add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU-$ITypedEventHa.c)
 *     ?NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z @ 0x180040994 (-NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?Invoke@?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@UEAAJXZ @ 0x180043EC0 (-Invoke@-$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800348C0 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800365A4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041564 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042490 (-Release@-$RuntimeClass@U-$InterfaceList@V-$DeferrableEventArgs@UITargetedContentUpdatedEventArg.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042530 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@V-$DeferrableEventArgs@UITargetedContentUpdatedE.c)
 *     ??$Start@PEBG@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG@Z @ 0x1800438E4 (--$Start@PEBG@NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@Con.c)
 *     ??$MakeAndInitialize@VUpdatedEventArgsImpl@TargetedContent@ContentManagement@@V123@QEAVSubscriptionImpl@23@AEB_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VUpdatedEventArgsImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@$$QEBQEAVSubscriptionImpl@TargetedContent@ContentManagement@@AEB_N@Z @ 0x1800439A4 (--$MakeAndInitialize@VUpdatedEventArgsImpl@TargetedContent@ContentManagement@@V123@QEAVSubscript.c)
 *     ??$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_eef752076538a26ed334291b1ebf7b16_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800449DC (--$InvokeDelegates@V_lambda_eef752076538a26ed334291b1ebf7b16_@@U-$ITypedEventHandler@PEAVTargete.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary(
        ContentManagement::TargetedContent::SubscriptionImpl *this)
{
  int v2; // eax
  int Interface; // eax
  RTL_SRWLOCK *v4; // rsi
  int v5; // edi
  volatile signed __int32 *Ptr; // rbx
  signed __int32 v7; // eax
  RTL_SRWLOCK *v8; // rbx
  bool v9; // di
  volatile signed __int32 *v10; // rcx
  int v11; // eax
  void *v12; // rcx
  ContentManagement::TargetedContent::UpdatedEventArgsImpl *v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v16; // [rsp+30h] [rbp-D8h] BYREF
  void *v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  ContentManagement::TargetedContent::SubscriptionImpl *v18; // [rsp+48h] [rbp-C0h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-B8h] BYREF
  PSRWLOCK v20; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  __int128 v23; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v24[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v22 = -2LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 22, 1, 2) == 2 )
  {
    v17[1] = (void *)WindowsGetStringRawBuffer(*((HSTRING *)this + 9), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::NotifySubscriptionListenersActivity::Start<unsigned short const *>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::NotifySubscriptionListenersActivity *)v24);
    v16 = 0LL;
    LOBYTE(v15) = _InterlockedExchange((volatile __int32 *)this + 23, 0) != 0;
    v18 = this;
    v2 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::UpdatedEventArgsImpl,ContentManagement::TargetedContent::UpdatedEventArgsImpl,ContentManagement::TargetedContent::SubscriptionImpl * const,bool const &>(
           &v16,
           &v18,
           &v15);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v2);
      __debugbreak();
    }
    v17[0] = 0LL;
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
                  (ContentManagement::TargetedContent::UpdatedEventArgsImpl *)v16,
                  &GUID_889f16fc_66ce_4e67_8288_5d301a8bbb3c,
                  v17);
    if ( Interface < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x204,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)Interface);
      __debugbreak();
    }
    v4 = (RTL_SRWLOCK *)((char *)this + 96);
    *(_QWORD *)&v21 = this;
    *((void **)&v21 + 1) = v17[0];
    v5 = 0;
    Ptr = 0LL;
    wil::srwlock::lock_exclusive(v4 + 1, &SRWLock);
    if ( v4->Ptr )
    {
      Ptr = (volatile signed __int32 *)v4->Ptr;
      do
        v7 = *((_DWORD *)Ptr + 3);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(Ptr + 3, v7 + 1, v7) );
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( Ptr )
    {
      v23 = v21;
      v5 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_eef752076538a26ed334291b1ebf7b16_,Windows::Foundation::ITypedEventHandler<ContentManagement::TargetedContent::TargetedContentSubscription *,ContentManagement::TargetedContent::TargetedContentUpdatedEventArgs *>>(
             &v23,
             Ptr,
             v4);
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(Ptr);
    }
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x205,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v8 = v16;
    wil::srwlock::lock_exclusive(v16 + 1, &v20);
    LOBYTE(v8[2].Ptr) = 1;
    v9 = HIDWORD(v8[2].Ptr) == 0;
    if ( v20 )
      ReleaseSRWLockExclusive(v20);
    if ( v9 )
    {
      v10 = (volatile signed __int32 *)v8[9].Ptr;
      if ( _InterlockedCompareExchange(v10 + 22, 0, 1) != 1 )
      {
        v11 = ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary((ContentManagement::TargetedContent::SubscriptionImpl *)v10);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x215,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
            (const char *)(unsigned int)v11);
      }
    }
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
    v12 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (ContentManagement::TargetedContent::UpdatedEventArgsImpl *)v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v13);
    }
    v24[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::NotifySubscriptionListenersActivity::`vftable';
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  }
  return 0LL;
}
