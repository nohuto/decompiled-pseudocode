/*
 * XREFs of ?NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00223E8
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0012F38 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingGreTaskeConfigOffloads(const struct _TlgProvider_t *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx
  const struct _TlgProvider_t *v7; // rcx
  char v8; // [rsp+30h] [rbp-49h] BYREF
  char v9; // [rsp+31h] [rbp-48h] BYREF
  char v10; // [rsp+32h] [rbp-47h] BYREF
  char v11; // [rsp+33h] [rbp-46h] BYREF
  int v12; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+60h] [rbp-19h]
  __int64 v15; // [rsp+68h] [rbp-11h]
  char *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  char *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  char *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  char *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  int *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v5 = v2 + 4064;
      v15 = 16LL;
      v6 = *(_DWORD *)(v4 + 148);
      LOBYTE(v3) = 15;
      v14 = v5;
      LOBYTE(v5) = *(_BYTE *)(v4 + 148) & 0xF;
      v17 = 1LL;
      v11 = v5;
      v16 = &v11;
      v19 = 1LL;
      v10 = (v6 >> 4) & 0xF;
      v18 = &v10;
      LOBYTE(v5) = BYTE1(v6) & 0xF;
      v7 = (const struct _TlgProvider_t *)HIWORD(v6);
      v8 = v5;
      LOBYTE(v7) = (unsigned __int8)v7 & 0xF;
      v21 = 1LL;
      v20 = &v8;
      v22 = &v9;
      v12 = *(_DWORD *)(v4 + 152);
      v24 = &v12;
      v9 = (char)v7;
      v23 = 1LL;
      v25 = 4LL;
      TlgWrite(v7, &unk_1C0074B8F, v3, (LPCGUID)v4, 8u, &pData);
    }
  }
}
