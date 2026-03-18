/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MONITOR_MGR@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B754
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C000F984 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MONITOR_MGR(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  const GUID *v2; // r9
  ULONGLONG v3; // r10
  ULONG v4; // r11d
  const GUID *v5; // r9
  int *v6; // r10
  int v7; // r11d
  unsigned int v8; // ecx
  int v9; // r9d
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r10
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r11d
  LPCGUID v17; // r9
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  void *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  ULONGLONG v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  ULONGLONG v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  ULONGLONG v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+F8h] [rbp-10h] BYREF
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+118h] [rbp+10h] BYREF
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  int *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  int *v54; // [rsp+168h] [rbp+60h]
  unsigned __int64 v55; // [rsp+170h] [rbp+68h]
  int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  int *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  int *v62; // [rsp+1A8h] [rbp+A0h]
  int v63; // [rsp+1B0h] [rbp+A8h]
  int v64; // [rsp+1B4h] [rbp+ACh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000020uLL) )
  {
    if ( *(_DWORD *)(v1 + 48) == 1 || *(_DWORD *)(v1 + 48) == 7 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000020uLL) )
      {
        v30 = 4LL;
        v29 = &unk_1C003F298;
        v32 = 4LL;
        v31 = v10 + 40;
        v34 = 8LL;
        v33 = v10 + 32;
        v23 = *(_DWORD *)v10;
        v35 = &v23;
        v37 = v10 + 44;
        v39 = &v22;
        v36 = 4LL;
        v38 = 4LL;
        v22 = v9;
        v40 = 4LL;
        TlgCreateSz(&pDesc, (LPCSTR)(v10 + 72));
        TlgCreateSz(&v42, (LPCSTR)(v11 + 81));
        v44 = 4LL;
        v43 = (int *)(v12 + 68);
        TlgCreateSz(&v45, (LPCSTR)(v12 + 76));
        v14 = *(_DWORD *)(v13 + 64);
        v46 = &v21;
        v48 = (int *)(v13 + 56);
        v50 = (int *)(v13 + 52);
        v15 = *(unsigned __int16 *)(v13 + 4);
        v21 = v14;
        LOWORD(v18) = v15;
        v55 = __PAIR64__(v16, v15);
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        v52 = &v18;
        v53 = 2LL;
        v54 = (int *)v13;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003C062, 0LL, v17, 0x11u, &pData);
      }
    }
    else if ( *(_DWORD *)(v1 + 48) == 14 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000020uLL) )
      {
        v8 = v6[16];
        v29 = &unk_1C003F298;
        v30 = 4LL;
        v31 = (ULONGLONG)(v6 + 10);
        v33 = (ULONGLONG)(v6 + 8);
        v20 = *v6;
        v35 = &v20;
        v37 = (ULONGLONG)(v6 + 11);
        v39 = &v19;
        pDesc.Ptr = (ULONGLONG)(v6 + 18);
        v42.Ptr = (ULONGLONG)(v6 + 17);
        v32 = 4LL;
        v24 = v8 & 1;
        v43 = &v24;
        v34 = 8LL;
        v25 = (v8 >> 1) & 1;
        v45.Ptr = (ULONGLONG)&v25;
        v36 = 4LL;
        v26 = (v8 >> 3) & 1;
        v46 = &v26;
        v38 = 4LL;
        v27 = (v8 >> 2) & 1;
        v48 = &v27;
        v19 = 14;
        v21 = (v8 >> 4) & 1;
        v50 = &v21;
        v22 = (v8 >> 6) & 1;
        v40 = 4LL;
        v52 = &v22;
        v54 = &v23;
        v56 = v6 + 14;
        v58 = v6 + 13;
        *(_QWORD *)&pDesc.Size = 8LL;
        *(_QWORD *)&v42.Size = 4LL;
        v44 = 4LL;
        *(_QWORD *)&v45.Size = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        v53 = 4LL;
        v23 = (v8 >> 5) & 1;
        v55 = 4LL;
        v57 = 4LL;
        LOWORD(v18) = *((_WORD *)v6 + 2);
        v60 = &v18;
        v63 = (unsigned __int16)v18;
        v59 = 4LL;
        v61 = 2LL;
        v62 = v6;
        v64 = v7;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003BED8, 0LL, v5, 0x15u, &pData);
      }
    }
    else if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000020uLL) )
      {
        v30 = 4LL;
        v29 = &unk_1C003F298;
        v32 = 4LL;
        v31 = v3 + 40;
        v33 = v3 + 32;
        v19 = *(_DWORD *)v3;
        v35 = &v19;
        v37 = v3 + 44;
        v39 = &v20;
        pDesc.Ptr = v3 + 56;
        v42.Ptr = v3 + 52;
        LOWORD(v18) = *(_WORD *)(v3 + 4);
        v45.Size = (unsigned __int16)v18;
        v34 = 8LL;
        v36 = 4LL;
        v38 = 4LL;
        v20 = (int)v2;
        v40 = 4LL;
        *(_QWORD *)&pDesc.Size = 4LL;
        *(_QWORD *)&v42.Size = 4LL;
        v43 = &v18;
        v44 = 2LL;
        v45.Ptr = v3;
        v45.Reserved = v4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003C13C, 0LL, v2, 0xCu, &pData);
      }
    }
  }
}
