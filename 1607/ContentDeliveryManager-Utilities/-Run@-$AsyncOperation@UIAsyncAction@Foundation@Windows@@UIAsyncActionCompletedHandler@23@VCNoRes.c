/*
 * XREFs of ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180015DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180016B74 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+18h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+20h] BYREF

  v9 = 0;
  v1 = *(_DWORD *)(a1 - 128);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v1, -2);
  if ( v10 )
  {
    v3 = *(_DWORD *)(a1 - 128);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v3, -2);
    if ( v11 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 - 124), v9);
    if ( *(_QWORD *)(a1 - 136) )
      SetRestrictedErrorInfo();
    v4 = v9;
    if ( (v9 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v9 = -2147023673;
    }
  }
  else
  {
    v4 = v9;
  }
  v5 = a1 - 176;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v5 + 224));
  if ( (_DWORD)result == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v5 + 232) + 8LL))(
           *(_QWORD *)(v5 + 232),
           1LL,
           v4,
           v5 + 256);
    if ( v7 >= 0 && *(_BYTE *)(v5 + 265) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 248), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v8 = *(unsigned int *)(v5 + 252);
    }
    else
    {
      v8 = (unsigned int)v7;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
             v5,
             v8);
  }
  return result;
}
