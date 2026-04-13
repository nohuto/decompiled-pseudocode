/*
 * XREFs of ?PutOnProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUINilDelegate@23@@Z @ 0x18001C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x18001F5E8 (--$Initialize@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnProgress(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  void (__fastcall *v6)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rbx
  GUID v8; // [rsp+30h] [rbp-18h] BYREF
  signed __int32 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 40);
  v9 = -2;
  _InterlockedCompareExchange(&v9, v2, -2);
  if ( v9 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v5 = 0;
    Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Initialize<Windows::Internal::INilDelegate>(a1 + 104);
    if ( a2 )
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
    if ( Microsoft::WRL::gCausality )
    {
      v6 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
      v8 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v6(Microsoft::WRL::gCausality, 2LL, 2LL, &v8, a1, 0);
    }
  }
  return v5;
}
