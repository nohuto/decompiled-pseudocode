/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x180019B50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, int a2, unsigned int a3)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // eax
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v20[56]; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v23; // [rsp+D0h] [rbp-30h]
  int v24; // [rsp+D8h] [rbp-28h]
  int v25; // [rsp+DCh] [rbp-24h]
  unsigned int *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+ECh] [rbp-14h]
  int *v29; // [rsp+F0h] [rbp-10h]
  int v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+FCh] [rbp-4h]

  v15 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v20, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v6, 2uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v16 = v21;
    v23 = &v16;
    v26 = &v17;
    v29 = &v18;
    v24 = 4;
    v17 = a3;
    v27 = 4;
    v18 = a2;
    v30 = 4;
    TlgWrite(v7, &unk_18003E912, v8, v9, 5u, &pData);
  }
  v10 = ExecutionModel::ResourceManager::RmAccessCheckEx(g_pResourceManager, a2, a3, 1);
  LODWORD(v11) = v10;
  v15 = v10;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v10, 2uLL) )
  {
    v25 = 0;
    v23 = (int *)&v15;
    v24 = 4;
    TlgWrite(v11, &unk_18003EA22, v12, v13, 3u, &pData);
    LODWORD(v11) = v15;
  }
  return (unsigned int)v11;
}
