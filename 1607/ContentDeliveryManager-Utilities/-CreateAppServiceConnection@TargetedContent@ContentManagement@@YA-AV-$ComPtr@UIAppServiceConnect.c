/*
 * XREFs of ?CreateAppServiceConnection@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEBG2@Z @ 0x18003EDA8
 * Callers:
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     _lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator() @ 0x18004138C (_lambda_a8dac312d343c3f34a0a00c8a64736dd_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?AttemptCreateAppServiceConnection@TargetedContent@ContentManagement@@YAJPEBG0IAEAVOpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAW4AppServiceConnectionStatus@89Windows@@@Z @ 0x18003EB78 (-AttemptCreateAppServiceConnection@TargetedContent@ContentManagement@@YAJPEBG0IAEAVOpenSubscribe.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$Start@IPEBGPEBG@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAI$$QEAPEBG1@Z @ 0x180042DD8 (--$Start@IPEBGPEBG@OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@B.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *__fastcall ContentManagement::TargetedContent::CreateAppServiceConnection(
        struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *a1,
        int a2,
        HSTRING a3,
        HSTRING a4)
{
  const unsigned __int16 *v7; // rdx
  unsigned int v8; // ebx
  ContentManagement::TargetedContent *v9; // rcx
  int v10; // eax
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h]
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp-C0h]
  PCWSTR v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+50h] [rbp-B0h]
  struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *v17; // [rsp+58h] [rbp-A8h]
  unsigned int v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v16 = -2LL;
  v17 = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v15 = WindowsGetStringRawBuffer(a3, 0LL);
  HIDWORD(v12) = a2;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity::Start<unsigned int,unsigned short const *,unsigned short const *>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *)v18);
  *(_QWORD *)a1 = 0LL;
  v13 = 1;
  LODWORD(v12) = 4;
  v8 = 0;
  do
  {
    if ( v8 >= 2 )
      break;
    if ( v8 )
      Sleep(0x1388u);
    v9 = *(ContentManagement::TargetedContent **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)a1 = 0LL;
      (*(void (__fastcall **)(ContentManagement::TargetedContent *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = ContentManagement::TargetedContent::AttemptCreateAppServiceConnection(
            v9,
            v7,
            (const unsigned __int16 *)v8++,
            (__int64)v18,
            a1,
            &v12);
  }
  while ( v10 < 0 );
  if ( (_DWORD)v12 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)0x800704D4LL);
    __debugbreak();
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
  *(_QWORD *)v18 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return a1;
}
