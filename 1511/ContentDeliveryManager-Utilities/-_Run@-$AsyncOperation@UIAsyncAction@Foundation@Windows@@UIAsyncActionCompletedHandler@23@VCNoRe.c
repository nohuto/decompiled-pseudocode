/*
 * XREFs of ?_Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x18001E748
 * Callers:
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001B680 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?OnCancel@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18001B770 (-OnCancel@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VC.c)
 *     ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18001B950 (-Run@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoRes.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001E68C (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18001F26C (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 */

char __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_Run(
        __int64 a1,
        int a2,
        unsigned int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // r12
  bool v6; // cl
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( a2 == 2 )
  {
    LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 196));
    if ( (_DWORD)v3 == 1 )
    {
      v5 = a1 + 232;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 208) + 8LL))(
        *(_QWORD *)(a1 + 208),
        2LL,
        a3,
        a1 + 232);
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 204), 0xFFFFFFFF) == 1;
      LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 200));
      if ( (_DWORD)v3 == 1 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 208) + 8LL))(
          *(_QWORD *)(a1 + 208),
          1LL,
          2147943623LL,
          v5);
        LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 204), 0xFFFFFFFF);
        v7 = (_DWORD)v3 == 1;
        LOBYTE(v3) = (_BYTE)v3 - 1;
        v6 = v7;
      }
      if ( v6 )
        LOBYTE(v3) = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableStartMenuSystemPaneSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterComplete(a1);
    }
  }
  else if ( a2 == 1 )
  {
    LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 200));
    if ( (_DWORD)v3 == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 208) + 8LL))(
             *(_QWORD *)(a1 + 208),
             1LL,
             a3,
             a1 + 232);
      if ( v8 >= 0 && *(_BYTE *)(a1 + 241) )
      {
        LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 224), 0xFFFFFFFF);
        v7 = (_DWORD)v3 == 1;
        LOBYTE(v3) = (_BYTE)v3 - 1;
        if ( !v7 )
          return (char)v3;
        v9 = *(unsigned int *)(a1 + 228);
      }
      else
      {
        v9 = (unsigned int)v8;
      }
      LOBYTE(v3) = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableStartMenuSystemPaneSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
                     (volatile signed __int32 *)a1,
                     v9);
    }
  }
  return (char)v3;
}
