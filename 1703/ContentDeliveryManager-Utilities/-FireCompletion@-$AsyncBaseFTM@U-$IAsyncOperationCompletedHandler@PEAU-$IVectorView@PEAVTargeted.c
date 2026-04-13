/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18004A8C0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18004B0B0 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18004B250 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentT.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18004BBEC (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTrigger.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000637C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180006450 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?CreateBias@?$BiasHelper@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@$00@@SA?AV?$AutoStubBias@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@@@PEAUIRpcOptions@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@56@@Z @ 0x18001D558 (-CreateBias@-$BiasHelper@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInternal.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r15d
  struct IRpcOptions *v3; // rdi
  int v4; // r14d
  unsigned int v5; // eax
  __int64 v6; // rcx
  LPSTREAM v7; // rcx
  struct IUnknown *v8; // rcx
  IUnknown *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-79h] BYREF
  IUnknown *v12; // [rsp+40h] [rbp-39h] BYREF
  struct IRpcOptions *v13[4]; // [rsp+48h] [rbp-31h] BYREF
  LPSTREAM pStm; // [rsp+68h] [rbp-11h] BYREF
  int v15; // [rsp+70h] [rbp-9h]
  GUID v16; // [rsp+80h] [rbp+7h] BYREF
  GUID v17; // [rsp+90h] [rbp+17h] BYREF
  signed __int32 v18; // [rsp+E0h] [rbp+67h] BYREF
  signed __int32 v19; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v20; // [rsp+F0h] [rbp+77h] BYREF
  struct IUnknown *v21; // [rsp+F8h] [rbp+7Fh] BYREF

  v13[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v18 = -2;
  _InterlockedCompareExchange(&v18, *(_DWORD *)(a1 + 40), -2);
  if ( !v18 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  if ( *(int *)(a1 + 104) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 8)) == 1 )
  {
    v13[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v12 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v19, *(_DWORD *)(a1 + 40), v19);
      v16 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v16,
        a1,
        v19);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, IUnknown **))a1)(
           a1,
           &GUID_6c200718_e9a6_597e_84e2_fb5c63be8174,
           &v12) >= 0 )
    {
      v20 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v20, *(_DWORD *)(a1 + 40), -2);
      v21 = 0LL;
      v3 = *(struct IRpcOptions **)(a1 + 88);
      v13[3] = v3;
      if ( v3 )
      {
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->AddRef)(v3);
        v4 = ((__int64 (__fastcall *)(struct IRpcOptions *, GUID *, struct IUnknown **))v3->lpVtbl->Set)(
               v3,
               &GUID_ff35ba04_0b83_5f86_aa01_90b39bdb586f,
               &v21);
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->Release)(v3);
      }
      else
      {
        v21 = 0LL;
        v4 = -2147024809;
      }
      if ( v4 >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v17 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v17,
            a1,
            0);
        }
        v13[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v21, v13);
        BiasHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,1>::CreateBias(
          &pStm,
          (__int64)v13[0],
          v12,
          (__int64)v21);
        v5 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
               v21,
               v12,
               v20);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v5,
               (__int64)v21);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 104), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v11, 0);
          v6 = *(_QWORD *)(a1 + 88);
          if ( v6 )
          {
            *(_QWORD *)(a1 + 88) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v15 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(pStm);
        }
        v7 = pStm;
        if ( pStm )
        {
          pStm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( v13[0] )
          ((void (__fastcall *)(struct IRpcOptions *))v13[0]->lpVtbl->Release)(v13[0]);
      }
      v8 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
      }
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
