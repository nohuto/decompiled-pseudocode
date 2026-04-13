/*
 * XREFs of ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x18001CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000A340 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?TraceOperationComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x18001ED14 (-TraceOperationComplete@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Detai.c)
 *     ??$As@UIAsyncAction@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncAction@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001F748 (--$As@UIAsyncAction@Foundation@Windows@@@-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rdi
  GUID v7; // [rsp+40h] [rbp-10h] BYREF
  signed __int32 v8; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+38h] BYREF
  __int64 v10; // [rsp+90h] [rbp+40h] BYREF
  __int64 v11; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v8 = -2;
  _InterlockedCompareExchange(&v8, *(_DWORD *)(a1 + 40), -2);
  if ( !v8 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  if ( *(_QWORD *)(a1 + 16) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 8)) == 1 )
  {
    v11 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v10 = 0LL;
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TraceOperationComplete(a1);
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncAction>(&v11, &v10) >= 0 )
    {
      v9 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 + 40), -2);
      if ( Microsoft::WRL::gCausality )
      {
        v7 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL,
          &v7,
          a1,
          0,
          -2LL);
      }
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
             *(_QWORD *)(a1 + 16),
             v10,
             v9);
      v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
             v3,
             *(_QWORD *)(a1 + 16));
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( Microsoft::WRL::gCausality )
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL);
    }
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
