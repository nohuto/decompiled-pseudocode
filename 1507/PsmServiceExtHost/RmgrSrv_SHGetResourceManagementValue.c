/*
 * XREFs of RmgrSrv_SHGetResourceManagementValue @ 0x180030EC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmgrSrv_SHGetResourceManagementValue(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, int *a3)
{
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // esi
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v16; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+40h] [rbp-59h] BYREF
  int *v20; // [rsp+60h] [rbp-39h]
  int v21; // [rsp+68h] [rbp-31h]
  int v22; // [rsp+6Ch] [rbp-2Dh]
  int *v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+78h] [rbp-21h]
  int v25; // [rsp+7Ch] [rbp-1Dh]
  unsigned int v26; // [rsp+80h] [rbp-19h]

  v16 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( a3 )
  {
    v8 = v26;
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v6, 2uLL) )
    {
      v22 = 0;
      v25 = 0;
      v20 = (int *)&v17;
      v23 = (int *)&v18;
      v17 = v8;
      v21 = 4;
      v18 = a2;
      v24 = 4;
      TlgWrite(v9, &unk_180059E31, v10, v11, 4u, RpcCallAttributes);
    }
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD, int *))g_pResourceManager->lpVtbl[8].QueryInterface)(
            g_pResourceManager,
            v8,
            a2,
            a3);
    v7 = v12;
    v16 = v12;
  }
  else
  {
    v7 = 2147942487LL;
    v16 = -2147024809;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v7, 2uLL) )
  {
    v22 = 0;
    v25 = 0;
    v20 = &v16;
    v21 = 4;
    v23 = a3;
    v24 = 8;
    TlgWrite((TraceLoggingHProvider)v7, &unk_1800599E7, v13, v14, 4u, RpcCallAttributes);
    LODWORD(v7) = v16;
  }
  return (unsigned int)v7;
}
