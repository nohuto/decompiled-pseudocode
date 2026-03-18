/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0023C50
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C000F984 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CCD_CONNECTEDSET_NOT_FOUND(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // r11d
  const CHAR *v2; // r10
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // r10
  LPCGUID v6; // r9
  unsigned __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+68h] [rbp-98h]
  int *v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  int *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  __int64 v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+FCh] [rbp-4h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000040uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000040uLL) )
    {
      v11 = v3;
      v10 = &unk_1C003F298;
      v13 = v3;
      v12 = (int *)(v2 + 40);
      v15 = 8LL;
      v14 = (int *)(v2 + 32);
      v8 = *(_DWORD *)v2;
      v16 = &v8;
      v18 = (int *)(v2 + 44);
      v17 = v3;
      v19 = v3;
      TlgCreateSz(&pDesc, v2 + 56);
      v22 = v4;
      v23 = v5 + 52;
      v7 = *(_WORD *)(v5 + 4);
      v28 = v7;
      v21 = v5 + 48;
      v24 = v4;
      v25 = &v7;
      v26 = 2LL;
      v27 = v5;
      v29 = (int)v6;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003BE45, 0LL, v6, 0xCu, &pData);
    }
  }
}
