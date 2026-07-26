/*
 * XREFs of ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C006EA84
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingQosConfigOffloads(
        const struct _TlgProvider_t *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  int v9; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+3Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  int *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  int *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  int *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  int *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v5 = v2 + 4064;
      v13 = 16LL;
      v6 = *(_QWORD *)v4[4].Data4;
      v12 = v5;
      v8 = *(_DWORD *)(v6 + 4);
      v14 = &v8;
      v15 = 4LL;
      v10 = *(_DWORD *)(v6 + 8);
      v16 = &v10;
      v17 = 4LL;
      v7 = *(_DWORD *)(v6 + 12);
      v18 = &v7;
      v19 = 4LL;
      v9 = *(_DWORD *)(v6 + 16);
      v20 = &v9;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)v6, &unk_1C0074483, v3, v4, 7u, &pData);
    }
  }
}
