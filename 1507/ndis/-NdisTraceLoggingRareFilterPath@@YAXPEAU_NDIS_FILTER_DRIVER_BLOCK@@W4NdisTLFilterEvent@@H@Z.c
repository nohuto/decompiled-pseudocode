/*
 * XREFs of ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00E2588
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001752C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0017668 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRareFilterPath(const struct _TlgProvider_t *a1)
{
  const GUID *v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // r11d
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // r10d
  int v10; // r11d
  int v11; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v14; // [rsp+60h] [rbp-19h]
  int v15; // [rsp+68h] [rbp-11h]
  int v16; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  __int64 v20; // [rsp+80h] [rbp+7h]
  _DWORD v21[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  __int64 v25; // [rsp+A0h] [rbp+27h]
  _DWORD v26[2]; // [rsp+A8h] [rbp+2Fh] BYREF
  int *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  if ( a1 )
  {
    if ( (unsigned int)dword_1C0084040 > 5 )
    {
      if ( TlgKeywordOn(a1, 0x200000000000uLL) )
      {
        v16 = 0;
        v19 = 0;
        v21[1] = 0;
        v24 = 0;
        v26[1] = 0;
        v14 = v12;
        v12[0] = v4;
        v17 = v21;
        v20 = *(_QWORD *)(v2 + 120);
        v5 = 2 * (*(_WORD *)(v2 + 112) >> 1);
        v15 = 4;
        v21[0] = v5;
        v22 = v26;
        v25 = *(_QWORD *)(v2 + 152);
        v6 = 2 * (*(_WORD *)(v2 + 144) >> 1);
        v18 = 2;
        v29 = 0;
        v26[0] = v6;
        v27 = &v11;
        v23 = 2;
        v11 = v3;
        v28 = 4;
        TlgWrite((TraceLoggingHProvider)4, &unk_1C0074A36, v1, (LPCGUID)v2, 8u, &pData);
      }
    }
  }
  else if ( (unsigned int)dword_1C0084040 > 5 && TlgKeywordOn(0LL, 0x200000000000uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v11;
    v17 = v12;
    v11 = v10;
    v15 = 4;
    v12[0] = v9;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_1C007489C, v7, v8, 4u, &pData);
  }
}
