/*
 * XREFs of ?_Run@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x18001B11C
 * Callers:
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800191E0 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedH.c)
 *     ?OnCancel@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1800192D0 (-OnCancel@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompleted.c)
 *     ?Run@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180019470 (-Run@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandl.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800197F0 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Wind.c)
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001B018 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 */

char __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_Run(
        __int64 a1,
        int a2,
        unsigned int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v5; // r12
  bool v6; // cl
  bool v7; // zf
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  int v9; // eax
  signed __int32 v10; // r8d
  signed __int32 v11; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( a2 == 2 )
  {
    LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
    if ( (_DWORD)v3 == 1 )
    {
      v5 = a1 + 248;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
        *(_QWORD *)(a1 + 224),
        2LL,
        a3,
        a1 + 248);
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 220), 0xFFFFFFFF) == 1;
      LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
      if ( (_DWORD)v3 == 1 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
          *(_QWORD *)(a1 + 224),
          1LL,
          2147943623LL,
          v5);
        LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 220), 0xFFFFFFFF);
        v7 = (_DWORD)v3 == 1;
        LOBYTE(v3) = (_BYTE)v3 - 1;
        v6 = v7;
      }
      if ( v6 )
      {
        v8 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 224);
        if ( v8 )
          (**v8)(*(_QWORD *)(a1 + 224), 1LL);
        *(_QWORD *)(a1 + 224) = 0LL;
        if ( GetCurrentThreadId() != *(_DWORD *)(a1 + 288) )
          Windows::Internal::ComTaskPool::s_dwThreadIdReuse = GetCurrentThreadId();
        _InterlockedAdd((volatile signed __int32 *)(a1 + 232), 1u);
        LOBYTE(v3) = Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(a1 + 8);
      }
    }
  }
  else if ( a2 == 1 )
  {
    LODWORD(v3) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
    if ( (_DWORD)v3 == 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
             *(_QWORD *)(a1 + 224),
             1LL,
             a3,
             a1 + 248);
      if ( v9 >= 0 && *(_BYTE *)(a1 + 257) )
      {
        LODWORD(v3) = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFFF);
        v7 = (_DWORD)v3 == 1;
        LOBYTE(v3) = (_BYTE)v3 - 1;
        if ( !v7 )
          return (char)v3;
        v11 = *(_DWORD *)(a1 + 244);
      }
      else
      {
        v11 = v9;
      }
      LOBYTE(v3) = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
                     a1,
                     v11,
                     v10);
    }
  }
  return (char)v3;
}
