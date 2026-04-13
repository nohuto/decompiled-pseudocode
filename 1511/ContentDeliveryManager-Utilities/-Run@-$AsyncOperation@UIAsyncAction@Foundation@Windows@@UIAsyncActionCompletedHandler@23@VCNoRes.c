/*
 * XREFs of ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18001B950
 * Callers:
 *     <none>
 * Callees:
 *     ?_Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x18001E748 (-_Run@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoRe.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // r8
  unsigned __int32 v6; // [rsp+30h] [rbp+10h] BYREF
  signed __int32 v7; // [rsp+38h] [rbp+18h] BYREF
  signed __int32 v8; // [rsp+40h] [rbp+20h] BYREF

  v6 = 0;
  v1 = *(_DWORD *)(a1 - 112);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( v7 )
  {
    v3 = *(_DWORD *)(a1 - 112);
    v8 = -2;
    _InterlockedCompareExchange(&v8, v3, -2);
    if ( v8 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v6, *(_DWORD *)(a1 - 108), v6);
    if ( *(_QWORD *)(a1 - 120) )
      SetRestrictedErrorInfo();
    v4 = v6;
    if ( (v6 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v6 = -2147023673;
    }
  }
  else
  {
    v4 = v6;
  }
  return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_Run(
           a1 - 160,
           1LL,
           v4);
}
