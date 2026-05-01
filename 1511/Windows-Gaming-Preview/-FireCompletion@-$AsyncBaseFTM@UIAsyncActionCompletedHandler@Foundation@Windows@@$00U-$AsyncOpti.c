/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180019F50
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180019740 (-FireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180019D40 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18001AC5C (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 *     ?Run@?$CTaskWrapper@V_lambda_e447ac7d6730eeac4929d9ad0d3fdb95_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18001B8C0 (-Run@-$CTaskWrapper@V_lambda_e447ac7d6730eeac4929d9ad0d3fdb95_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@$00@@SA?AV?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@PEAUIRpcOptions@@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@_N@56@@Z @ 0x18000D038 (-CreateBias@-$BiasHelper@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHa.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000E584 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18000E65C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B434 (-CopyLocal@-$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r13d
  __int64 *v3; // r12
  __int64 v4; // rdx
  struct IRpcOptions *v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // r14
  LPSTREAM v8; // r14
  struct IUnknown *v9; // rsi
  IUnknown *v10; // rsi
  struct IRpcOptions *v12[3]; // [rsp+20h] [rbp-30h] BYREF
  LPSTREAM pStm; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  signed __int32 v15; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+48h] BYREF
  struct IUnknown *v17; // [rsp+A0h] [rbp+50h] BYREF
  IUnknown *v18; // [rsp+A8h] [rbp+58h] BYREF

  v12[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v15 = -2;
  _InterlockedCompareExchange(&v15, *(_DWORD *)(a1 + 40), -2);
  if ( !v15 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  v3 = (__int64 *)(a1 + 88);
  if ( *(_QWORD *)(a1 + 88) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 8)) == 1 )
  {
    v12[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v18 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, IUnknown **))a1)(
           a1,
           &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
           &v18) >= 0 )
    {
      v16 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v16, *(_DWORD *)(a1 + 40), -2);
      v17 = 0LL;
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal(
                  a1 + 88,
                  v4,
                  &v17) >= 0 )
      {
        v12[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v17, v12);
        v5 = v12[0];
        BiasHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1>::CreateBias(
          &pStm,
          (__int64)v12[0],
          v18,
          (__int64)v17);
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v17->lpVtbl[1].QueryInterface)(
               v17,
               v18,
               v16);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v6,
               (__int64)v17);
        v7 = *v3;
        if ( *v3 )
        {
          *v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( v14 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(pStm);
        }
        v8 = pStm;
        if ( pStm )
        {
          pStm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( v5 )
          ((void (__fastcall *)(struct IRpcOptions *))v5->lpVtbl->Release)(v5);
      }
      v9 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      }
    }
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
