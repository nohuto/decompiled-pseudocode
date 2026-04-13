/*
 * XREFs of _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator() @ 0x1800405E0
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800446F0 (-Run@-$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E28 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     ?NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z @ 0x180040994 (-NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$Start@PEBGAEAI@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEAI@Z @ 0x180043740 (--$Start@PEBGAEAI@RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()(RTL_SRWLOCK **a1)
{
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v3; // rcx
  int v4; // esi
  __int64 v5; // rcx
  char v7; // si
  PSRWLOCK v8; // rcx
  RTL_SRWLOCK v9; // rax
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  ContentManagement::TargetedContent::SubscriptionImpl **v14; // rbx
  const char *v15; // r9
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-188h] BYREF
  __int64 v17; // [rsp+28h] [rbp-180h] BYREF
  PVOID v18; // [rsp+30h] [rbp-178h]
  RTL_SRWLOCK *v19[3]; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v20[40]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v19[1] = (RTL_SRWLOCK *)-2LL;
  v19[0] = (RTL_SRWLOCK *)a1;
  Ptr = (*a1)[20].Ptr;
  v18 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v17 = 0LL;
    v3 = a1[1];
    if ( v3 )
    {
      v4 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, __int64 *))v3->Ptr + 3))(
             v3,
             &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2,
             &v17);
      if ( v4 < 0 )
      {
        v5 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        return (unsigned int)v4;
      }
    }
    try
    {
      SRWLock = (PSRWLOCK)WindowsGetStringRawBuffer((HSTRING)(*a1)[9].Ptr, 0LL);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity::Start<unsigned short const *,unsigned int &>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity *)v20);
      wil::srwlock::lock_shared(*a1 + 15, &SRWLock);
      v7 = (char)(*a1)[18].Ptr;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate(
        (ContentManagement::TargetedContent::SubscriptionImpl *)*a1,
        (__int64 *)&SRWLock,
        1);
      v8 = SRWLock;
      if ( SRWLock )
      {
        SRWLock = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v8->Ptr + 2))(v8);
      }
      ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersOfContentUpdate(
        (ContentManagement::TargetedContent::SubscriptionImpl *)*a1,
        v7,
        1);
      wil::srwlock::lock_exclusive(*a1 + 19, &SRWLock);
      v9.Ptr = *a1;
      if ( Ptr == (*a1)[20].Ptr )
      {
        v10 = *((_QWORD *)v9.Ptr + 20);
        if ( v10 )
        {
          *((_QWORD *)v9.Ptr + 20) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      v20[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RunQueuedUpdateRetryActivity::`vftable';
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x1B5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        v11);
      try
      {
        v14 = (ContentManagement::TargetedContent::SubscriptionImpl **)v19[0];
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)v19[0]->Ptr + 19, v19);
        if ( v18 == *((PVOID *)*v14 + 20) )
        {
          ++*((_DWORD *)*v14 + 42);
          ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock(*v14);
        }
        if ( v19[0] )
          ReleaseSRWLockExclusive(v19[0]);
      }
      catch ( ... )
      {
        LODWORD(SRWLock) = wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1C1,
                             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\target"
                                      "edcontentsubscription.cpp",
                             v15);
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 16LL))(v18);
        return (unsigned int)SRWLock;
      }
      Ptr = v18;
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return 0LL;
}
