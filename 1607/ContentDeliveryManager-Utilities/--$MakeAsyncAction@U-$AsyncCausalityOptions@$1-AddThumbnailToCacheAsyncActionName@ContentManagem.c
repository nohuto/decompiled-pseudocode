/*
 * XREFs of ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_78183572efa226fa22f190bba0a96e5b_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_78183572efa226fa22f190bba0a96e5b_@@@Z @ 0x18000FE74
 * Callers:
 *     ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18000A160 (-AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIA.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x180016CD0 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction<Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>,Windows::Internal::ComTaskPoolHandler,_lambda_78183572efa226fa22f190bba0a96e5b_>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v13[1] = -2LL;
  v7 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = (void (__fastcall **)(_QWORD, __int64))&Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_78183572efa226fa22f190bba0a96e5b_>,Windows::Internal::CNoResult>::`vftable';
    v7[1] = *(void (__fastcall ***)(_QWORD, __int64))a4;
    *(_QWORD *)a4 = 0LL;
    *((_BYTE *)v7 + 16) = 0;
    *(_BYTE *)(a4 + 8) = 1;
    *((_DWORD *)v7 + 6) = *(_DWORD *)(a4 + 16);
  }
  else
  {
    v8 = 0LL;
  }
  v15 = 0;
  v13[0] = L"Windows.Foundation.IAsyncAction";
  *a2 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( !v8 )
    return v9;
  ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
    &v14,
    a1,
    v13,
    &v15);
  v10 = v14;
  v9 = v14 == 0 ? 0x8007000E : 0;
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 232) = v8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
  v8 = 0LL;
  if ( (v9 & 0x80000000) == 0 )
  {
    v11 = v10;
    v10 = 0LL;
    v14 = 0LL;
    if ( v11 )
      v11 += 152LL;
    *a2 = v11;
LABEL_10:
    if ( v8 )
      (**v8)(v8, 1LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  return v9;
}
