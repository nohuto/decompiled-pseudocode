/*
 * XREFs of ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180017038 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableStartMenuSystemPaneSuggestionsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // edi
  HSTRING_HEADER *v5; // rax
  signed __int32 v7; // [rsp+40h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+48h] [rbp-50h] BYREF
  GUID v9; // [rsp+50h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+60h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 40);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( v7 == -1 && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 0, -1), v3 == v7) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           (PINIT_ONCE_FN)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InitCausality,
           0LL,
           0LL)
      && Microsoft::WRL::gCausality )
    {
      v8 = L"ContentManagement.ContentManagementService.EnableSystemPaneSuggestionsAsync";
      v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v8);
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, _QWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v9,
        a1,
        v5[1].Reserved.Reserved1,
        *(unsigned int *)(a1 + 48));
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
