/*
 * XREFs of ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C
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
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001B73C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EAEC (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18003EAEC.c)
 */

_QWORD *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  _QWORD *result; // rax
  __int64 v5; // rbx
  void *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  result = (_QWORD *)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  v5 = a1 + 8;
  if ( *(_DWORD *)(v5 + 24) )
  {
    if ( *(_DWORD *)(v5 + 24) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL);
    result = *(_QWORD **)v5;
    *(_DWORD *)(v5 + 24) = 0;
    if ( *result )
    {
      while ( 1 )
      {
        result = *(_QWORD **)v5;
        if ( **(_QWORD **)v5 == v5 )
          break;
        v8 = (_QWORD *)(*result + 16LL);
        *(_QWORD *)v5 = v8;
        if ( !*v8 )
          goto LABEL_14;
      }
      result = *(_QWORD **)(v5 + 16);
      **(_QWORD **)v5 = result;
    }
LABEL_14:
    *(_QWORD *)v5 = 0LL;
  }
  return result;
}
