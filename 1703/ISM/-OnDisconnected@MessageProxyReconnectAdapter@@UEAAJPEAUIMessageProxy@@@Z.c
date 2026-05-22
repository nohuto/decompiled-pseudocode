/*
 * XREFs of ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180095C30
 * Callers:
 *     <none>
 * Callees:
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095FEC (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnDisconnected(unsigned __int64 this, struct IMessageProxy *a2)
{
  int started; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  started = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(this + 56))(
              *(_QWORD *)(this + 56),
              &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
              &v9);
  if ( started >= 0 )
  {
    started = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 64LL))(
                v9,
                this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
    if ( started >= 0 )
    {
      v6 = *(_QWORD *)(this + 56);
      if ( v6 )
      {
        *(_QWORD *)(this + 56) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      started = MessageProxyReconnectAdapter::StartConnectionRetryTimer((MessageProxyReconnectAdapter *)(this - 8));
      if ( started >= 0 )
      {
        started = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**(_QWORD **)(this + 40) + 40LL))(
                    *(_QWORD *)(this + 40),
                    a2);
        if ( started >= 0 )
          goto LABEL_14;
        v5 = 140;
      }
      else
      {
        v5 = 138;
      }
    }
    else
    {
      v5 = 135;
    }
  }
  else
  {
    v5 = 133;
  }
  if ( started == -2147024882 )
    MEMORY[0] = v5;
  MEMORY[0] = v5;
LABEL_14:
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)started;
}
