/*
 * XREFs of ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18
 * Callers:
 *     _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator() @ 0x1800405E0 (_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator().c)
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_9a4f04edc0957699874c67f46dec02c4_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Z @ 0x180044700 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_9a4f04edc0957699874c67f46dec02c4_@@@Intern.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E28 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?CreateAppServiceConnection@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEBG2@Z @ 0x18003EDA8 (-CreateAppServiceConnection@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppServiceConnect.c)
 *     ?SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceResponse@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003F274 (-SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppS.c)
 *     ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438 (-CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UITargetedCon.c)
 *     ?CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040888 (-CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$Start@PEBGAEA_NAEA_N@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEA_N1@Z @ 0x180043338 (--$Start@PEBGAEA_NAEA_N@GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate(
        ContentManagement::TargetedContent::SubscriptionImpl *this,
        __int64 *a2,
        char a3)
{
  __int64 *v3; // rsi
  bool v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rcx
  PSRWLOCK *v8; // rax
  RTL_SRWLOCK *v9; // rbx
  struct _FILETIME v10; // rcx
  PSRWLOCK v11; // rcx
  unsigned __int64 v12; // r15
  RTL_SRWLOCK **v13; // rax
  RTL_SRWLOCK *v14; // rdx
  __int64 v15; // rcx
  struct _FILETIME v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  RTL_SRWLOCK *v20; // rbx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-1B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-1B0h] BYREF
  PSRWLOCK v24; // [rsp+50h] [rbp-1A8h] BYREF
  RTL_SRWLOCK *v25; // [rsp+58h] [rbp-1A0h] BYREF
  int v26; // [rsp+60h] [rbp-198h]
  __int64 *v27; // [rsp+68h] [rbp-190h]
  __int64 v28; // [rsp+70h] [rbp-188h]
  _QWORD v29[40]; // [rsp+80h] [rbp-178h] BYREF

  v28 = -2LL;
  v3 = a2;
  v25 = (RTL_SRWLOCK *)this;
  v27 = a2;
  *a2 = 0LL;
  v26 = 1;
  wil::srwlock::lock_shared((RTL_SRWLOCK *)this + 15, &SRWLock);
  v5 = *((_QWORD *)this + 16) != 0LL;
  v6 = *((_QWORD *)this + 17);
  if ( *v3 != v6 )
  {
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 17));
    v7 = *v3;
    *v3 = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  SRWLock = (PSRWLOCK)WindowsGetStringRawBuffer(*((HSTRING *)this + 9), 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::GetSubscribedContentActivity::Start<unsigned short const *,bool &,bool &>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::GetSubscribedContentActivity *)v29);
  if ( !v5 )
  {
    SRWLock = 0LL;
    try
    {
      ContentManagement::TargetedContent::CreateAppServiceConnection(
        (struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *)&v24,
        0,
        *((HSTRING *)this + 9),
        0LL);
      v8 = (PSRWLOCK *)ContentManagement::TargetedContent::SendAppServiceMessageAndWaitForResponse(
                         &SystemTimeAsFileTime,
                         0,
                         *((HSTRING *)this + 9),
                         0LL,
                         (__int64)v24);
      v9 = 0LL;
      if ( &SRWLock != v8 )
      {
        v9 = *v8;
        *v8 = 0LL;
      }
      SRWLock = v9;
      v10 = SystemTimeAsFileTime;
      if ( SystemTimeAsFileTime )
      {
        SystemTimeAsFileTime = 0LL;
        (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v10 + 16LL))(v10);
      }
      v11 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v11->Ptr + 2))(v11);
      }
    }
    catch ( ... )
    {
      if ( a3 )
        throw;
      v20 = v25;
      wil::srwlock::lock_exclusive(v25 + 19, &v25);
      LODWORD(v20[21].Ptr) = 0;
      ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock((ContentManagement::TargetedContent::SubscriptionImpl *)v20);
      if ( v25 )
        ReleaseSRWLockExclusive(v25);
      v9 = SRWLock;
      v3 = v27;
      goto LABEL_30;
    }
    ContentManagement::TargetedContent::SubscriptionImpl::CancelContentUpdateRetry(this);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v12 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 15, &v24);
    if ( *((_QWORD *)this + 16) < v12 )
    {
      *((_QWORD *)this + 16) = v12;
      v13 = (RTL_SRWLOCK **)ContentManagement::TargetedContent::CollectionFromAppServiceResponse(
                              &SystemTimeAsFileTime,
                              (__int64)v9);
      v14 = 0LL;
      if ( &v25 != v13 )
      {
        v14 = *v13;
        *v13 = 0LL;
      }
      v15 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v14;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v16 = SystemTimeAsFileTime;
      if ( SystemTimeAsFileTime )
      {
        SystemTimeAsFileTime = 0LL;
        (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v16 + 16LL))(v16);
      }
    }
    v17 = *((_QWORD *)this + 17);
    if ( *v3 != v17 )
    {
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v18 = *v3;
      *v3 = v17;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v24 )
      ReleaseSRWLockExclusive(v24);
LABEL_30:
    if ( v9 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 2))(v9);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
  v29[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::GetSubscribedContentActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
  return v3;
}
