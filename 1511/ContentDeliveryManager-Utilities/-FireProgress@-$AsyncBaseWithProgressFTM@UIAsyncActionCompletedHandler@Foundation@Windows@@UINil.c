/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001E8C0
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18001B9F0 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000A340 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18000A418 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001F134 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??1?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@QEAA@XZ @ 0x18001F1E4 (--1-$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@QEAA@XZ.c)
 *     ??$As@UIUnknown@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001F7C4 (--$As@UIUnknown@@@-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIUnknown@@@.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FB10 (-CopyLocal@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GU.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct IRpcOptions *v7; // rdi
  unsigned int v8; // eax
  struct IUnknown *v9; // rdi
  _QWORD *v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h]
  GUID v13; // [rsp+40h] [rbp-20h] BYREF
  LPSTREAM ppstm[2]; // [rsp+50h] [rbp-10h] BYREF
  struct IUnknown *v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  struct IRpcOptions *v17; // [rsp+A8h] [rbp+48h] BYREF

  v12 = -2LL;
  v4 = 0;
  v11 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v5 = 0LL;
  v16 = 0LL;
  if ( a1[13] )
  {
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<IUnknown>(&v11, &v16) >= 0 )
    {
      v15 = 0LL;
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal(a1 + 13, v6, &v15) >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v13 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, _QWORD *, int, _QWORD *, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
            Microsoft::WRL::gCausality,
            1LL,
            2LL,
            &v13,
            a1,
            1,
            v11,
            v12);
        }
        v17 = 0LL;
        RpcOptionsHelper::GetRpcOptions(v15, &v17);
        v7 = v17;
        BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(ppstm);
        v8 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v15->lpVtbl[1].QueryInterface)(v15, v16, a2);
        v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v8,
               (__int64)v15);
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            1LL,
            2LL,
            1LL);
        AutoStubBias<IUnknown,Windows::Internal::INilDelegate>::~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>(ppstm);
        if ( v7 )
          ((void (__fastcall *)(struct IRpcOptions *))v7->lpVtbl->Release)(v7);
      }
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      }
    }
    v5 = v16;
  }
  if ( v5 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return v4;
}
