/*
 * XREFs of ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001D230
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180008620 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001C3F0 (-FireCompletion@-$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U-$AsyncCaus.c)
 *     ??$WrapWithTask@V_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@AEBV_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@Z @ 0x180021124 (--$WrapWithTask@V_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // r9
  int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // r14
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF
  __int64 v14; // [rsp+88h] [rbp+10h]

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 208)) == 2 )
  {
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( *(int *)(v3 + 4) <= 4 )
      goto LABEL_12;
    v14 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v12[0] = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v12[1] = a1 - 8;
    v4 = *(_QWORD *)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_b1467fd2d93fa822d1c414bdb8d88015_>(&v13, v12);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, v6, v4);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( a1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    }
    if ( v7 < 0 )
    {
LABEL_12:
      ++*(_DWORD *)(v3 + 4);
      v9 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(a1);
      if ( *(_QWORD *)(a1 + 104) )
      {
        v10 = *(_QWORD *)(a1 + 104);
        if ( v10 )
        {
          *(_QWORD *)(a1 + 104) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      v2 = v9;
      --*(_DWORD *)(v3 + 4);
    }
  }
  return v2;
}
