/*
 * XREFs of ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C00183D0
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C009BC58 (ndisPnPIrpStartDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00166B8 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     _TlgKeywordOn @ 0x1C00186D4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStarted(const struct _TlgProvider_t *a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  const GUID *v4; // r9
  LPCGUID v5; // r8
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // r10d
  int v10; // r11d
  int v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  const GUID *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  unsigned __int64 *p_RegHandle; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  const GUID *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  if ( a3 < 0 )
  {
    if ( (unsigned int)dword_1C0082040 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = &v11;
      v17 = (const GUID *)&v12;
      p_RegHandle = &v6[63].RegHandle;
      v11 = v9;
      v15 = 4;
      v12 = v10;
      v18 = 4;
      v21 = 16;
      TlgWrite(v6, &unk_1C0073396, v7, v8, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0082040 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v11 = NdisTraceLoggingDiscoverOperationalStatus(v3);
      v14 = &v11;
      v17 = v4 + 2;
      p_RegHandle = (unsigned __int64 *)((char *)&v4[2].Data1 + 1);
      v23 = v4 + 254;
      v15 = 4;
      v18 = 1;
      v21 = 1;
      v24 = 16;
      TlgWrite((TraceLoggingHProvider)1, &unk_1C007332B, v5, v4, 6u, &pData);
    }
  }
}
