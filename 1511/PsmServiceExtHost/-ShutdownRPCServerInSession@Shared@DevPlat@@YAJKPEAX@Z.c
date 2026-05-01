/*
 * XREFs of ?ShutdownRPCServerInSession@Shared@DevPlat@@YAJKPEAX@Z @ 0x180053DF8
 * Callers:
 *     ?IntializePolicyEngineRpcServer@@YAJXZ @ 0x180022E20 (-IntializePolicyEngineRpcServer@@YAJXZ.c)
 *     ShutdownGameConfigRpcServer @ 0x18004885C (ShutdownGameConfigRpcServer.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     Template_zq @ 0x180053EC0 (Template_zq.c)
 */

__int64 __fastcall DevPlat::Shared::ShutdownRPCServerInSession(DevPlat::Shared *this, void *a2, void *a3)
{
  unsigned int v3; // ebx
  RPC_STATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  bool v9; // sf
  RPC_BINDING_VECTOR *BindingVector; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+3Ch] [rbp-1Ch]
  int v16; // [rsp+44h] [rbp-14h]

  v12 = 0;
  v3 = 0;
  v14 = 0;
  BindingVector = 0LL;
  v15 = 0LL;
  v16 = 0;
  v13 = 0LL;
  v5 = RpcServerInqBindings(&BindingVector);
  v8 = v5 == 0;
  v9 = v5 < 0;
  if ( v5
    || (RpcEpUnregister(a2, BindingVector, 0LL),
        RpcBindingVectorFree(&BindingVector),
        v5 = RpcServerUnregisterIfEx(a2, 0LL, 1),
        v8 = v5 == 0,
        v9 = v5 < 0,
        v5) )
  {
    if ( v9 || v8 )
      v3 = v5;
    else
      v3 = (unsigned __int16)v5 | 0x80070000;
    if ( (v3 & 0x80000000) != 0 && (Microsoft_Windows_AppModel_ExecEnableBits & 0x40000000) != 0 )
      Template_zq(v7, v6, L"DevPlat::Shared::ShutdownRPCServerInSession", v3);
  }
  return v3;
}
