/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001C2E0
 * Callers:
 *     ?get_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001CCD0 (-get_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     ??$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x18001DD2C (--$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgi_ea_18001DD2C.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  signed __int32 v2; // r8d
  unsigned int v5; // edi
  signed __int32 v6; // edx
  __int64 *v7; // rsi
  __int64 v8; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 40);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 104);
    v5 = 0;
    if ( v6 > 0 )
    {
      do
      {
        if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 104), v6 + 1, v6) )
          break;
        v6 = *(_DWORD *)(a1 + 104);
      }
      while ( v6 > 0 );
      if ( v6 > 0 )
      {
        v7 = (__int64 *)(a1 + 88);
        v5 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal<Windows::Foundation::IAsyncActionCompletedHandler>(
               a1 + 88,
               a2);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 104), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v10, 0);
          v8 = *v7;
          if ( *v7 )
          {
            *v7 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
      }
    }
  }
  return v5;
}
