/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001C260
 * Callers:
 *     ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001BA10 (-put_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x18001F698 (--$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAc.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int v5; // esi
  void (__fastcall *v6)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rbx
  signed __int32 v7; // ecx
  signed __int32 v9[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v10; // [rsp+30h] [rbp-28h] BYREF
  signed __int32 v11; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 12)) == 1 )
  {
    v5 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::Initialize<Windows::Foundation::IAsyncActionCompletedHandler>(a1 + 88);
    if ( v5 >= 0 )
    {
      if ( Microsoft::WRL::gCausality )
      {
        v6 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
        v10 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        v6(Microsoft::WRL::gCausality, 2LL, 2LL, &v10, a1, 0);
      }
      if ( a2 )
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedOr(v9, 0);
      v7 = *(_DWORD *)(a1 + 40);
      v12 = -2;
      _InterlockedCompareExchange(&v12, v7, -2);
      if ( (unsigned int)(v12 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)v5;
}
