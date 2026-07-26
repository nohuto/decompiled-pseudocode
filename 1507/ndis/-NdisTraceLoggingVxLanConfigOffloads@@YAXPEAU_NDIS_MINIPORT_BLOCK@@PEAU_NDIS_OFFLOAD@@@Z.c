/*
 * XREFs of ?NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C006F26C
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0012F38 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingVxLanConfigOffloads(const struct _TlgProvider_t *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned int v5; // ecx
  const struct _TlgProvider_t *v6; // rcx
  char v7; // [rsp+30h] [rbp-69h] BYREF
  char v8; // [rsp+31h] [rbp-68h] BYREF
  char v9; // [rsp+32h] [rbp-67h] BYREF
  char v10; // [rsp+33h] [rbp-66h] BYREF
  char v11; // [rsp+34h] [rbp-65h] BYREF
  int v12; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  char *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  char *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  char *v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  char *v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]
  int *v24; // [rsp+B0h] [rbp+17h]
  __int64 v25; // [rsp+B8h] [rbp+1Fh]
  __int64 v26; // [rsp+C0h] [rbp+27h]
  __int64 v27; // [rsp+C8h] [rbp+2Fh]
  char *v28; // [rsp+D0h] [rbp+37h]
  __int64 v29; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v4 = v2 + 4064;
      v15 = 16LL;
      v5 = *(_DWORD *)(v3 + 156);
      v14 = v4;
      LOBYTE(v4) = *(_BYTE *)(v3 + 156) & 0xF;
      v17 = 1LL;
      v8 = v4;
      v16 = &v8;
      v19 = 1LL;
      v11 = (v5 >> 4) & 0xF;
      v18 = &v11;
      LOBYTE(v4) = BYTE1(v5) & 0xF;
      v6 = (const struct _TlgProvider_t *)HIWORD(v5);
      v10 = v4;
      LOBYTE(v6) = (unsigned __int8)v6 & 0xF;
      v21 = 1LL;
      v20 = &v10;
      v22 = &v7;
      v12 = *(_DWORD *)(v3 + 160);
      v24 = &v12;
      v26 = v3 + 164;
      LOBYTE(v4) = *(_BYTE *)(v3 + 166) & 1;
      v7 = (char)v6;
      v9 = v4;
      v28 = &v9;
      v23 = 1LL;
      v25 = 4LL;
      v27 = 2LL;
      v29 = 1LL;
      TlgWrite(v6, &unk_1C0074525, (LPCGUID)1, (LPCGUID)v3, 0xAu, &pData);
    }
  }
}
