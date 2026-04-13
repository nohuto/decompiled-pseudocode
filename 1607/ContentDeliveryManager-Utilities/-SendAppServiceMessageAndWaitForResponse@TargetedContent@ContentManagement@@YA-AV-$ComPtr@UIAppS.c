/*
 * XREFs of ?SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceResponse@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003F274
 * Callers:
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     _lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator() @ 0x18004138C (_lambda_a8dac312d343c3f34a0a00c8a64736dd_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@IAEAVRequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceResponse@678@PEAW4AppServiceResponseStatus@678@@Z @ 0x18003EF0C (-AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedConte.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$Start@IPEBGPEBG@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAI$$QEAPEBG1@Z @ 0x180042F84 (--$Start@IPEBGPEBG@RequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetr.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ContentManagement::TargetedContent::SendAppServiceMessageAndWaitForResponse(
        _QWORD *a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        __int64 a5)
{
  int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  char v13; // r8
  char v14; // dl
  int v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp-B0h]
  PCWSTR v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  _QWORD *v20; // [rsp+68h] [rbp-98h]
  _QWORD v21[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v19 = -2LL;
  v20 = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v18 = WindowsGetStringRawBuffer(a3, 0LL);
  v16[1] = a2;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::Start<unsigned int,unsigned short const *,unsigned short const *>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity *)v21);
  v9 = 3;
  v16[0] = 3;
  *a1 = 0LL;
  v16[2] = 1;
  v10 = 0;
  while ( v10 < 3 )
  {
    v11 = *a1;
    if ( *a1 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = ContentManagement::TargetedContent::AttemptSendAppServiceAndWaitForResponse(
            a2,
            a3,
            a4,
            a5,
            v10,
            (__int64)v21,
            a1,
            v16);
    v9 = v16[0];
    if ( v12 == -2147023269 && v16[0] == 1 )
    {
      v13 = 1;
LABEL_10:
      v14 = 0;
      goto LABEL_11;
    }
    v13 = 0;
    if ( v12 >= 0 )
      goto LABEL_10;
    v14 = 1;
LABEL_11:
    if ( v14 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    ++v10;
    if ( !v13 )
      break;
  }
  if ( v9 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)0x8007065BLL);
    __debugbreak();
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
  v21[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RequestSubscribedContentFromAppServiceActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return a1;
}
