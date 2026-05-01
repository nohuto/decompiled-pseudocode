/*
 * XREFs of ?FireCompletion@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180018A10
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800109F8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800191F0 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U-$A.c)
 *     ??$WrapWithTask@V_lambda_c97a0bd6a1809915b60a24ba2aec1f06_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@AEBV_lambda_c97a0bd6a1809915b60a24ba2aec1f06_@@@Z @ 0x18001B794 (--$WrapWithTask@V_lambda_c97a0bd6a1809915b60a24ba2aec1f06_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  IUnknown *v4; // rbx
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
    v4 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_c97a0bd6a1809915b60a24ba2aec1f06_>(
                         &v13,
                         v12);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v6, v4);
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
      v9 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(a1);
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
