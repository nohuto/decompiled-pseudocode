/*
 * XREFs of RmpQueryRpcClientInformation @ 0x18001A044
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x180018DD0 (RmgrSrv_RegisterWithServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001F274 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180028A80 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x18002E530 (RmCoreRpcSrvConnectToRmServer.c)
 *     RmGameModeSrvRegisterForGameMode @ 0x18002E640 (RmGameModeSrvRegisterForGameMode.c)
 *     RmGameModeSrvUnregisterForGameMode @ 0x18002E690 (RmGameModeSrvUnregisterForGameMode.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpGetHostIdFromProcessToken @ 0x180018D40 (RmpGetHostIdFromProcessToken.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpQueryRpcClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  HANDLE CurrentThread; // rax
  const GUID *v9; // r8
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r9
  int HostIdFromProcessToken; // [rsp+30h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ReturnLength[4]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+50h] [rbp-B0h] BYREF
  PSID TokenInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *p_HostIdFromProcessToken; // [rsp+140h] [rbp+40h]
  int v21; // [rsp+148h] [rbp+48h]
  int v22; // [rsp+14Ch] [rbp+4Ch]

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_17;
  CurrentThread = GetCurrentThread();
  HostIdFromProcessToken = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( HostIdFromProcessToken >= 0 )
  {
    if ( !DestinationSid )
    {
LABEL_6:
      if ( a5 )
      {
        HostIdFromProcessToken = RmpGetHostIdFromProcessToken((__int64)TokenHandle, a5);
        if ( HostIdFromProcessToken < 0 )
          goto LABEL_19;
      }
      if ( !RpcRevertToSelf() )
      {
        if ( !a4 )
        {
LABEL_11:
          LODWORD(v9) = 0;
LABEL_12:
          HostIdFromProcessToken = (int)v9;
          goto LABEL_13;
        }
        memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
        RpcCallAttributes[0] = 2;
        RpcCallAttributes[1] = 16;
        if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
        {
          *a4 = RpcCallAttributes[16];
          goto LABEL_11;
        }
      }
LABEL_17:
      LODWORD(v9) = -1073741823;
      goto LABEL_12;
    }
    HostIdFromProcessToken = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, ReturnLength);
    if ( HostIdFromProcessToken >= 0 )
    {
      HostIdFromProcessToken = RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
      goto LABEL_6;
    }
  }
LABEL_19:
  RpcRevertToSelf();
  LODWORD(v9) = HostIdFromProcessToken;
LABEL_13:
  v10 = (const struct _TlgProvider_t *)TokenHandle;
  if ( TokenHandle )
  {
    CloseHandle(TokenHandle);
    LODWORD(v9) = HostIdFromProcessToken;
  }
  if ( (int)v9 < 0 && (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 1uLL) )
  {
    v22 = 0;
    p_HostIdFromProcessToken = &HostIdFromProcessToken;
    v21 = 4;
    TlgWrite(v12, &unk_18003F1B8, v9, v13, 3u, &pData);
    LODWORD(v9) = HostIdFromProcessToken;
  }
  return (unsigned int)v9;
}
