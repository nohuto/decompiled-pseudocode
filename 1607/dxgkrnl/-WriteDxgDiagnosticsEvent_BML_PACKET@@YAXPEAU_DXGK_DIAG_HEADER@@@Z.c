/*
 * XREFs of ?WriteDxgDiagnosticsEvent_BML_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0023AD4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_BML_PACKET(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // r11d
  const GUID *v2; // r9
  int *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // dx
  int v6; // eax
  unsigned __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+32h] [rbp-CEh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+68h] [rbp-98h]
  int *v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  int *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int16 *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  int v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+ECh] [rbp-14h]
  __int16 *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  int v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+10Ch] [rbp+Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000080uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000080uLL) )
    {
      v12 = v4;
      v11 = &unk_1C003F298;
      v5 = *((_WORD *)v3 + 24);
      v13 = v3 + 10;
      v15 = v3 + 8;
      v9 = *v3;
      v17 = &v9;
      v19 = v3 + 11;
      v21 = v3 + 13;
      v5 *= 360;
      v25 = (__int16 *)&v7;
      v27 = v3 + 14;
      v14 = v4;
      v16 = 8LL;
      v28 = v5;
      v6 = *((unsigned __int16 *)v3 + 2);
      v7 = v5;
      v8 = v6;
      v33 = v6;
      v18 = v4;
      v20 = v4;
      v22 = v4;
      v23 = v3 + 12;
      v24 = v4;
      v26 = 2LL;
      v29 = (int)v2;
      v30 = &v8;
      v31 = 2LL;
      v32 = v3;
      v34 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003BDD3, 0LL, v2, 0xDu, &pData);
    }
  }
}
