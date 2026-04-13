/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a9cbbce96743f5d9536c5327899da8e9___ @ 0x1800155C0
 * Callers:
 *     ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18000C690 (-AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIA.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18001DC0C (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__ContentManagement::AddThumbnailToCacheAsyncActionName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a9cbbce96743f5d9536c5327899da8e9___(
        __int64 a1,
        __int64 *a2,
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
  v7 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = (void (__fastcall **)(_QWORD, __int64))off_1800772B8;
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
    goto LABEL_8;
  *(_QWORD *)(v14 + 232) = v8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
  v8 = 0LL;
  if ( (v9 & 0x80000000) == 0 )
  {
    v11 = v10;
    v10 = 0LL;
    v14 = 0LL;
    *a2 = (v11 + 152) & -(__int64)(v11 != 0);
LABEL_8:
    if ( v8 )
      (**v8)(v8, 1LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  return v9;
}
