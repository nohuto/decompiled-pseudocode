/*
 * XREFs of ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800960B4
 * Callers:
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180095924 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095DC4 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StopConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
    if ( v2 >= 0 )
    {
      v4 = *((_QWORD *)this + 10);
      if ( v4 )
      {
        *((_QWORD *)this + 10) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    else
    {
      if ( v2 == -2147024882 )
        MEMORY[0] = 337;
      MEMORY[0] = 337;
    }
  }
  return (unsigned int)v2;
}
