/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0024AAC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // r11d
  const GUID *v2; // r9
  int *v3; // r10
  __int64 v4; // r11
  unsigned int v5; // ecx
  int v6; // eax
  unsigned __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+4Ch] [rbp-B4h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+54h] [rbp-ACh] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  void *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  int *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  unsigned __int16 *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  int *v57; // [rsp+1B0h] [rbp+B0h]
  int v58; // [rsp+1B8h] [rbp+B8h]
  int v59; // [rsp+1BCh] [rbp+BCh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000400uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000400uLL) )
    {
      v5 = v3[18];
      v20 = v4;
      v19 = &unk_1C003F298;
      v21 = v3 + 10;
      v23 = v3 + 8;
      v8 = *v3;
      v25 = &v8;
      v27 = v3 + 11;
      v9 = v3[22];
      v29 = &v9;
      v22 = v4;
      v10 = (v4 - 3) & (v5 >> 4);
      v31 = &v10;
      v24 = 8LL;
      v11 = (v4 - 3) & (v5 >> 1);
      v33 = &v11;
      v26 = v4;
      v12 = (v4 - 3) & (v5 >> 6);
      v35 = &v12;
      v28 = v4;
      v13 = (v4 - 3) & (v5 >> 3);
      v37 = &v13;
      v30 = v4;
      v14 = (v4 - 3) & (v5 >> 2);
      v39 = &v14;
      v32 = v4;
      v15 = (v4 - 3) & (v5 >> 5);
      v34 = v4;
      v41 = &v15;
      v43 = &v16;
      v45 = v3 + 12;
      v47 = v3 + 14;
      v49 = v3 + 16;
      v6 = v3[20];
      v36 = v4;
      v38 = v4;
      v40 = v4;
      v42 = v4;
      v16 = (v4 - 3) & v5;
      v44 = v4;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v17 = v6;
      v52 = v4;
      v51 = &v17;
      v53 = v3 + 21;
      v7 = *((_WORD *)v3 + 2);
      v58 = v7;
      v54 = v4;
      v55 = &v7;
      v56 = 2LL;
      v57 = v3;
      v59 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003A799, 0LL, v2, 0x16u, &pData);
    }
  }
}
