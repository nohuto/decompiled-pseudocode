/*
 * XREFs of ?WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000AE88
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  unsigned int v2; // eax
  const GUID *v3; // r9
  int *v4; // r10
  int v5; // r11d
  unsigned __int16 v6; // cx
  const GUID *v7; // r9
  int *v8; // r10
  int v9; // r11d
  unsigned __int16 v10; // cx
  const GUID *v11; // r9
  int *v12; // r10
  int v13; // r11d
  unsigned __int16 v14; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v15; // [rsp+3Ah] [rbp-CEh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData[2]; // [rsp+88h] [rbp-80h] BYREF
  void *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  const GUID *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  int *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  int *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  int *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  int *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  int *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  int *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  int *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  int *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  int *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  unsigned __int16 *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  unsigned __int16 *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  int *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  int *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  int *v82; // [rsp+228h] [rbp+120h]
  __int64 v83; // [rsp+230h] [rbp+128h]
  int *v84; // [rsp+238h] [rbp+130h]
  __int64 v85; // [rsp+240h] [rbp+138h]
  int *v86; // [rsp+248h] [rbp+140h]
  __int64 v87; // [rsp+250h] [rbp+148h]
  int *v88; // [rsp+258h] [rbp+150h]
  __int64 v89; // [rsp+260h] [rbp+158h]
  int *v90; // [rsp+268h] [rbp+160h]
  __int64 v91; // [rsp+270h] [rbp+168h]
  int *v92; // [rsp+278h] [rbp+170h]
  __int64 v93; // [rsp+280h] [rbp+178h]
  int *v94; // [rsp+288h] [rbp+180h]
  __int64 v95; // [rsp+290h] [rbp+188h]
  unsigned __int16 *v96; // [rsp+298h] [rbp+190h]
  __int64 v97; // [rsp+2A0h] [rbp+198h]
  int *v98; // [rsp+2A8h] [rbp+1A0h]
  int v99; // [rsp+2B0h] [rbp+1A8h]
  int v100; // [rsp+2B4h] [rbp+1ACh]
  unsigned __int16 *v101; // [rsp+2B8h] [rbp+1B0h]
  __int64 v102; // [rsp+2C0h] [rbp+1B8h]
  int *v103; // [rsp+2C8h] [rbp+1C0h]
  int v104; // [rsp+2D0h] [rbp+1C8h]
  int v105; // [rsp+2D4h] [rbp+1CCh]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+2D8h] [rbp+1D0h] BYREF
  void *v107; // [rsp+2F8h] [rbp+1F0h]
  __int64 v108; // [rsp+300h] [rbp+1F8h]
  int *v109; // [rsp+308h] [rbp+200h]
  __int64 v110; // [rsp+310h] [rbp+208h]
  int *v111; // [rsp+318h] [rbp+210h]
  __int64 v112; // [rsp+320h] [rbp+218h]
  int *v113; // [rsp+328h] [rbp+220h]
  __int64 v114; // [rsp+330h] [rbp+228h]
  int *v115; // [rsp+338h] [rbp+230h]
  __int64 v116; // [rsp+340h] [rbp+238h]
  const GUID *v117; // [rsp+348h] [rbp+240h]
  __int64 v118; // [rsp+350h] [rbp+248h]
  int *v119; // [rsp+358h] [rbp+250h]
  __int64 v120; // [rsp+360h] [rbp+258h]
  unsigned __int16 *v121; // [rsp+368h] [rbp+260h]
  __int64 v122; // [rsp+370h] [rbp+268h]
  int *v123; // [rsp+378h] [rbp+270h]
  int v124; // [rsp+380h] [rbp+278h]
  int v125; // [rsp+384h] [rbp+27Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000800uLL) )
  {
    v2 = *(_DWORD *)(v1 + 48);
    if ( v2 <= 1 )
    {
      if ( v2 )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
        {
          v35 = 4LL;
          v34 = &unk_1C003F298;
          v37 = 4LL;
          v36 = v8 + 10;
          v38 = v8 + 8;
          v16 = *v8;
          v40 = &v16;
          v42 = v8 + 11;
          v46 = v8 + 13;
          v31 = *((_QWORD *)v8 + 8);
          v48 = &v31;
          v50 = v8 + 26;
          v23 = v8[20];
          v52 = &v23;
          v22 = v8[21];
          v54 = &v22;
          v21 = v8[25];
          v56 = &v21;
          v20 = v8[22];
          v58 = &v20;
          v19 = v8[24];
          v60 = &v19;
          v18 = v8[23];
          v62 = &v18;
          v64 = v8 + 18;
          v17 = v8[19];
          v66 = &v17;
          v70 = v8 + 15;
          v10 = 52 * LOWORD(v7->Data1);
          v39 = 8LL;
          v41 = 4LL;
          v43 = 4LL;
          v44 = v7;
          v14 = v10;
          v45 = 4LL;
          v47 = 4LL;
          v49 = 8LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v68 = v8 + 14;
          v69 = 4LL;
          v71 = 4LL;
          v72 = &v14;
          v73 = 2LL;
          v74 = v8 + 14;
          LODWORD(v75) = v10;
          v15 = *((_WORD *)v8 + 2);
          LODWORD(v79) = v15;
          HIDWORD(v75) = v9;
          v76 = &v15;
          v77 = 2LL;
          v78 = v8;
          HIDWORD(v79) = v9;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0039E7F, 0LL, v7, 0x19u, pData);
        }
      }
      else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
      {
        v108 = 4LL;
        v107 = &unk_1C003F298;
        v110 = 4LL;
        v109 = v12 + 10;
        v111 = v12 + 8;
        v16 = *v12;
        v113 = &v16;
        v115 = v12 + 11;
        v119 = v12 + 13;
        v14 = *((_WORD *)v12 + 2);
        v124 = v14;
        v112 = 8LL;
        v114 = 4LL;
        v116 = 4LL;
        v117 = v11;
        v118 = 4LL;
        v120 = 4LL;
        v121 = &v14;
        v122 = 2LL;
        v123 = v12;
        v125 = v13;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0039E0B, 0LL, v11, 0xBu, &v106);
      }
    }
    else if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
      {
        v35 = 4LL;
        v34 = &unk_1C003F298;
        v37 = 4LL;
        v36 = v4 + 10;
        v38 = v4 + 8;
        v24 = *v4;
        v40 = &v24;
        v42 = v4 + 11;
        v46 = v4 + 13;
        v32 = *((_QWORD *)v4 + 8);
        v48 = &v32;
        v50 = v4 + 26;
        v25 = v4[20];
        v52 = &v25;
        v26 = v4[21];
        v54 = &v26;
        v27 = v4[25];
        v56 = &v27;
        v28 = v4[22];
        v58 = &v28;
        v29 = v4[24];
        v60 = &v29;
        v30 = v4[23];
        v62 = &v30;
        v64 = v4 + 18;
        v17 = v4[19];
        v66 = &v17;
        v70 = v4 + 15;
        v31 = *(_QWORD *)(v4 + 29);
        v72 = (unsigned __int16 *)&v31;
        v74 = v4 + 39;
        v39 = 8LL;
        v41 = 4LL;
        v43 = 4LL;
        v44 = v3;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 8LL;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v68 = v4 + 14;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 8LL;
        v18 = v4[33];
        v76 = (unsigned __int16 *)&v18;
        v19 = v4[34];
        v78 = &v19;
        v20 = v4[38];
        v80 = &v20;
        v21 = v4[35];
        v82 = &v21;
        v22 = v4[37];
        v84 = &v22;
        v23 = v4[36];
        v86 = &v23;
        v88 = v4 + 31;
        v16 = v4[32];
        v90 = &v16;
        v92 = v4 + 27;
        v94 = v4 + 28;
        v6 = 52 * LOWORD(v3->Data1);
        v96 = &v15;
        v98 = v4 + 14;
        v75 = 4LL;
        v77 = 4LL;
        v99 = v6;
        v14 = *((_WORD *)v4 + 2);
        v104 = v14;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 4LL;
        v15 = v6;
        v97 = 2LL;
        v100 = v5;
        v101 = &v14;
        v102 = 2LL;
        v103 = v4;
        v105 = v5;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003A0BF, 0LL, v3, 0x25u, pData);
      }
    }
  }
}
