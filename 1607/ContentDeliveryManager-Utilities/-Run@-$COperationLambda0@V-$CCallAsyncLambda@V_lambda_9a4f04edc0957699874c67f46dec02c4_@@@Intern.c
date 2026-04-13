/*
 * XREFs of ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_9a4f04edc0957699874c67f46dec02c4_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@23@@Z @ 0x180044700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     ?Set@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAJPEAUITargetedContentCollection@TargetedContent@ContentManagement@@@Z @ 0x1800414C4 (-Set@-$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_9a4f04edc0957699874c67f46dec02c4_>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>>::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  __int64 *ContentAndQueueRetryIfAppropriate; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 1 && a3 >= 0 )
  {
    ContentAndQueueRetryIfAppropriate = ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate(
                                          *(ContentManagement::TargetedContent::SubscriptionImpl **)(a1 + 8),
                                          v10,
                                          0);
    v6 = Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>::Set(
           a4,
           *ContentAndQueueRetryIfAppropriate);
    v7 = v10[0];
    v8 = v6;
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v8 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v8);
  }
  else
  {
    return (unsigned int)a3;
  }
  return (unsigned int)v8;
}
