/*
 * XREFs of ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x180041300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@@01@@Z @ 0x180044220 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedCon.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetContentByIdAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10[2] = 0;
  v10[0] = 3;
  v10[1] = 130;
  v5 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = &Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_a8dac312d343c3f34a0a00c8a64736dd_>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>>::`vftable';
    v5[1] = a2;
  }
  v7 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _QWORD *))Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,ContentManagement::TargetedContent::TargetedContentCollection *,Windows::Internal::ComTaskPoolHandler>)(
         v10,
         a3,
         v6,
         v5);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x262,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
