/*
 * XREFs of ?PutOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18001CB10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rbx
  void (__fastcall *v8)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rbx
  signed __int32 v9; // ecx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v12; // [rsp+30h] [rbp-28h] BYREF
  signed __int32 v13; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v2, -2);
  if ( v13 == 4 )
  {
    v5 = -2147483634;
    v6 = 2147483662LL;
LABEL_16:
    RoOriginateError(v6, 0LL);
    return v5;
  }
  v5 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) != 1 )
  {
    v6 = 2147483672LL;
    v5 = -2147483624;
    goto LABEL_16;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  if ( *(_QWORD *)(a1 + 16) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  _InterlockedOr(v11, 0);
  if ( Microsoft::WRL::gCausality )
  {
    v8 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
    v12 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    v8(Microsoft::WRL::gCausality, 2LL, 2LL, &v12, a1, 0);
  }
  v9 = *(_DWORD *)(a1 + 40);
  v14 = -2;
  _InterlockedCompareExchange(&v14, v9, -2);
  if ( (unsigned int)(v14 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v5;
}
