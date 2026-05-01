/*
 * XREFs of RmgrSrv_SHGetResourceManagementValue @ 0x180028C00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002C728 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 */

__int64 __fastcall RmgrSrv_SHGetResourceManagementValue(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        unsigned __int64 *a3)
{
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int ResourceManagementValue; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v15; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-81h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v19[56]; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v20; // [rsp+80h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-9h] BYREF
  int *v22; // [rsp+D0h] [rbp+17h]
  int v23; // [rsp+D8h] [rbp+1Fh]
  int v24; // [rsp+DCh] [rbp+23h]
  unsigned __int64 *v25; // [rsp+E0h] [rbp+27h]
  int v26; // [rsp+E8h] [rbp+2Fh]
  int v27; // [rsp+ECh] [rbp+33h]

  v15 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v19, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( a3 )
  {
    v8 = v20;
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v6, 2uLL) )
    {
      v24 = 0;
      v27 = 0;
      v22 = (int *)&v16;
      v25 = (unsigned __int64 *)&v17;
      v16 = v8;
      v23 = 4;
      v17 = a2;
      v26 = 4;
      TlgWrite(v6, &unk_18003E8B5, v9, v10, 4u, &pData);
    }
    ResourceManagementValue = ExecutionModel::ResourceManager::GetResourceManagementValue(v6, v8, a2, a3);
    v7 = ResourceManagementValue;
    v15 = ResourceManagementValue;
  }
  else
  {
    v7 = 2147942487LL;
    v15 = -2147024809;
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v7, 2uLL) )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v15;
    v23 = 4;
    v25 = a3;
    v26 = 8;
    TlgWrite((TraceLoggingHProvider)v7, &unk_18003E960, v12, v13, 4u, &pData);
    LODWORD(v7) = v15;
  }
  return (unsigned int)v7;
}
