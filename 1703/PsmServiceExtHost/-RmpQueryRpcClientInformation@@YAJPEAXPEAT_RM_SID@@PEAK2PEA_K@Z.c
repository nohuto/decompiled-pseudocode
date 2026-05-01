/*
 * XREFs of ?RmpQueryRpcClientInformation@@YAJPEAXPEAT_RM_SID@@PEAK2PEA_K@Z @ 0x18000218C
 * Callers:
 *     RmgrSrv_RegisterWithServer @ 0x180002BA0 (RmgrSrv_RegisterWithServer.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x18001FDC0 (RmCoreRpcSrvConnectToRmServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x18001FE60 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180029750 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpGetHostIdFromProcessToken@@YAJPEAXPEA_K@Z @ 0x18001875C (-RmpGetHostIdFromProcessToken@@YAJPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpQueryRpcClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5)
{
  HANDLE CurrentThread; // rax
  const GUID *v9; // r8
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r9
  NTSTATUS HostIdFromProcessToken; // [rsp+30h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ReturnLength[4]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+50h] [rbp-B0h] BYREF
  PSID TokenInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  NTSTATUS *p_HostIdFromProcessToken; // [rsp+140h] [rbp+40h]
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
        HostIdFromProcessToken = RmpGetHostIdFromProcessToken(TokenHandle, a5);
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
  if ( (int)v9 < 0 && (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v10, 1uLL) )
  {
    v22 = 0;
    p_HostIdFromProcessToken = &HostIdFromProcessToken;
    v21 = 4;
    TlgWrite(v12, &unk_18003F834, v9, v13, 3u, &pData);
    LODWORD(v9) = HostIdFromProcessToken;
  }
  return (unsigned int)v9;
}
