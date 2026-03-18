/*
 * XREFs of ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18018B078
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180073BC0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800B8CA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800B81FC (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1800B9968 (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 */

__int64 __fastcall PubSebiUpdateLevelEventRpc(struct _SEB_RPC_PUBLISH_DATA *a1, unsigned __int8 a2)
{
  int RpcBindingHandle; // ebx
  ContextTable *v5; // rcx
  __int64 v6; // rbx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
  {
    LOWORD(RpcBindingHandle) = 87;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v8);
  if ( !RpcBindingHandle )
  {
    v6 = ContextTable::Find(v5, a1);
    if ( !v6 )
    {
      LOWORD(RpcBindingHandle) = 6;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    if ( a2 )
    {
      if ( *((_DWORD *)a1 + 3) )
        goto LABEL_15;
    }
    else
    {
      if ( !*((_DWORD *)a1 + 3) )
      {
        RpcBindingHandle = 50;
LABEL_17:
        RtlReleaseSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = 0;
        goto LABEL_18;
      }
      if ( *((_DWORD *)a1 + 3) != 1 )
        goto LABEL_14;
    }
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       1u,
                                       0LL,
                                       v8,
                                       a2,
                                       v6).Pointer;
    if ( RpcBindingHandle )
      goto LABEL_17;
    if ( !a2 )
    {
LABEL_14:
      --*((_DWORD *)a1 + 3);
LABEL_16:
      RpcBindingHandle = 0;
      goto LABEL_17;
    }
LABEL_15:
    ++*((_DWORD *)a1 + 3);
    goto LABEL_16;
  }
LABEL_18:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
