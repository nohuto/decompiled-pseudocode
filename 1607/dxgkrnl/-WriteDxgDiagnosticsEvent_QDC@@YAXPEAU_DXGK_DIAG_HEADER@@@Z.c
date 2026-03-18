/*
 * XREFs of ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B528
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_QDC(struct _DXGK_DIAG_HEADER *a1)
{
  const GUID *v1; // r9
  int *v2; // r10
  int v3; // r11d
  unsigned int v4; // ecx
  __int16 v5; // dx
  __int64 v6; // rax
  __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+32h] [rbp-CEh] BYREF
  unsigned __int16 v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  void *v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  int *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  int *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  int *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  int *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  int *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  int *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int16 *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  int *v45; // [rsp+160h] [rbp+60h]
  int v46; // [rsp+168h] [rbp+68h]
  int v47; // [rsp+16Ch] [rbp+6Ch]
  __int16 *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  int v51; // [rsp+188h] [rbp+88h]
  int v52; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int16 *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  int *v55; // [rsp+1A0h] [rbp+A0h]
  int v56; // [rsp+1A8h] [rbp+A8h]
  int v57; // [rsp+1ACh] [rbp+ACh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000001uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v4 = v2[12];
      v15 = &unk_1C003F298;
      v16 = 4LL;
      v17 = v2 + 10;
      v31 = v2 + 14;
      v5 = *((_WORD *)v2 + 28);
      v19 = v2 + 8;
      v10 = *v2;
      v21 = &v10;
      v23 = v2 + 11;
      v25 = v2 + 20;
      v27 = v2 + 17;
      v29 = v2 + 16;
      v11 = (v4 >> 1) & 1;
      v35 = &v11;
      v12 = v4 & 1;
      v13 = (v4 >> 2) & 1;
      LOWORD(v4) = *((_WORD *)v2 + 26);
      v37 = &v12;
      v39 = &v13;
      v41 = v2 + 15;
      v18 = 4LL;
      LOWORD(v4) = 72 * v4;
      v43 = &v7;
      v45 = v2 + 22;
      v46 = (unsigned __int16)v4;
      v48 = &v8;
      v6 = (unsigned int)v2[13];
      v7 = v4;
      v20 = 8LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 8LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v33 = v2 + 13;
      v50 = &v2[16 * v6 + 22 + 2 * v6];
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 2LL;
      v47 = v3;
      v8 = v5 << 6;
      v49 = 2LL;
      v51 = (unsigned __int16)(v5 << 6);
      v9 = *((_WORD *)v2 + 2);
      v56 = v9;
      v52 = v3;
      v53 = &v9;
      v54 = 2LL;
      v55 = v2;
      v57 = v3;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003C1BA, 0LL, v1, 0x16u, &pData);
    }
  }
}
