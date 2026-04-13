/*
 * XREFs of ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0
 * Callers:
 *     ??1OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003BA9C (--1OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@Conten.c)
 *     ??1RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003C07C (--1RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@Con.c)
 *     ??1QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003C65C (--1QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMan.c)
 *     ??1RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003CC1C (--1RunQueuedUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManage.c)
 *     ??1SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003D1CC (--1SubscriptionContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ??1GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003E84C (--1GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManage.c)
 *     ?CreateAppServiceConnection@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEBG2@Z @ 0x18003EDA8 (-CreateAppServiceConnection@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppServiceConnect.c)
 *     ?SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceResponse@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003F274 (-SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppS.c)
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator() @ 0x1800405E0 (_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator().c)
 *     ?NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z @ 0x180040994 (-NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180025E88 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EAEC (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18003EAEC.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  void *v4; // rdi
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r8d
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 1;
  if ( !a1[38] )
    goto LABEL_12;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v3 = (volatile signed __int32 *)a1[38];
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = (void *)a1[38];
        if ( v4 )
        {
          wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v2 )
  {
LABEL_12:
    v5 = (_DWORD *)a1[6];
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      v7 = v5[18];
      if ( (int)v5[21] < 0 )
        v6 = v5[21];
      if ( v7 < 1 )
        __fastfail(7u);
      if ( (int)v5[19] >= 0 )
        v5[19] = v6;
      v5[18] = v7 - 1;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
