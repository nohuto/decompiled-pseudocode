/*
 * XREFs of RmpQueryRpcClientInformation @ 0x18001EC88
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x18001D460 (RmgrSrv_RegisterWithServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18002506C (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x180040730 (RmCoreRpcSrvConnectToRmServer.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpQueryRpcClientInformation(RPC_BINDING_HANDLE ClientBinding, PSID DestinationSid, _DWORD *a3)
{
  HANDLE CurrentThread; // rax
  NTSTATUS v7; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-C0h] BYREF
  PSID TokenInformation[12]; // [rsp+B0h] [rbp-50h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
  {
LABEL_14:
    v7 = -1073741823;
    goto LABEL_11;
  }
  CurrentThread = GetCurrentThread();
  v7 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( v7 >= 0 )
  {
    if ( !DestinationSid )
      goto LABEL_6;
    v7 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    if ( v7 >= 0 )
    {
      RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
LABEL_6:
      if ( !RpcRevertToSelf() )
      {
        if ( !a3 )
        {
LABEL_10:
          v7 = 0;
          goto LABEL_11;
        }
        memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
        RpcCallAttributes[0] = 2;
        RpcCallAttributes[1] = 16;
        if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
        {
          *a3 = RpcCallAttributes[16];
          goto LABEL_10;
        }
      }
      goto LABEL_14;
    }
  }
  RpcRevertToSelf();
LABEL_11:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)v7;
}
