/*
 * XREFs of ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00243C4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  const GUID *v2; // r9
  int *v3; // r10
  int v4; // r11d
  unsigned __int16 Data1; // cx
  const GUID *v6; // r9
  int *v7; // r10
  int v8; // r11d
  unsigned __int16 v9; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v10; // [rsp+3Ah] [rbp-CEh] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+5Ch] [rbp-ACh] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  void *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  int *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  int *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  const GUID *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  int *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  int *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  int *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  int *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  int *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  int *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  __int64 *v59; // [rsp+1A8h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+A8h]
  int *v61; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  int *v63; // [rsp+1C8h] [rbp+C0h]
  __int64 v64; // [rsp+1D0h] [rbp+C8h]
  int *v65; // [rsp+1D8h] [rbp+D0h]
  __int64 v66; // [rsp+1E0h] [rbp+D8h]
  int *v67; // [rsp+1E8h] [rbp+E0h]
  __int64 v68; // [rsp+1F0h] [rbp+E8h]
  int *v69; // [rsp+1F8h] [rbp+F0h]
  __int64 v70; // [rsp+200h] [rbp+F8h]
  int *v71; // [rsp+208h] [rbp+100h]
  __int64 v72; // [rsp+210h] [rbp+108h]
  int *v73; // [rsp+218h] [rbp+110h]
  __int64 v74; // [rsp+220h] [rbp+118h]
  int *v75; // [rsp+228h] [rbp+120h]
  __int64 v76; // [rsp+230h] [rbp+128h]
  int *v77; // [rsp+238h] [rbp+130h]
  __int64 v78; // [rsp+240h] [rbp+138h]
  int *v79; // [rsp+248h] [rbp+140h]
  __int64 v80; // [rsp+250h] [rbp+148h]
  int *v81; // [rsp+258h] [rbp+150h]
  __int64 v82; // [rsp+260h] [rbp+158h]
  int *v83; // [rsp+268h] [rbp+160h]
  __int64 v84; // [rsp+270h] [rbp+168h]
  int *v85; // [rsp+278h] [rbp+170h]
  __int64 v86; // [rsp+280h] [rbp+178h]
  int *v87; // [rsp+288h] [rbp+180h]
  __int64 v88; // [rsp+290h] [rbp+188h]
  int *v89; // [rsp+298h] [rbp+190h]
  __int64 v90; // [rsp+2A0h] [rbp+198h]
  int *v91; // [rsp+2A8h] [rbp+1A0h]
  __int64 v92; // [rsp+2B0h] [rbp+1A8h]
  int *v93; // [rsp+2B8h] [rbp+1B0h]
  __int64 v94; // [rsp+2C0h] [rbp+1B8h]
  int *v95; // [rsp+2C8h] [rbp+1C0h]
  __int64 v96; // [rsp+2D0h] [rbp+1C8h]
  int *v97; // [rsp+2D8h] [rbp+1D0h]
  __int64 v98; // [rsp+2E0h] [rbp+1D8h]
  __int16 *v99; // [rsp+2E8h] [rbp+1E0h]
  __int64 v100; // [rsp+2F0h] [rbp+1E8h]
  int *v101; // [rsp+2F8h] [rbp+1F0h]
  int v102; // [rsp+300h] [rbp+1F8h]
  int v103; // [rsp+304h] [rbp+1FCh]
  unsigned __int16 *v104; // [rsp+308h] [rbp+200h]
  __int64 v105; // [rsp+310h] [rbp+208h]
  int *v106; // [rsp+318h] [rbp+210h]
  int v107; // [rsp+320h] [rbp+218h]
  int v108; // [rsp+324h] [rbp+21Ch]
  EVENT_DATA_DESCRIPTOR v109; // [rsp+328h] [rbp+220h] BYREF
  void *v110; // [rsp+348h] [rbp+240h]
  __int64 v111; // [rsp+350h] [rbp+248h]
  int *v112; // [rsp+358h] [rbp+250h]
  __int64 v113; // [rsp+360h] [rbp+258h]
  int *v114; // [rsp+368h] [rbp+260h]
  __int64 v115; // [rsp+370h] [rbp+268h]
  int *v116; // [rsp+378h] [rbp+270h]
  __int64 v117; // [rsp+380h] [rbp+278h]
  int *v118; // [rsp+388h] [rbp+280h]
  __int64 v119; // [rsp+390h] [rbp+288h]
  const GUID *v120; // [rsp+398h] [rbp+290h]
  __int64 v121; // [rsp+3A0h] [rbp+298h]
  int *v122; // [rsp+3A8h] [rbp+2A0h]
  __int64 v123; // [rsp+3B0h] [rbp+2A8h]
  unsigned __int16 *v124; // [rsp+3B8h] [rbp+2B0h]
  __int64 v125; // [rsp+3C0h] [rbp+2B8h]
  int *v126; // [rsp+3C8h] [rbp+2C0h]
  int v127; // [rsp+3D0h] [rbp+2C8h]
  int v128; // [rsp+3D4h] [rbp+2CCh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000100uLL) )
  {
    if ( *(_DWORD *)(v1 + 52) )
    {
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000100uLL) )
        {
          v26 = 4LL;
          v25 = &unk_1C003F298;
          v28 = 4LL;
          v27 = v3 + 10;
          v29 = v3 + 8;
          v13 = *v3;
          v31 = &v13;
          v33 = v3 + 11;
          v14 = v3[12];
          v37 = &v14;
          v23 = *((_QWORD *)v3 + 8);
          v39 = &v23;
          v41 = v3 + 15;
          v15 = v3[45];
          v45 = &v15;
          v16 = v3[46];
          v47 = &v16;
          v17 = v3[42];
          v49 = &v17;
          v18 = v3[44];
          v51 = &v18;
          v19 = v3[43];
          v53 = &v19;
          v20 = v3[40];
          v55 = &v20;
          v21 = v3[39];
          v57 = &v21;
          LODWORD(v22) = v3[41];
          v59 = &v22;
          v61 = v3 + 34;
          v63 = v3 + 35;
          v30 = 8LL;
          v32 = 4LL;
          v34 = 4LL;
          v35 = v2;
          v36 = 4LL;
          v38 = 4LL;
          v40 = 8LL;
          v42 = 4LL;
          v43 = v3 + 14;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          v50 = 4LL;
          v52 = 4LL;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          Data1 = v2->Data1;
          v11 = v3[38];
          v65 = &v11;
          v67 = v3 + 36;
          v69 = v3 + 37;
          v71 = v3 + 24;
          v73 = v3 + 25;
          v75 = v3 + 29;
          v77 = v3 + 28;
          v79 = v3 + 20;
          v81 = v3 + 31;
          v83 = v3 + 22;
          v85 = v3 + 23;
          v87 = v3 + 30;
          v89 = v3 + 27;
          v91 = v3 + 26;
          v12 = v3[32];
          v93 = &v12;
          v95 = v3 + 18;
          v97 = v3 + 19;
          Data1 *= 136;
          v99 = (__int16 *)&v10;
          v101 = v3 + 14;
          v66 = 4LL;
          v68 = 4LL;
          v102 = Data1;
          v9 = *((_WORD *)v3 + 2);
          v107 = v9;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 8LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          v90 = 4LL;
          v92 = 4LL;
          v94 = 4LL;
          v96 = 4LL;
          v98 = 4LL;
          v10 = Data1;
          v100 = 2LL;
          v103 = v4;
          v104 = &v9;
          v105 = 2LL;
          v106 = v3;
          v108 = v4;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003B331, 0LL, v2, 0x2Bu, &pData);
        }
      }
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000100uLL) )
    {
      v111 = 4LL;
      v110 = &unk_1C003F298;
      v113 = 4LL;
      v112 = v7 + 10;
      v114 = v7 + 8;
      v12 = *v7;
      v116 = &v12;
      v118 = v7 + 11;
      v11 = v7[12];
      v122 = &v11;
      v9 = *((_WORD *)v7 + 2);
      v127 = v9;
      v115 = 8LL;
      v117 = 4LL;
      v119 = 4LL;
      v120 = v6;
      v121 = 4LL;
      v123 = 4LL;
      v124 = &v9;
      v125 = 2LL;
      v126 = v7;
      v128 = v8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003B2C0, 0LL, v6, 0xBu, &v109);
    }
  }
}
