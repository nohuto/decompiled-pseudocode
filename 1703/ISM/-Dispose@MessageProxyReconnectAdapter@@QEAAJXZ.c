/*
 * XREFs of ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180095924
 * Callers:
 *     ?UnInitialize@InputServiceProxy@@UEAAJXZ @ 0x180088580 (-UnInitialize@InputServiceProxy@@UEAAJXZ.c)
 * Callees:
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800960B4 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::Dispose(MessageProxyReconnectAdapter *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
  if ( v2 < 0 )
  {
    v3 = 33;
LABEL_3:
    if ( v2 == -2147024882 )
      MEMORY[0] = v3;
    MEMORY[0] = v3;
    return (unsigned int)v2;
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 64LL))(v4, (char *)this + 8);
    if ( v2 < 0 )
    {
      v3 = 37;
      goto LABEL_3;
    }
  }
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_QWORD *)this + 6) = 0LL;
  return (unsigned int)v2;
}
