/*
 * XREFs of RmtSrv_RM_ReadSettings @ 0x180031430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmtSrv_RM_ReadSettings(RPC_BINDING_HANDLE ClientBinding)
{
  _DWORD RpcCallAttributes[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v4[104]; // [rsp+28h] [rbp-80h] BYREF

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v4, 0, sizeof(v4));
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)g_pProxy + 7) + 256LL))(*((_QWORD *)g_pProxy + 7));
}
