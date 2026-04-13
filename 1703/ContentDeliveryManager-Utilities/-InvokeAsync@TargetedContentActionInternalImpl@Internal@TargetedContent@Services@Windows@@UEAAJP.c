/*
 * XREFs of ?InvokeAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180042230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?InvokeOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?InvokeOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x180043F30 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH_ea_180043F30.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::InvokeAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  _QWORD *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rsi
  signed int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  v12[2] = 0;
  v12[0] = 3;
  v12[1] = 130;
  v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
  if ( v4 )
  {
    *v4 = off_18007CB10;
    v4[1] = (char *)this - 40;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = 0LL;
  v15 = L"Windows.Foundation.IAsyncAction";
  v14 = 1;
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( !v5 )
    goto LABEL_12;
  ((void (__fastcall *)(__int64 *, _DWORD *, const wchar_t **, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::InvokeOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
    &v16,
    v12,
    &v15,
    &v14);
  v8 = v16;
  v6 = v16 == 0 ? 0x8007000E : 0;
  if ( !v16 )
    goto LABEL_8;
  v9 = v16 + 8;
  *(_QWORD *)(v16 + 232) = v5;
  v5 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 8) + 104LL))(v9, v7);
  if ( v6 >= 0 )
  {
    v10 = v8;
    v8 = 0LL;
    *a2 = (struct Windows::Foundation::IAsyncAction *)((v10 + 152) & -(__int64)(v10 != 0));
LABEL_8:
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
LABEL_12:
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x8D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
