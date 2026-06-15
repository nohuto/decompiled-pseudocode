/*
 * XREFs of ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x180029E18
 * Callers:
 *     s_mmeNotifyDefaultDeviceChanged @ 0x180079F70 (s_mmeNotifyDefaultDeviceChanged.c)
 *     s_mmeNotifyDeviceAdded @ 0x180079FF0 (s_mmeNotifyDeviceAdded.c)
 *     s_mmeNotifyDeviceRemoved @ 0x18007A050 (s_mmeNotifyDeviceRemoved.c)
 *     s_mmeNotifyDeviceStateChanged @ 0x18007A0B0 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckRpcClientTokenMembershipsDisjunctive(void *a1, void *a2, int *a3)
{
  PSID v3; // rsi
  PSID v4; // rbp
  unsigned int v6; // ebx

  v3 = AudioEndpointBuilderSid;
  v4 = AudiosrvSid;
  v6 = 0;
  if ( !RpcImpersonateClient(0LL) )
  {
    v6 = CheckTokenMembership(0LL, v4, a3);
    if ( v6 && !*a3 )
      v6 = CheckTokenMembership(0LL, v3, a3);
    RpcRevertToSelf();
  }
  return v6;
}
