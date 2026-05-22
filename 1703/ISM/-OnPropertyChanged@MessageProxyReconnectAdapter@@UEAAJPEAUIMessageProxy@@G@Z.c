/*
 * XREFs of ?OnPropertyChanged@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180095D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::OnPropertyChanged(
        MessageProxyReconnectAdapter *this,
        struct IMessageProxy *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, struct IMessageProxy *))(**((_QWORD **)this + 5) + 48LL))(
             *((_QWORD *)this + 5),
             a2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -2147024882 )
      MEMORY[0] = 161;
    MEMORY[0] = 161;
  }
  return result;
}
