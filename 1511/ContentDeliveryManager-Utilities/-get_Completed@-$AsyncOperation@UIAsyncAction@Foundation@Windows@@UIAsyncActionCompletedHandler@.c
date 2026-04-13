/*
 * XREFs of ?get_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001BA80
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyLocal@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FA6C (-CopyLocal@-$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Win.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Completed(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  signed __int32 v3; // r8d
  _QWORD *v4; // rcx
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 - 88);
  v6 = -2;
  _InterlockedCompareExchange(&v6, v3, -2);
  if ( v6 == 4 )
  {
    v2 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v4 = (_QWORD *)(a1 - 40);
    if ( *v4 )
      return (unsigned int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal(
                             v4,
                             a2,
                             a2);
  }
  return v2;
}
