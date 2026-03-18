/*
 * XREFs of ?WriteDxgDiagnosticsEvent_BML_PACKET_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BA18
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_BML_PACKET_EX(struct _DXGK_DIAG_HEADER *a1)
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
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  int *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  int *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  int *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int16 *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  int v31; // [rsp+F8h] [rbp-8h]
  int v32; // [rsp+FCh] [rbp-4h]
  __int16 *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int *v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+11Ch] [rbp+1Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000080uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000080uLL) )
    {
      v13 = v4;
      v12 = &unk_1C003F298;
      v5 = *((_WORD *)v3 + 24);
      v14 = v3 + 10;
      v16 = v3 + 8;
      v9 = *v3;
      v18 = &v9;
      v20 = v3 + 11;
      v22 = v3 + 13;
      v10 = v3[14];
      v24 = &v10;
      v5 *= 360;
      v28 = (__int16 *)&v7;
      v30 = v3 + 16;
      v15 = v4;
      v17 = 8LL;
      v31 = v5;
      v6 = *((unsigned __int16 *)v3 + 2);
      v7 = v5;
      v8 = v6;
      v36 = v6;
      v19 = v4;
      v21 = v4;
      v23 = v4;
      v25 = v4;
      v26 = v3 + 12;
      v27 = v4;
      v29 = 2LL;
      v32 = (int)v2;
      v33 = &v8;
      v34 = 2LL;
      v35 = v3;
      v37 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003BD50, 0LL, v2, 0xEu, &pData);
    }
  }
}
