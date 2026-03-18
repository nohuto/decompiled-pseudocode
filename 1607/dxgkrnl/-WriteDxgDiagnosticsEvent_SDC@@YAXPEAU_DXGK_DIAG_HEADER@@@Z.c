/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B98C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ExtractResolutionAndPosition@@YAXPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAUTelemetryPathInfo@@I@Z @ 0x1C0023900 (-ExtractResolutionAndPosition@@YAXPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPE.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SDC(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v2; // edi
  struct DISPLAYCONFIG_PATH_INFO *v3; // r13
  unsigned int v4; // r15d
  unsigned int v5; // esi
  const GUID *v6; // r9
  unsigned __int64 v7; // r10
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // si
  const GUID *v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int16 v12; // si
  unsigned int v13; // eax
  const GUID *v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int16 v16; // si
  unsigned int v17; // eax
  const GUID *v18; // r9
  __int64 v19; // r10
  unsigned __int16 v20; // si
  unsigned int v21; // eax
  const GUID *v22; // r9
  unsigned __int64 v23; // r10
  unsigned int pData; // [rsp+30h] [rbp-D8h]
  unsigned __int16 v25; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v26; // [rsp+3Ah] [rbp-CEh] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  int v30; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  int v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v39; // [rsp+74h] [rbp-94h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  struct DISPLAYCONFIG_MODE_INFO *v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+98h] [rbp-70h] BYREF
  int v45; // [rsp+A0h] [rbp-68h] BYREF
  int v46; // [rsp+A4h] [rbp-64h] BYREF
  int v47; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v50; // [rsp+C8h] [rbp-40h] BYREF
  void *v51; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v52; // [rsp+F0h] [rbp-18h]
  char *v53; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v54; // [rsp+100h] [rbp-8h]
  char *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  int *v57; // [rsp+118h] [rbp+10h]
  unsigned __int64 v58; // [rsp+120h] [rbp+18h]
  char *v59; // [rsp+128h] [rbp+20h]
  unsigned __int64 v60; // [rsp+130h] [rbp+28h]
  char *v61; // [rsp+138h] [rbp+30h]
  __int64 v62; // [rsp+140h] [rbp+38h]
  char *v63; // [rsp+148h] [rbp+40h]
  unsigned __int64 v64; // [rsp+150h] [rbp+48h]
  unsigned int *v65; // [rsp+158h] [rbp+50h]
  unsigned __int64 v66; // [rsp+160h] [rbp+58h]
  unsigned int *v67; // [rsp+168h] [rbp+60h]
  unsigned __int64 v68; // [rsp+170h] [rbp+68h]
  char *v69; // [rsp+178h] [rbp+70h]
  unsigned __int64 v70; // [rsp+180h] [rbp+78h]
  int *v71; // [rsp+188h] [rbp+80h]
  unsigned __int64 v72; // [rsp+190h] [rbp+88h]
  int *v73; // [rsp+198h] [rbp+90h]
  unsigned __int64 v74; // [rsp+1A0h] [rbp+98h]
  int *v75; // [rsp+1A8h] [rbp+A0h]
  unsigned __int64 v76; // [rsp+1B0h] [rbp+A8h]
  int *v77; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v78; // [rsp+1C0h] [rbp+B8h]
  int *v79; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v80; // [rsp+1D0h] [rbp+C8h]
  char *v81; // [rsp+1D8h] [rbp+D0h]
  unsigned __int64 v82; // [rsp+1E0h] [rbp+D8h]
  unsigned __int16 *v83; // [rsp+1E8h] [rbp+E0h]
  __int64 v84; // [rsp+1F0h] [rbp+E8h]
  struct _DXGK_DIAG_HEADER *v85; // [rsp+1F8h] [rbp+F0h]
  __int64 v86; // [rsp+200h] [rbp+F8h]
  char *v87; // [rsp+208h] [rbp+100h]
  unsigned __int64 v88; // [rsp+210h] [rbp+108h]
  char *v89; // [rsp+218h] [rbp+110h]
  unsigned __int64 v90; // [rsp+220h] [rbp+118h]
  _QWORD *v91; // [rsp+228h] [rbp+120h]
  unsigned __int64 v92; // [rsp+230h] [rbp+128h]
  _QWORD *v93; // [rsp+238h] [rbp+130h]
  unsigned __int64 v94; // [rsp+240h] [rbp+138h]
  char *v95; // [rsp+248h] [rbp+140h]
  unsigned __int64 v96; // [rsp+250h] [rbp+148h]
  __int64 *v97; // [rsp+258h] [rbp+150h]
  unsigned __int64 v98; // [rsp+260h] [rbp+158h]
  _QWORD *v99; // [rsp+268h] [rbp+160h]
  unsigned __int64 v100; // [rsp+270h] [rbp+168h]
  char *v101; // [rsp+278h] [rbp+170h]
  unsigned __int64 v102; // [rsp+280h] [rbp+178h]
  unsigned __int16 *v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  struct DISPLAYCONFIG_PATH_INFO *v105; // [rsp+298h] [rbp+190h]
  __int64 v106; // [rsp+2A0h] [rbp+198h]
  char *v107; // [rsp+2A8h] [rbp+1A0h]
  __int64 v108; // [rsp+2B0h] [rbp+1A8h]
  struct DISPLAYCONFIG_MODE_INFO *v109; // [rsp+2B8h] [rbp+1B0h]
  unsigned __int64 v110; // [rsp+2C0h] [rbp+1B8h]
  __int16 *v111; // [rsp+2C8h] [rbp+1C0h]
  __int64 v112; // [rsp+2D0h] [rbp+1C8h]
  struct _DXGK_DIAG_HEADER *v113; // [rsp+2D8h] [rbp+1D0h]
  unsigned __int64 v114; // [rsp+2E0h] [rbp+1D8h]
  char *v115; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v116; // [rsp+2F0h] [rbp+1E8h]
  __int64 *v117; // [rsp+2F8h] [rbp+1F0h]
  unsigned __int64 v118; // [rsp+300h] [rbp+1F8h]
  _QWORD *v119; // [rsp+308h] [rbp+200h]
  unsigned __int64 v120; // [rsp+310h] [rbp+208h]
  char *v121; // [rsp+318h] [rbp+210h]
  unsigned __int64 v122; // [rsp+320h] [rbp+218h]
  int *v123; // [rsp+328h] [rbp+220h]
  __int64 v124; // [rsp+330h] [rbp+228h]
  struct DISPLAYCONFIG_PATH_INFO *v125; // [rsp+338h] [rbp+230h]
  __int64 v126; // [rsp+340h] [rbp+238h]
  char *v127; // [rsp+348h] [rbp+240h]
  __int64 v128; // [rsp+350h] [rbp+248h]
  struct DISPLAYCONFIG_MODE_INFO *v129; // [rsp+358h] [rbp+250h]
  unsigned __int64 v130; // [rsp+360h] [rbp+258h]
  __int16 *v131; // [rsp+368h] [rbp+260h]
  __int64 v132; // [rsp+370h] [rbp+268h]
  struct _DXGK_DIAG_HEADER *v133; // [rsp+378h] [rbp+270h]
  unsigned __int64 v134; // [rsp+380h] [rbp+278h]
  int *v135; // [rsp+388h] [rbp+280h]
  unsigned __int64 v136; // [rsp+390h] [rbp+288h]
  int *v137; // [rsp+398h] [rbp+290h]
  unsigned __int64 v138; // [rsp+3A0h] [rbp+298h]
  _QWORD *v139; // [rsp+3A8h] [rbp+2A0h]
  unsigned __int64 v140; // [rsp+3B0h] [rbp+2A8h]
  char *v141; // [rsp+3B8h] [rbp+2B0h]
  unsigned __int64 v142; // [rsp+3C0h] [rbp+2B8h]
  unsigned __int16 *v143; // [rsp+3C8h] [rbp+2C0h]
  __int64 v144; // [rsp+3D0h] [rbp+2C8h]
  struct DISPLAYCONFIG_PATH_INFO *v145; // [rsp+3D8h] [rbp+2D0h]
  __int64 v146; // [rsp+3E0h] [rbp+2D8h]
  char *v147; // [rsp+3E8h] [rbp+2E0h]
  __int64 v148; // [rsp+3F0h] [rbp+2E8h]
  struct DISPLAYCONFIG_MODE_INFO *v149; // [rsp+3F8h] [rbp+2F0h]
  unsigned __int64 v150; // [rsp+400h] [rbp+2F8h]
  __int16 *v151; // [rsp+408h] [rbp+300h]
  __int64 v152; // [rsp+410h] [rbp+308h]
  struct _DXGK_DIAG_HEADER *v153; // [rsp+418h] [rbp+310h]
  unsigned __int64 v154; // [rsp+420h] [rbp+318h]
  int *v155; // [rsp+428h] [rbp+320h]
  unsigned __int64 v156; // [rsp+430h] [rbp+328h]
  int *v157; // [rsp+438h] [rbp+330h]
  unsigned __int64 v158; // [rsp+440h] [rbp+338h]
  _QWORD *v159; // [rsp+448h] [rbp+340h]
  unsigned __int64 v160; // [rsp+450h] [rbp+348h]
  char *v161; // [rsp+458h] [rbp+350h]
  unsigned __int64 v162; // [rsp+460h] [rbp+358h]
  __int16 *v163; // [rsp+468h] [rbp+360h]
  __int64 v164; // [rsp+470h] [rbp+368h]
  struct DISPLAYCONFIG_PATH_INFO *v165; // [rsp+478h] [rbp+370h]
  int v166; // [rsp+480h] [rbp+378h]
  int v167; // [rsp+484h] [rbp+37Ch]
  int *v168; // [rsp+488h] [rbp+380h]
  __int64 v169; // [rsp+490h] [rbp+388h]
  struct DISPLAYCONFIG_MODE_INFO *v170; // [rsp+498h] [rbp+390h]
  int v171; // [rsp+4A0h] [rbp+398h]
  int v172; // [rsp+4A4h] [rbp+39Ch]
  unsigned __int16 *v173; // [rsp+4A8h] [rbp+3A0h]
  __int64 v174; // [rsp+4B0h] [rbp+3A8h]
  struct _DXGK_DIAG_HEADER *v175; // [rsp+4B8h] [rbp+3B0h]
  int v176; // [rsp+4C0h] [rbp+3B8h]
  int v177; // [rsp+4C4h] [rbp+3BCh]
  _QWORD v178[24]; // [rsp+4C8h] [rbp+3C0h] BYREF

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000001uLL) )
  {
    v2 = *((_DWORD *)a1 + 12);
    if ( (v2 & 1) != 0 )
    {
      v3 = 0LL;
      v4 = 0;
    }
    else
    {
      v4 = *((_DWORD *)a1 + 13);
      v3 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 88);
    }
    v37 = v4;
    if ( ((v2 >> 1) & 1) != 0 )
    {
      v43 = 0LL;
      v5 = 0;
    }
    else
    {
      v5 = *((_DWORD *)a1 + 14);
      v43 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 72 * *((unsigned int *)a1 + 13) + 88);
    }
    v36 = v5;
    memset(v178, 0, sizeof(v178));
    ExtractResolutionAndPosition(v3, v4, v43, v5, (struct TelemetryPathInfo *)v178, pData);
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1u:
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v52 = v19;
            v51 = &unk_1C003F298;
            v53 = (char *)a1 + 40;
            v55 = (char *)a1 + 32;
            v33 = *(_DWORD *)a1;
            v57 = &v33;
            v59 = (char *)a1 + 44;
            v61 = (char *)a1 + 80;
            v63 = (char *)a1 + 72;
            v65 = &v36;
            v67 = &v37;
            v69 = (char *)a1 + 60;
            v32 = *((_DWORD *)a1 + 16);
            v71 = &v32;
            v31 = (v2 >> 2) & 1;
            v54 = v19;
            v73 = &v31;
            v75 = &v30;
            v77 = &v29;
            v79 = &v28;
            v81 = (char *)a1 + 68;
            v35 = BYTE4(v178[1]);
            v83 = (unsigned __int16 *)&v35;
            v42 = v178[2];
            v85 = (struct _DXGK_DIAG_HEADER *)&v42;
            v87 = (char *)&v178[4] + 4;
            v89 = (char *)v178 + 4;
            v91 = &v178[4];
            v56 = 8LL;
            v58 = v19;
            v60 = v19;
            v62 = 8LL;
            v64 = v19;
            v66 = v19;
            v68 = v19;
            v70 = v19;
            v72 = v19;
            v74 = v19;
            v30 = (v2 >> 1) & 1;
            v76 = v19;
            v29 = v2 & 1;
            v78 = v19;
            v28 = (v2 >> 3) & 1;
            v80 = v19;
            v82 = v19;
            v84 = v19;
            v86 = 8LL;
            v88 = v19;
            v90 = v19;
            v92 = v19;
            v93 = &v178[1];
            v95 = (char *)&v34 + 4;
            v34 = v178[3];
            v97 = &v34;
            v99 = &v178[5];
            v101 = (char *)&v178[5] + 4;
            v103 = &v25;
            v107 = (char *)&v27;
            v20 = (_WORD)v5 << 6;
            v109 = v43;
            LODWORD(v110) = v20;
            v21 = *((unsigned __int16 *)a1 + 2);
            v25 = 72;
            v106 = 72LL;
            v26 = v21;
            v114 = __PAIR64__((unsigned int)v18, v21);
            v94 = v19;
            v96 = v19;
            v98 = v19;
            v100 = v19;
            v102 = v19;
            v104 = 2LL;
            v105 = v3;
            LOWORD(v27) = v20;
            v108 = 2LL;
            HIDWORD(v110) = (_DWORD)v18;
            v111 = &v26;
            v112 = 2LL;
            v113 = a1;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003D60B, 0LL, v18, 0x22u, &v50);
          }
          break;
        case 2u:
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v52 = v15;
            v51 = &unk_1C003F298;
            v53 = (char *)a1 + 40;
            v55 = (char *)a1 + 32;
            v33 = *(_DWORD *)a1;
            v57 = &v33;
            v59 = (char *)a1 + 44;
            v61 = (char *)a1 + 80;
            v63 = (char *)a1 + 72;
            v65 = &v36;
            v67 = &v37;
            v69 = (char *)a1 + 60;
            v32 = *((_DWORD *)a1 + 16);
            v71 = &v32;
            v31 = (v2 >> 2) & 1;
            v54 = v15;
            v73 = &v31;
            v75 = &v30;
            v77 = &v29;
            v79 = &v28;
            v81 = (char *)a1 + 68;
            v35 = BYTE4(v178[1]);
            v83 = (unsigned __int16 *)&v35;
            v42 = v178[2];
            v85 = (struct _DXGK_DIAG_HEADER *)&v42;
            v87 = (char *)&v178[4] + 4;
            v89 = (char *)v178 + 4;
            v91 = &v178[4];
            v56 = 8LL;
            v58 = v15;
            v60 = v15;
            v62 = 8LL;
            v64 = v15;
            v66 = v15;
            v68 = v15;
            v70 = v15;
            v72 = v15;
            v74 = v15;
            v30 = (v2 >> 1) & 1;
            v76 = v15;
            v29 = v2 & 1;
            v78 = v15;
            v28 = (v2 >> 3) & 1;
            v80 = v15;
            v82 = v15;
            v84 = v15;
            v86 = 8LL;
            v88 = v15;
            v90 = v15;
            v92 = v15;
            v93 = &v178[1];
            v95 = (char *)&v34 + 4;
            v34 = v178[3];
            v97 = &v34;
            v99 = &v178[5];
            v101 = (char *)&v178[5] + 4;
            v39 = BYTE4(v178[7]);
            v103 = (unsigned __int16 *)&v39;
            v44 = v178[8];
            v105 = (struct DISPLAYCONFIG_PATH_INFO *)&v44;
            v107 = (char *)&v178[10] + 4;
            v109 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[6] + 4);
            v111 = (__int16 *)&v178[10];
            v113 = (struct _DXGK_DIAG_HEADER *)&v178[7];
            v115 = (char *)&v38 + 4;
            v38 = v178[9];
            v117 = &v38;
            v119 = &v178[11];
            v121 = (char *)&v178[11] + 4;
            v123 = (int *)&v25;
            v127 = (char *)&v27;
            v16 = (_WORD)v5 << 6;
            v129 = v43;
            LODWORD(v130) = v16;
            v17 = *((unsigned __int16 *)a1 + 2);
            v25 = 144;
            v126 = 144LL;
            v26 = v17;
            v134 = __PAIR64__((unsigned int)v14, v17);
            v94 = v15;
            v96 = v15;
            v98 = v15;
            v100 = v15;
            v102 = v15;
            v104 = v15;
            v106 = 8LL;
            v108 = v15;
            v110 = v15;
            v112 = v15;
            v114 = v15;
            v116 = v15;
            v118 = v15;
            v120 = v15;
            v122 = v15;
            v124 = 2LL;
            v125 = v3;
            LOWORD(v27) = v16;
            v128 = 2LL;
            HIDWORD(v130) = (_DWORD)v14;
            v131 = &v26;
            v132 = 2LL;
            v133 = a1;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003D377, 0LL, v14, 0x2Cu, &v50);
          }
          break;
        case 3u:
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
          {
            v52 = v11;
            v51 = &unk_1C003F298;
            v53 = (char *)a1 + 40;
            v55 = (char *)a1 + 32;
            v33 = *(_DWORD *)a1;
            v57 = &v33;
            v59 = (char *)a1 + 44;
            v61 = (char *)a1 + 80;
            v63 = (char *)a1 + 72;
            v65 = &v36;
            v67 = &v37;
            v69 = (char *)a1 + 60;
            v32 = *((_DWORD *)a1 + 16);
            v71 = &v32;
            v31 = (v2 >> 2) & 1;
            v54 = v11;
            v73 = &v31;
            v75 = &v30;
            v77 = &v29;
            v79 = &v28;
            v81 = (char *)a1 + 68;
            v35 = BYTE4(v178[1]);
            v83 = (unsigned __int16 *)&v35;
            v42 = v178[2];
            v85 = (struct _DXGK_DIAG_HEADER *)&v42;
            v87 = (char *)&v178[4] + 4;
            v89 = (char *)v178 + 4;
            v91 = &v178[4];
            v56 = 8LL;
            v58 = v11;
            v60 = v11;
            v62 = 8LL;
            v64 = v11;
            v66 = v11;
            v68 = v11;
            v70 = v11;
            v72 = v11;
            v74 = v11;
            v30 = (v2 >> 1) & 1;
            v76 = v11;
            v29 = v2 & 1;
            v78 = v11;
            v28 = (v2 >> 3) & 1;
            v80 = v11;
            v82 = v11;
            v84 = v11;
            v86 = 8LL;
            v88 = v11;
            v90 = v11;
            v92 = v11;
            v93 = &v178[1];
            v95 = (char *)&v34 + 4;
            v34 = v178[3];
            v97 = &v34;
            v99 = &v178[5];
            v101 = (char *)&v178[5] + 4;
            v39 = BYTE4(v178[7]);
            v103 = (unsigned __int16 *)&v39;
            v44 = v178[8];
            v105 = (struct DISPLAYCONFIG_PATH_INFO *)&v44;
            v107 = (char *)&v178[10] + 4;
            v109 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[6] + 4);
            v111 = (__int16 *)&v178[10];
            v113 = (struct _DXGK_DIAG_HEADER *)&v178[7];
            v115 = (char *)&v38 + 4;
            v38 = v178[9];
            v117 = &v38;
            v119 = &v178[11];
            v121 = (char *)&v178[11] + 4;
            v41 = BYTE4(v178[13]);
            v123 = &v41;
            v48 = v178[14];
            v125 = (struct DISPLAYCONFIG_PATH_INFO *)&v48;
            v127 = (char *)&v178[16] + 4;
            v129 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[12] + 4);
            v131 = (__int16 *)&v178[16];
            v133 = (struct _DXGK_DIAG_HEADER *)&v178[13];
            v94 = v11;
            v96 = v11;
            v98 = v11;
            v100 = v11;
            v102 = v11;
            v104 = v11;
            v106 = 8LL;
            v108 = v11;
            v110 = v11;
            v112 = v11;
            v114 = v11;
            v116 = v11;
            v118 = v11;
            v120 = v11;
            v122 = v11;
            v124 = v11;
            v126 = 8LL;
            v128 = v11;
            v130 = v11;
            v132 = v11;
            v134 = v11;
            v135 = (int *)&v40 + 1;
            v40 = v178[15];
            v137 = (int *)&v40;
            v139 = &v178[17];
            v141 = (char *)&v178[17] + 4;
            v143 = &v25;
            v147 = (char *)&v27;
            v12 = (_WORD)v5 << 6;
            v149 = v43;
            LODWORD(v150) = v12;
            v13 = *((unsigned __int16 *)a1 + 2);
            v25 = 216;
            v146 = 216LL;
            v26 = v13;
            v154 = __PAIR64__((unsigned int)v10, v13);
            v136 = v11;
            v138 = v11;
            v140 = v11;
            v142 = v11;
            v144 = 2LL;
            v145 = v3;
            LOWORD(v27) = v12;
            v148 = 2LL;
            HIDWORD(v150) = (_DWORD)v10;
            v151 = &v26;
            v152 = 2LL;
            v153 = a1;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003D031, 0LL, v10, 0x36u, &v50);
          }
          break;
        default:
          if ( hProvider > 4u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
            {
              v52 = v7;
              v51 = &unk_1C003F298;
              v53 = (char *)a1 + 40;
              v55 = (char *)a1 + 32;
              v45 = *(_DWORD *)a1;
              v57 = &v45;
              v59 = (char *)a1 + 44;
              v61 = (char *)a1 + 80;
              v63 = (char *)a1 + 72;
              v65 = &v36;
              v67 = &v37;
              v69 = (char *)a1 + 60;
              v46 = *((_DWORD *)a1 + 16);
              v71 = &v46;
              v47 = (v2 >> 2) & 1;
              v54 = v7;
              v73 = &v47;
              v75 = (int *)&v40;
              v77 = (int *)&v40 + 1;
              v79 = &v41;
              v81 = (char *)a1 + 68;
              LODWORD(v38) = BYTE4(v178[1]);
              v83 = (unsigned __int16 *)&v38;
              v49 = v178[2];
              v85 = (struct _DXGK_DIAG_HEADER *)&v49;
              v87 = (char *)&v178[4] + 4;
              v89 = (char *)v178 + 4;
              v91 = &v178[4];
              v56 = 8LL;
              v58 = v7;
              v60 = v7;
              v62 = 8LL;
              v64 = v7;
              v66 = v7;
              v68 = v7;
              v70 = v7;
              v72 = v7;
              v74 = v7;
              LODWORD(v40) = (v2 >> 1) & 1;
              v76 = v7;
              HIDWORD(v40) = v2 & 1;
              v78 = v7;
              v41 = (v2 >> 3) & 1;
              v80 = v7;
              v82 = v7;
              v84 = v7;
              v86 = 8LL;
              v88 = v7;
              v90 = v7;
              v92 = v7;
              v93 = &v178[1];
              HIDWORD(v38) = HIDWORD(v178[3]);
              v95 = (char *)&v38 + 4;
              v39 = v178[3];
              v97 = (__int64 *)&v39;
              v99 = &v178[5];
              v101 = (char *)&v178[5] + 4;
              LODWORD(v34) = BYTE4(v178[7]);
              v103 = (unsigned __int16 *)&v34;
              v48 = v178[8];
              v105 = (struct DISPLAYCONFIG_PATH_INFO *)&v48;
              v107 = (char *)&v178[10] + 4;
              v109 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[6] + 4);
              v111 = (__int16 *)&v178[10];
              v113 = (struct _DXGK_DIAG_HEADER *)&v178[7];
              HIDWORD(v34) = HIDWORD(v178[9]);
              v115 = (char *)&v34 + 4;
              v35 = v178[9];
              v117 = (__int64 *)&v35;
              v119 = &v178[11];
              v121 = (char *)&v178[11] + 4;
              v28 = BYTE4(v178[13]);
              v123 = &v28;
              v44 = v178[14];
              v125 = (struct DISPLAYCONFIG_PATH_INFO *)&v44;
              v127 = (char *)&v178[16] + 4;
              v129 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[12] + 4);
              v131 = (__int16 *)&v178[16];
              v133 = (struct _DXGK_DIAG_HEADER *)&v178[13];
              v29 = HIDWORD(v178[15]);
              v94 = v7;
              v96 = v7;
              v98 = v7;
              v100 = v7;
              v102 = v7;
              v104 = v7;
              v106 = 8LL;
              v108 = v7;
              v110 = v7;
              v112 = v7;
              v114 = v7;
              v116 = v7;
              v118 = v7;
              v120 = v7;
              v122 = v7;
              v124 = v7;
              v126 = 8LL;
              v128 = v7;
              v130 = v7;
              v132 = v7;
              v134 = v7;
              v135 = &v29;
              v30 = v178[15];
              v137 = &v30;
              v139 = &v178[17];
              v141 = (char *)&v178[17] + 4;
              v31 = BYTE4(v178[19]);
              v143 = (unsigned __int16 *)&v31;
              v42 = v178[20];
              v145 = (struct DISPLAYCONFIG_PATH_INFO *)&v42;
              v147 = (char *)&v178[22] + 4;
              v149 = (struct DISPLAYCONFIG_MODE_INFO *)((char *)&v178[18] + 4);
              v151 = (__int16 *)&v178[22];
              v153 = (struct _DXGK_DIAG_HEADER *)&v178[19];
              v32 = HIDWORD(v178[21]);
              v155 = &v32;
              v33 = v178[21];
              v157 = &v33;
              v159 = &v178[23];
              v161 = (char *)&v178[23] + 4;
              v136 = v7;
              v8 = 72 * v4;
              v163 = &v26;
              v166 = v8;
              v168 = &v27;
              v9 = (_WORD)v5 << 6;
              v170 = v43;
              v171 = v9;
              v25 = *((_WORD *)a1 + 2);
              v176 = v25;
              v138 = v7;
              v140 = v7;
              v142 = v7;
              v144 = v7;
              v146 = 8LL;
              v148 = v7;
              v150 = v7;
              v152 = v7;
              v154 = v7;
              v156 = v7;
              v158 = v7;
              v160 = v7;
              v162 = v7;
              v26 = v8;
              v164 = 2LL;
              v165 = v3;
              v167 = (int)v6;
              LOWORD(v27) = v9;
              v169 = 2LL;
              v172 = (int)v6;
              v173 = &v25;
              v174 = 2LL;
              v175 = a1;
              v177 = (int)v6;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003CC39, 0LL, v6, 0x40u, &v50);
            }
          }
          break;
      }
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v52 = v23;
      v51 = &unk_1C003F298;
      v54 = v23;
      v53 = (char *)a1 + 40;
      v55 = (char *)a1 + 32;
      v33 = *(_DWORD *)a1;
      v57 = &v33;
      v59 = (char *)a1 + 44;
      v61 = (char *)a1 + 80;
      v63 = (char *)a1 + 72;
      v65 = &v36;
      v67 = &v37;
      v69 = (char *)a1 + 60;
      v32 = *((_DWORD *)a1 + 16);
      v71 = &v32;
      v31 = (v2 >> 2) & 1;
      v56 = 8LL;
      v73 = &v31;
      v75 = &v30;
      v77 = &v29;
      v79 = &v28;
      v81 = (char *)a1 + 68;
      v25 = *((_WORD *)a1 + 2);
      LODWORD(v86) = v25;
      v58 = v23;
      v60 = v23;
      v62 = 8LL;
      v64 = v23;
      v66 = v23;
      v68 = v23;
      v70 = v23;
      v72 = v23;
      v74 = v23;
      v30 = (v2 >> 1) & 1;
      v76 = v23;
      v29 = v2 & 1;
      v78 = v23;
      v28 = (v2 >> 3) & 1;
      v80 = v23;
      v82 = v23;
      v83 = &v25;
      v84 = 2LL;
      v85 = a1;
      HIDWORD(v86) = (_DWORD)v22;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003D7ED, 0LL, v22, 0x14u, &v50);
    }
  }
}
