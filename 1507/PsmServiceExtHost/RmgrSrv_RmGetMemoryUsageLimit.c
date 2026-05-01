/*
 * XREFs of RmgrSrv_RmGetMemoryUsageLimit @ 0x1800301A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmGetMemoryUsageLimit(RPC_BINDING_HANDLE ClientBinding, __int64 a2)
{
  const struct _TlgProvider_t *v4; // rcx
  unsigned int v5; // esi
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+40h] [rbp-39h] BYREF
  int *v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  __int64 v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  unsigned int v23; // [rsp+80h] [rbp+7h]

  v14 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v5 = v23;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v4, 2uLL) )
  {
    v19 = 0;
    v17 = (int *)&v15;
    v15 = v5;
    v18 = 4;
    TlgWrite(v6, &unk_1800597BC, v7, v8, 3u, RpcCallAttributes);
  }
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64))g_pResourceManager->lpVtbl[11].QueryInterface)(
         g_pResourceManager,
         v5,
         a2);
  LODWORD(v10) = v9;
  v14 = v9;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v9, 2uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = (int *)&v14;
    v18 = 4;
    v20 = a2;
    v21 = 8;
    TlgWrite(v10, &unk_18005984A, v11, v12, 4u, RpcCallAttributes);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
