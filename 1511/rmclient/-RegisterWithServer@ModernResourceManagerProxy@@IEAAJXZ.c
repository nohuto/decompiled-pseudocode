/*
 * XREFs of ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x1800016B4
 * Callers:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@UEAAJP6AXXZ0P6AX_K1@Z@Z @ 0x1800017B0 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@UEAAJP6AXXZ0P6AX_K1@Z@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterWithServer(ModernResourceManagerProxy *this)
{
  int Pointer; // ebx
  int v4; // [rsp+40h] [rbp-18h]

  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                            0,
                            0LL,
                            *((_QWORD *)this + 2),
                            (char *)this + 48,
                            (char *)this + 56).Pointer;
  if ( Pointer >= 0 )
  {
    if ( (int)RtlSubscribeWnfStateChangeNotification(
                (char *)this + 64,
                *((_QWORD *)this + 6),
                0LL,
                ModernResourceManagerProxy::CommitMemoryLevelChangeCallback,
                this,
                0LL,
                0,
                0,
                Pointer) >= 0
      && (int)RtlSubscribeWnfStateChangeNotification(
                (char *)this + 72,
                *((_QWORD *)this + 7),
                0LL,
                ModernResourceManagerProxy::CommitMemoryLimitChangeCallback,
                this,
                0LL,
                0,
                0,
                v4) >= 0 )
    {
      return (unsigned int)Pointer;
    }
    Pointer = -2147467259;
  }
  if ( *((_QWORD *)this + 8) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 9) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 9) = 0LL;
  }
  return (unsigned int)Pointer;
}
