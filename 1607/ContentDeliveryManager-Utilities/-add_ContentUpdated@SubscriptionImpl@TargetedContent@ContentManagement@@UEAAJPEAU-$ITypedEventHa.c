/*
 * XREFs of ?add_ContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAU?$ITypedEventHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@PEAVTargetedContentUpdatedEventArgs@23@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180040010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C720 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800348C0 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800365A4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041564 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAA.c)
 *     ??$Start@PEBG@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBG@Z @ 0x18004340C (--$Start@PEBG@AddSubscribedContentListenerActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800487F4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180048984 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::add_ContentUpdated(
        __int64 a1,
        struct IUnknown *a2,
        struct IUnknown **a3)
{
  RTL_SRWLOCK *v6; // r14
  int v7; // esi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r13
  unsigned __int64 v9; // rsi
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  _QWORD *Ptr; // rax
  void **v15; // rsi
  struct IUnknown **i; // rbx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-E0h] BYREF
  volatile signed __int32 *v24; // [rsp+38h] [rbp-D0h]
  PSRWLOCK v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v27 = -2LL;
  v26 = a1;
  SRWLock[1] = (PSRWLOCK)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 32), 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity::Start<unsigned short const *>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity *)v29);
  v6 = (RTL_SRWLOCK *)(a1 + 56);
  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_37:
    v19 = (unsigned int)v7;
    v20 = 364LL;
    goto LABEL_40;
  }
  QueryInterface = a2->lpVtbl[1].QueryInterface;
  *a3 = 0LL;
  wil::srwlock::lock_exclusive(v6 + 2, SRWLock);
  if ( v6->Ptr )
    v9 = ((__int64)(*((_QWORD *)v6->Ptr + 3) - *((_QWORD *)v6->Ptr + 2)) >> 3) + 1;
  else
    v9 = 1LL;
  v10 = 0LL;
  v24 = 0LL;
  v11 = (volatile signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    v7 = -2147024882;
LABEL_19:
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    goto LABEL_36;
  }
  *((_DWORD *)v11 + 3) = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v10 = v24;
  }
  *(_QWORD *)v11 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_QWORD *)v11 + 2) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_QWORD *)v11 + 4) = 0LL;
  v7 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
         (Microsoft::WRL::Details::EventTargetArray *)v11,
         v9);
  if ( v7 >= 0 )
  {
    do
      v13 = *((_DWORD *)v12 + 3);
    while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange(v12 + 3, v13 + 1, v13) );
    v10 = v12;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
    v7 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
  }
  if ( v7 < 0 )
  {
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
    goto LABEL_19;
  }
  Ptr = v6->Ptr;
  if ( v6->Ptr )
  {
    v15 = (void **)Ptr[4];
    for ( i = (struct IUnknown **)Ptr[2]; i != (struct IUnknown **)Ptr[3]; ++i )
    {
      Microsoft::WRL::Details::EventTargetArray::AddTail((Microsoft::WRL::Details::EventTargetArray *)v10, *i, *v15++);
      Ptr = v6->Ptr;
    }
  }
  *a3 = a2;
  Microsoft::WRL::Details::EventTargetArray::AddTail(
    (Microsoft::WRL::Details::EventTargetArray *)v10,
    a2,
    QueryInterface);
  wil::srwlock::lock_exclusive(v6 + 1, &v25);
  v17 = 0LL;
  if ( &v28 != (__int64 *)v6 )
  {
    v17 = (volatile signed __int32 *)v6->Ptr;
    v6->Ptr = 0LL;
  }
  v18 = (volatile signed __int32 *)v6->Ptr;
  v6->Ptr = (PVOID)v10;
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
  if ( v25 )
    ReleaseSRWLockExclusive(v25);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v17);
  v7 = 0;
LABEL_36:
  if ( v7 < 0 )
    goto LABEL_37;
  v21 = ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary((ContentManagement::TargetedContent::SubscriptionImpl *)(v26 - 40));
  v7 = v21;
  if ( v21 >= 0 )
  {
    wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
    v7 = 0;
    goto LABEL_42;
  }
  v19 = (unsigned int)v21;
  v20 = 365LL;
LABEL_40:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
    (const char *)v19);
LABEL_42:
  v29[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::AddSubscribedContentListenerActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
  return (unsigned int)v7;
}
