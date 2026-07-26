/*
 * XREFs of ?NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0012FC4
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0012F38 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingLsoV2ConfigOffloads(const struct _TlgProvider_t *a1, struct _NDIS_OFFLOAD *a2)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // r9
  char v5; // al
  char v6; // al
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  char v8; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  char *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  if ( (unsigned int)dword_1C0084040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v17 = 16LL;
      p_RegHandle = &v2[63].RegHandle;
      v12 = *(_DWORD *)(v4 + 80);
      v18 = &v12;
      v14 = *(_DWORD *)(v4 + 84);
      v20 = &v14;
      v9 = *(_DWORD *)(v4 + 88);
      v22 = &v9;
      v10 = *(_DWORD *)(v4 + 92);
      v24 = &v10;
      v11 = *(_DWORD *)(v4 + 96);
      v26 = &v11;
      v13 = *(_DWORD *)(v4 + 100);
      v28 = &v13;
      v5 = *(_BYTE *)(v4 + 104) & 3;
      v19 = 4LL;
      v7 = v5;
      v30 = &v7;
      v6 = (*(_DWORD *)(v4 + 104) >> 2) & 3;
      v21 = 4LL;
      v8 = v6;
      v32 = &v8;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 1LL;
      TlgWrite(v2, &unk_1C0074CD1, v3, (LPCGUID)v4, 0xBu, &pData);
    }
  }
}
