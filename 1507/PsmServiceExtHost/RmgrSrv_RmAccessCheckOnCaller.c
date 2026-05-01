/*
 * XREFs of RmgrSrv_RmAccessCheckOnCaller @ 0x18002F910
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheckOnCaller(RPC_BINDING_HANDLE ClientBinding, unsigned int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  unsigned int v5; // r14d
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-45h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+40h] [rbp-39h] BYREF
  int *v18; // [rsp+60h] [rbp-19h]
  int v19; // [rsp+68h] [rbp-11h]
  int v20; // [rsp+6Ch] [rbp-Dh]
  int *v21; // [rsp+70h] [rbp-9h]
  int v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  unsigned int v24; // [rsp+80h] [rbp+7h]

  v14 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v5 = v24;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v4, 2uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = (int *)&v15;
    v21 = (int *)&v16;
    v15 = v5;
    v19 = 4;
    v16 = a2;
    v22 = 4;
    TlgWrite(v6, &unk_1800599A0, v7, v8, 4u, RpcCallAttributes);
  }
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))g_pResourceManager->lpVtbl[6].AddRef)(
         g_pResourceManager,
         a2,
         v5);
  LODWORD(v10) = v9;
  v14 = v9;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v9, 2uLL) )
  {
    v20 = 0;
    v18 = (int *)&v14;
    v19 = 4;
    TlgWrite(v10, &unk_180059D7F, v11, v12, 3u, RpcCallAttributes);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
