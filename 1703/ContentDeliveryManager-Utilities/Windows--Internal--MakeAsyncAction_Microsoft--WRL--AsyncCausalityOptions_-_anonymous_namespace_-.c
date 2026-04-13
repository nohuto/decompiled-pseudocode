/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_26f63d0bf414d36984dad0b7057c26bb___ @ 0x18003203C
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180027E50 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020BF0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreati.c)
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x180036450 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH_ea_180036450.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_26f63d0bf414d36984dad0b7057c26bb___(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v16[1] = -2LL;
  v7 = operator new(0x70uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = off_18007B770;
    v7[1] = *(_QWORD *)a4;
    v9 = *(_QWORD *)(a4 + 8);
    v7[2] = v9;
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v9);
    *((_DWORD *)v8 + 6) = *(_DWORD *)(a4 + 16);
    v8[4] = *(_QWORD *)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    *((_BYTE *)v8 + 40) = 0;
    *(_BYTE *)(a4 + 32) = 1;
    v8[6] = *(_QWORD *)(a4 + 40);
    *(_QWORD *)(a4 + 40) = 0LL;
    *((_BYTE *)v8 + 56) = 0;
    *(_BYTE *)(a4 + 48) = 1;
    v8[8] = *(_QWORD *)(a4 + 56);
    *(_QWORD *)(a4 + 56) = 0LL;
    *((_BYTE *)v8 + 72) = 0;
    *(_BYTE *)(a4 + 64) = 1;
    v8[10] = *(_QWORD *)(a4 + 72);
    *(_QWORD *)(a4 + 72) = 0LL;
    *((_BYTE *)v8 + 88) = 0;
    *(_BYTE *)(a4 + 80) = 1;
    v10 = *(_QWORD *)(a4 + 88);
    v8[12] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(_QWORD *)(a4 + 96);
    v8[13] = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v8 = 0LL;
  }
  v18 = 0;
  v16[0] = L"Windows.Foundation.IAsyncAction";
  *a2 = 0LL;
  v12 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v17,
      a1,
      v16,
      &v18);
    v13 = v17;
    v12 = v17 == 0 ? 0x8007000E : 0;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 232) = v8;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 104LL))(v13 + 8);
      v8 = 0LL;
      if ( (v12 & 0x80000000) != 0 )
      {
LABEL_15:
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 16LL))(v13 + 8);
        return v12;
      }
      v14 = v13;
      v13 = 0LL;
      v17 = 0LL;
      *a2 = (v14 + 152) & -(__int64)(v14 != 0);
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    goto LABEL_15;
  }
  return v12;
}
