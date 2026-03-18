/*
 * XREFs of PubSebRegisterRpc @ 0x1800B8008
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180073BC0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x180075708 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1800B8140 (-Add@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_D.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800B81FC (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, _QWORD *a2)
{
  int RpcBindingHandle; // ebx
  _QWORD *Heap; // rsi
  __int64 v5; // rcx
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-8h] BYREF
  __int64 v11; // [rsp+80h] [rbp+40h] BYREF
  void *v12; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v12);
  if ( RpcBindingHandle )
  {
LABEL_13:
    if ( RpcBindingHandle <= 0 )
      return (unsigned int)RpcBindingHandle;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  if ( !Heap )
  {
    LOWORD(RpcBindingHandle) = 8;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  RtlInitializeSRWLock(Heap);
  RpcBindingHandle = (unsigned int)NdrClientCall3(
                                     (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                     0,
                                     0LL,
                                     v12,
                                     a1,
                                     &v11).Pointer;
  if ( RpcBindingHandle )
    goto LABEL_12;
  v8 = v11;
  v9 = Heap;
  RtlAcquireSRWLockExclusive(&unk_1801F0218);
  v6 = 0;
  if ( !(unsigned int)ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
                        v5,
                        &v9,
                        &v8) )
    v6 = 1359;
  RtlReleaseSRWLockExclusive(&unk_1801F0218);
  RpcBindingHandle = v6;
  if ( v6 )
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       2u,
                                       0LL,
                                       v12,
                                       &v11).Pointer;
  else
    *a2 = Heap;
  if ( RpcBindingHandle )
  {
LABEL_12:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_13;
  }
  return (unsigned int)RpcBindingHandle;
}
