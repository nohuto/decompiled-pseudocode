/*
 * XREFs of RmgrSrv_RmAccessCheckOnCaller @ 0x180028690
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheckOnCaller(RPC_BINDING_HANDLE ClientBinding, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  unsigned int v5; // ebx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-75h] BYREF
  int v16; // [rsp+38h] [rbp-71h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-69h] BYREF
  char v18[56]; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v19; // [rsp+80h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+7h] BYREF
  unsigned int *v21; // [rsp+D0h] [rbp+27h]
  int v22; // [rsp+D8h] [rbp+2Fh]
  int v23; // [rsp+DCh] [rbp+33h]
  int *v24; // [rsp+E0h] [rbp+37h]
  int v25; // [rsp+E8h] [rbp+3Fh]
  int v26; // [rsp+ECh] [rbp+43h]

  v14 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v18, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v5 = v19;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v4, 2uLL) )
  {
    v23 = 0;
    v26 = 0;
    v21 = &v15;
    v24 = &v16;
    v15 = v5;
    v22 = 4;
    v16 = a2;
    v25 = 4;
    TlgWrite(v6, &unk_18003ED71, v7, v8, 4u, &pData);
  }
  v9 = ExecutionModel::ResourceManager::RmAccessCheckEx(g_pResourceManager, a2, v5, 1);
  LODWORD(v10) = v9;
  v14 = v9;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v9, 2uLL) )
  {
    v23 = 0;
    v21 = &v14;
    v22 = 4;
    TlgWrite(v10, &unk_18003E9EB, v11, v12, 3u, &pData);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
