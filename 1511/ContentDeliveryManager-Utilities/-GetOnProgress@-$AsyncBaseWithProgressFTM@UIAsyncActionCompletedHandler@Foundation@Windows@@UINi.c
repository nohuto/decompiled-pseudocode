/*
 * XREFs of ?GetOnProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUINilDelegate@23@@Z @ 0x18001C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyLocal@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FB10 (-CopyLocal@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GU.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnProgress(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  signed __int32 v3; // r8d
  _QWORD *v4; // rcx
  signed __int32 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v3 = *(_DWORD *)(a1 + 40);
  v6 = -2;
  _InterlockedCompareExchange(&v6, v3, -2);
  if ( v6 == 4 )
  {
    v2 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v4 = (_QWORD *)(a1 + 104);
    if ( *v4 )
      Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal(v4, a2, a2);
  }
  return v2;
}
