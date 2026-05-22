/*
 * XREFs of ?OnConnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180095BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnConnected(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 5) + 32LL))(
             *((_QWORD *)this + 5),
             a2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -2147024882 )
      MEMORY[0] = 114;
    MEMORY[0] = 114;
  }
  return result;
}
