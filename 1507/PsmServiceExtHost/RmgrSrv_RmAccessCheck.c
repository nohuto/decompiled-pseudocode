/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x180006470
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z @ 0x180011430 (-RmAccessCheck@ResourceManager@ExecutionModel@@UEAAJW4Enum@ResourceType@2@K@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, unsigned int a3)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  unsigned int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned int v16; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-51h] BYREF
  int v19; // [rsp+3Ch] [rbp-4Dh] BYREF
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+40h] [rbp-49h] BYREF
  int *v21; // [rsp+60h] [rbp-29h]
  int v22; // [rsp+68h] [rbp-21h]
  int v23; // [rsp+6Ch] [rbp-1Dh]
  int *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  int *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]

  v16 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v6, 2uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v19 = (int)v27;
    v21 = &v19;
    v24 = (int *)&v17;
    v27 = (int *)&v18;
    v22 = 4;
    v17 = a3;
    v25 = 4;
    v18 = a2;
    v28 = 4;
    TlgWrite(v7, &unk_180059E8E, v8, v9, 5u, RpcCallAttributes);
  }
  AddRef = g_pResourceManager->lpVtbl[6].AddRef;
  if ( (char *)AddRef == (char *)ExecutionModel::ResourceManager::RmAccessCheck )
    v11 = ExecutionModel::ResourceManager::RmAccessCheck(g_pResourceManager, a2, a3);
  else
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))AddRef)(g_pResourceManager, a2, a3);
  LODWORD(v12) = v11;
  v16 = v11;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v11, 2uLL) )
  {
    v23 = 0;
    v21 = (int *)&v16;
    v22 = 4;
    TlgWrite(v12, &unk_180059CFE, v13, v14, 3u, RpcCallAttributes);
    LODWORD(v12) = v16;
  }
  return (unsigned int)v12;
}
