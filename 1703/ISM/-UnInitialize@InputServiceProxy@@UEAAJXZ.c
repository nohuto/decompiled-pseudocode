/*
 * XREFs of ?UnInitialize@InputServiceProxy@@UEAAJXZ @ 0x180088580
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180095924 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::UnInitialize(InputServiceProxy *this)
{
  __int64 v2; // rcx
  MessageProxyReconnectAdapter *v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 5);
  if ( v3 )
    MessageProxyReconnectAdapter::Dispose(v3);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
