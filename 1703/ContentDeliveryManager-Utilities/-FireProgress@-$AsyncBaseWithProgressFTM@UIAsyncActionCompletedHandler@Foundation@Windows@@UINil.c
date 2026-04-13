/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001D738
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18001CD40 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000637C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180006450 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?CreateBias@?$BiasHelper@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@$00@@SA?AV?$AutoStubBias@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@@@PEAUIRpcOptions@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@56@@Z @ 0x18001D558 (-CreateBias@-$BiasHelper@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInternal.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001DFE4 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@I_ea_18001DFE4.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  unsigned int v4; // r15d
  IUnknown *v5; // rcx
  signed __int32 v6; // edx
  IUnknown *v7; // rcx
  __int64 *v8; // r14
  struct IRpcOptions *v9; // rdi
  unsigned int v10; // eax
  LPSTREAM v11; // rcx
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  volatile signed __int32 *v17; // [rsp+48h] [rbp-28h]
  LPSTREAM pStm; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  GUID v20; // [rsp+60h] [rbp-10h] BYREF
  IUnknown *v21; // [rsp+A0h] [rbp+30h] BYREF
  struct IUnknown *v22; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v23; // [rsp+B8h] [rbp+48h] BYREF

  v16 = -2LL;
  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = 0LL;
  v21 = 0LL;
  v6 = *((_DWORD *)a1 + 32);
  if ( v6 > 0 )
  {
    do
    {
      if ( v6 == _InterlockedCompareExchange(a1 + 32, v6 + 1, v6) )
        break;
      v6 = *((_DWORD *)a1 + 32);
    }
    while ( v6 > 0 );
    if ( v6 > 0 )
    {
      v7 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( (**(int (__fastcall ***)(volatile signed __int32 *, GUID *, IUnknown **))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v21) >= 0 )
      {
        v22 = 0LL;
        v8 = (__int64 *)(a1 + 28);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    a1 + 28,
                    &v22) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v20 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, volatile signed __int32 *, int))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v20,
              a1,
              1);
          }
          v23 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v22, &v23);
          v9 = v23;
          BiasHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,1>::CreateBias(
            &pStm,
            (__int64)v23,
            v21,
            (__int64)v22);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v22->lpVtbl[1].QueryInterface)(
                  v22,
                  v21,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 (__int64)v22);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          if ( v19 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v11 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( v9 )
            ((void (__fastcall *)(struct IRpcOptions *))v9->lpVtbl->Release)(v9);
        }
        if ( _InterlockedExchangeAdd(a1 + 32, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v12 = *v8;
          if ( *v8 )
          {
            *v8 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
        v13 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
    }
    v5 = v21;
  }
  if ( v5 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
