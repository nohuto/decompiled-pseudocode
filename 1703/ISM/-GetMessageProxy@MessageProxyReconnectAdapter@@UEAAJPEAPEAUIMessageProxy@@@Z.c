/*
 * XREFs of ?GetMessageProxy@MessageProxyReconnectAdapter@@UEAAJPEAPEAUIMessageProxy@@@Z @ 0x180095B70
 * Callers:
 *     <none>
 * Callees:
 *     Template_sqq @ 0x1800957D4 (Template_sqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::GetMessageProxy(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = (struct IMessageProxy *)*((_QWORD *)this + 8);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      Template_sqq((__int64)this, 0LL, "MessageProxyReconnectAdapter::GetMessageProxy", 95, 87);
  }
  return v2;
}
