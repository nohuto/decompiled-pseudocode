/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095FEC
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800959E4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180095C30 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // ecx

  if ( *((_QWORD *)this + 8) )
    MEMORY[0] = 307;
  v2 = (_QWORD *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    MEMORY[0] = 308;
  *((_DWORD *)this + 10) = 0;
  v3 = *((_QWORD *)this + 9);
  v4 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(MessageProxyReconnectAdapter *), MessageProxyReconnectAdapter *, _QWORD *))(*(_QWORD *)v3 + 120LL))(
             v3,
             MessageProxyReconnectAdapter::s_AttemptPullProxy,
             this,
             v2);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v2 + 80LL))(*v2, 10000000LL, 10000000LL);
    if ( (int)result >= 0 )
      return result;
    v6 = 319;
  }
  else
  {
    v6 = 315;
  }
  if ( (_DWORD)result == -2147024882 )
    MEMORY[0] = v6;
  MEMORY[0] = v6;
  return result;
}
