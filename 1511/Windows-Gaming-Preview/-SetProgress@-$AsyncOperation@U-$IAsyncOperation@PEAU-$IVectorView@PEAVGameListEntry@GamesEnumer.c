/*
 * XREFs of ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18000B560
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateBias@?$BiasHelper@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@$00@@SA?AV?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@PEAUIRpcOptions@@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@_N@56@@Z @ 0x18000D038 (-CreateBias@-$BiasHelper@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHa.c)
 *     ??1?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@QEAA@XZ @ 0x18000D0E8 (--1-$AutoStubBias@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@_.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D63C (-CopyLocal@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000E584 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18000E65C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::SetProgress(
        __int64 a1,
        unsigned int a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  struct IRpcOptions *v6; // rdi
  unsigned int v7; // eax
  struct IUnknown *v8; // rdi
  LPSTREAM ppstm[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF
  struct IRpcOptions *v13; // [rsp+88h] [rbp+48h] BYREF

  v3 = (_QWORD *)(a1 + 8);
  if ( a1 != -8 )
    (*(void (__fastcall **)(__int64))(*v3 + 8LL))(a1 + 8);
  v4 = 0LL;
  v12 = 0LL;
  if ( v3[13] )
  {
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v3)(v3, &GUID_00000000_0000_0000_c000_000000000046, &v12) >= 0 )
    {
      v11 = 0LL;
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal(v3 + 13, v5, &v11) >= 0 )
      {
        v13 = 0LL;
        RpcOptionsHelper::GetRpcOptions(v11, &v13);
        v6 = v13;
        BiasHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1>::CreateBias(ppstm);
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v11->lpVtbl[1].QueryInterface)(v11, v12, a2);
        Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(v7, v11, v3[14]);
        AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>(ppstm);
        if ( v6 )
          ((void (__fastcall *)(struct IRpcOptions *))v6->lpVtbl->Release)(v6);
      }
      v8 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
      }
    }
    v4 = v12;
  }
  if ( v4 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return 0LL;
}
