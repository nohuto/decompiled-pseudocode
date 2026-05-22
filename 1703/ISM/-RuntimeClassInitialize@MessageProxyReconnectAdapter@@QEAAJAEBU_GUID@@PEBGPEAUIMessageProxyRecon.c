/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800959E4
 * Callers:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x18008839C (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 * Callees:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095DC4 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095FEC (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  HRESULT result; // eax
  HSTRING *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx

  if ( !a3 )
  {
    result = -2147024809;
    MEMORY[0] = 63;
    return result;
  }
  if ( !a4 )
  {
    result = -2147024809;
    MEMORY[0] = 64;
    return result;
  }
  v8 = (HSTRING *)((char *)this + 88);
  v9 = -1LL;
  *(struct _GUID *)((char *)this + 24) = *a2;
  do
    ++v9;
  while ( a3[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    result = -2147024362;
LABEL_12:
    MEMORY[0] = 67;
    return result;
  }
  WindowsDeleteString(*v8);
  *v8 = 0LL;
  result = WindowsCreateString(a3, v9, v8);
  if ( result < 0 )
  {
    if ( result == -2147024882 )
      MEMORY[0] = 67;
    goto LABEL_12;
  }
  *((_QWORD *)this + 6) = a4;
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  result = CoreUICreate((char *)this + 72);
  if ( result >= 0 )
  {
    v12 = *((_QWORD *)this + 7);
    if ( v12 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    result = CoreUIFactoryCreate((char *)this + 56);
    if ( result >= 0 )
    {
      result = MessageProxyReconnectAdapter::AttemptPullProxy(this);
      if ( result >= 0 )
      {
        if ( *((_QWORD *)this + 8) )
          return result;
        result = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this);
        if ( result >= 0 )
          return result;
        v11 = 77;
      }
      else
      {
        v11 = 73;
      }
    }
    else
    {
      v11 = 71;
    }
  }
  else
  {
    v11 = 70;
  }
  if ( result == -2147024882 )
    MEMORY[0] = v11;
  MEMORY[0] = v11;
  return result;
}
