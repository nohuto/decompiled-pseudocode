/*
 * XREFs of RmgrSrv_RmAvailabilityCheck @ 0x18002FD80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAvailabilityCheck(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-81h] BYREF
  int v18; // [rsp+34h] [rbp-7Dh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-75h] BYREF
  int v21; // [rsp+40h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+50h] [rbp-61h] BYREF
  int *v23; // [rsp+70h] [rbp-41h]
  int v24; // [rsp+78h] [rbp-39h]
  int v25; // [rsp+7Ch] [rbp-35h]
  int *v26; // [rsp+80h] [rbp-31h]
  int v27; // [rsp+88h] [rbp-29h]
  int v28; // [rsp+8Ch] [rbp-25h]
  int *v29; // [rsp+90h] [rbp-21h]
  int v30; // [rsp+98h] [rbp-19h]
  int v31; // [rsp+9Ch] [rbp-15h]
  int *v32; // [rsp+A0h] [rbp-11h]
  int v33; // [rsp+A8h] [rbp-9h]
  int v34; // [rsp+ACh] [rbp-5h]

  v17 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v21 = (int)v29;
    v23 = &v21;
    v26 = &v18;
    v29 = (int *)&v19;
    v32 = (int *)&v20;
    v24 = (int)v9;
    v18 = a5;
    v27 = (int)v9;
    v19 = a2;
    v30 = (int)v9;
    v20 = a4;
    v33 = (int)v9;
    TlgWrite(v9, &unk_180059756, v10, v11, 6u, RpcCallAttributes);
  }
  v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64, _QWORD, int))g_pResourceManager->lpVtbl[6].Release)(
          g_pResourceManager,
          a2,
          a3,
          a4,
          a5);
  LODWORD(v13) = v12;
  v17 = v12;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v12, 2uLL) )
  {
    v25 = 0;
    v23 = (int *)&v17;
    v24 = 4;
    TlgWrite(v13, &unk_180059EDC, v14, v15, 3u, RpcCallAttributes);
    LODWORD(v13) = v17;
  }
  return (unsigned int)v13;
}
