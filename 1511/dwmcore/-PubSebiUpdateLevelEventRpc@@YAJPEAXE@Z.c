/*
 * XREFs of ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18001CAB4
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18007BAE0 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18007E754 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x18006A000 (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x18006A2B0 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall PubSebiUpdateLevelEventRpc(struct _SEB_RPC_PUBLISH_DATA *a1, unsigned __int8 a2)
{
  ContextTable *v4; // rcx
  int RpcBindingHandle; // ebx
  void *v6; // rbx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
  {
    LOWORD(RpcBindingHandle) = 87;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v8);
  if ( !RpcBindingHandle )
  {
    v6 = ContextTable::Find(v4, a1);
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
        goto LABEL_11;
      }
      if ( *((_DWORD *)a1 + 3) != 1 )
      {
LABEL_9:
        --*((_DWORD *)a1 + 3);
LABEL_10:
        RpcBindingHandle = 0;
        goto LABEL_11;
      }
    }
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       1u,
                                       0LL,
                                       v8,
                                       a2,
                                       v6).Pointer;
    if ( RpcBindingHandle )
    {
LABEL_11:
      RtlReleaseSRWLockExclusive(a1);
      *((_DWORD *)a1 + 2) = 0;
      goto LABEL_12;
    }
    if ( !a2 )
      goto LABEL_9;
LABEL_15:
    ++*((_DWORD *)a1 + 3);
    goto LABEL_10;
  }
LABEL_12:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
