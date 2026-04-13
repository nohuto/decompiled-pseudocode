/*
 * XREFs of _lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator() @ 0x18004138C
 * Callers:
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_a8dac312d343c3f34a0a00c8a64736dd_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Z @ 0x180044690 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_a8dac312d343c3f34a0a00c8a64736dd_@@@Intern.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAppServiceConnection@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEBG2@Z @ 0x18003EDA8 (-CreateAppServiceConnection@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppServiceConnect.c)
 *     ?SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIAppServiceResponse@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@W4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003F274 (-SendAppServiceMessageAndWaitForResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIAppS.c)
 *     ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438 (-CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UITargetedCon.c)
 *     ?Set@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAUITargetedContentCollection@TargetedContent@ContentManagement@@@Z @ 0x1800414C4 (-Set@-$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_a8dac312d343c3f34a0a00c8a64736dd_::operator()(HSTRING *a1, __int64 a2)
{
  _QWORD *v4; // rax
  int v5; // eax
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    ContentManagement::TargetedContent::CreateAppServiceConnection(
      (struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *)&v13,
      1,
      0LL,
      *a1);
    ContentManagement::TargetedContent::SendAppServiceMessageAndWaitForResponse(&v12, 1, 0LL, *a1, v13);
    v4 = ContentManagement::TargetedContent::CollectionFromAppServiceResponse(&v14, v12);
    v5 = Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>::Set(
           a2,
           *v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x25B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v5);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25D,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targeted"
                                    "contentsubscription.cpp",
                           v6);
  }
  return 0LL;
}
