/*
 * XREFs of ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC
 * Callers:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0011068 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     CitSessionConnectChange @ 0x1C004EE90 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C00F595C (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C000EA00 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C000FD00 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C000FDF0 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C000FE34 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00106DC (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0010FFC (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0011184 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     TraceLoggingProviderEnabled @ 0x1C00117A4 (TraceLoggingProviderEnabled.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C00119A0 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0011DB0 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C0011EF0 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C004FC78 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     CitGetMonitorInfo @ 0x1C0057C00 (CitGetMonitorInfo.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z @ 0x1C00F5F8C (-CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00F62C0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C00F683C (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

__int64 __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagMONITOR *a5,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a6)
{
  unsigned int v6; // r12d
  struct tagPROCESSINFO *v7; // r15
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // r12d
  int v16; // edx
  unsigned int v17; // r8d
  int v18; // ecx
  bool v19; // cf
  unsigned int v20; // eax
  int v21; // edx
  unsigned int v22; // edx
  const struct _TlgProvider_t *v23; // rcx
  ULONGLONG v24; // r8
  __int16 v25; // ax
  struct tagPROCESSINFO *v26; // rdx
  struct _CIT_INTERACTION_SUMMARY *v27; // rax
  struct _CIT_INTERACTION_SUMMARY *v28; // r11
  unsigned int v29; // ecx
  int v30; // r8d
  unsigned int v31; // r9d
  int v32; // edx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // r11
  struct tagPROCESSINFO *v44; // r11
  _QWORD *v45; // r11
  UCHAR v46; // dl
  const struct _TlgProvider_t *v47; // rcx
  ULONGLONG v48; // r8
  __int64 v49; // rbx
  __int16 v50; // ax
  unsigned int v52; // edx
  struct _CIT_PROG_DATA *v53; // rax
  struct _CIT_IMPACT_CONTEXT *v54; // r10
  unsigned int v55; // eax
  int v56; // edx
  unsigned int v57; // r8d
  int v58; // ecx
  unsigned int v59; // eax
  int v60; // edx
  const struct _CIT_TIME_CONTEXT *v61; // rdx
  unsigned int v62; // eax
  int v63; // r8d
  int v64; // ecx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // r8d
  unsigned int v68; // ecx
  struct _CIT_PROG_DATA *v69; // r9
  _DWORD *v70; // r10
  int v71; // eax
  unsigned int v72; // ecx
  int v73; // edx
  int v74; // eax
  unsigned int v75; // ecx
  int v76; // edx
  int v77; // eax
  int v78; // ecx
  unsigned int v79; // edx
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // edx
  int v83; // eax
  int v84; // eax
  const GUID *v85; // r9
  __int64 v86; // r10
  char v87; // r11
  _QWORD *v88; // rsi
  __int128 v89; // xmm0
  __int16 v90; // ax
  const GUID *v91; // r9
  char v92; // [rsp+30h] [rbp-D0h] BYREF
  char v93; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v94; // [rsp+32h] [rbp-CEh] BYREF
  char v95; // [rsp+34h] [rbp-CCh] BYREF
  char v96; // [rsp+35h] [rbp-CBh] BYREF
  char v97; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v98; // [rsp+37h] [rbp-C9h] BYREF
  char v99; // [rsp+39h] [rbp-C7h] BYREF
  unsigned int v100; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v101; // [rsp+40h] [rbp-C0h] BYREF
  int v102; // [rsp+48h] [rbp-B8h] BYREF
  int v103; // [rsp+4Ch] [rbp-B4h]
  int v104; // [rsp+50h] [rbp-B0h] BYREF
  int v105; // [rsp+54h] [rbp-ACh]
  __int16 v106; // [rsp+58h] [rbp-A8h] BYREF
  struct _CIT_PROCESS *v107; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v108; // [rsp+68h] [rbp-98h] BYREF
  __int64 v109; // [rsp+70h] [rbp-90h] BYREF
  struct tagWND *v110; // [rsp+78h] [rbp-88h]
  struct _GUID v111; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v112; // [rsp+90h] [rbp-70h] BYREF
  _TBYTE v113; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v115; // [rsp+B8h] [rbp-48h]
  __int128 v116; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v117; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  char *v119; // [rsp+100h] [rbp+0h]
  __int64 v120; // [rsp+108h] [rbp+8h]
  __int128 *v121; // [rsp+110h] [rbp+10h]
  __int64 v122; // [rsp+118h] [rbp+18h]
  char *v123; // [rsp+120h] [rbp+20h]
  __int64 v124; // [rsp+128h] [rbp+28h]
  __int128 *v125; // [rsp+130h] [rbp+30h]
  __int64 v126; // [rsp+138h] [rbp+38h]
  unsigned int *v127; // [rsp+140h] [rbp+40h]
  __int64 v128; // [rsp+148h] [rbp+48h]
  int *v129; // [rsp+150h] [rbp+50h]
  __int64 v130; // [rsp+158h] [rbp+58h]
  int *v131; // [rsp+160h] [rbp+60h]
  __int64 v132; // [rsp+168h] [rbp+68h]
  __int16 *v133; // [rsp+170h] [rbp+70h]
  __int64 v134; // [rsp+178h] [rbp+78h]
  const GUID *v135; // [rsp+180h] [rbp+80h]
  __int64 v136; // [rsp+188h] [rbp+88h]
  char *v137; // [rsp+190h] [rbp+90h]
  __int64 v138; // [rsp+198h] [rbp+98h]
  unsigned __int16 *p_Data2; // [rsp+1A0h] [rbp+A0h]
  __int64 v140; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *Data4; // [rsp+1B0h] [rbp+B0h]
  __int64 v142; // [rsp+1B8h] [rbp+B8h]
  unsigned __int8 *v143; // [rsp+1C0h] [rbp+C0h]
  __int64 v144; // [rsp+1C8h] [rbp+C8h]
  unsigned __int16 *p_Data3; // [rsp+1D0h] [rbp+D0h]
  __int64 v146; // [rsp+1D8h] [rbp+D8h]
  int *v147; // [rsp+1E0h] [rbp+E0h]
  __int64 v148; // [rsp+1E8h] [rbp+E8h]
  __int64 *v149; // [rsp+1F0h] [rbp+F0h]
  __int64 v150; // [rsp+1F8h] [rbp+F8h]
  char *v151; // [rsp+200h] [rbp+100h]
  __int64 v152; // [rsp+208h] [rbp+108h]
  char *v153; // [rsp+210h] [rbp+110h]
  __int64 v154; // [rsp+218h] [rbp+118h]
  char *v155; // [rsp+220h] [rbp+120h]
  __int64 v156; // [rsp+228h] [rbp+128h]
  __int16 *v157; // [rsp+230h] [rbp+130h]
  __int64 v158; // [rsp+238h] [rbp+138h]
  char *v159; // [rsp+240h] [rbp+140h]
  __int64 v160; // [rsp+248h] [rbp+148h]
  char *v161; // [rsp+250h] [rbp+150h]
  __int64 v162; // [rsp+258h] [rbp+158h]
  unsigned __int8 *v163; // [rsp+260h] [rbp+160h]
  __int64 v164; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v165; // [rsp+270h] [rbp+170h]
  __int64 v166; // [rsp+278h] [rbp+178h]
  __int64 v167; // [rsp+280h] [rbp+180h]
  __int64 v168; // [rsp+288h] [rbp+188h]
  EVENT_DATA_DESCRIPTOR v169; // [rsp+290h] [rbp+190h] BYREF
  char *v170; // [rsp+2B0h] [rbp+1B0h]
  __int64 v171; // [rsp+2B8h] [rbp+1B8h]
  __int128 *v172; // [rsp+2C0h] [rbp+1C0h]
  __int64 v173; // [rsp+2C8h] [rbp+1C8h]
  char *v174; // [rsp+2D0h] [rbp+1D0h]
  __int64 v175; // [rsp+2D8h] [rbp+1D8h]
  __int128 *v176; // [rsp+2E0h] [rbp+1E0h]
  __int64 v177; // [rsp+2E8h] [rbp+1E8h]
  struct _CIT_PROCESS **v178; // [rsp+2F0h] [rbp+1F0h]
  __int64 v179; // [rsp+2F8h] [rbp+1F8h]
  _TBYTE *v180; // [rsp+300h] [rbp+200h]
  __int64 v181; // [rsp+308h] [rbp+208h]
  char *v182; // [rsp+310h] [rbp+210h]
  __int64 v183; // [rsp+318h] [rbp+218h]
  char *v184; // [rsp+320h] [rbp+220h]
  __int64 v185; // [rsp+328h] [rbp+228h]
  char *v186; // [rsp+330h] [rbp+230h]
  __int64 v187; // [rsp+338h] [rbp+238h]
  __int16 *v188; // [rsp+340h] [rbp+240h]
  __int64 v189; // [rsp+348h] [rbp+248h]
  char *v190; // [rsp+350h] [rbp+250h]
  __int64 v191; // [rsp+358h] [rbp+258h]
  char *v192; // [rsp+360h] [rbp+260h]
  __int64 v193; // [rsp+368h] [rbp+268h]
  unsigned int *v194; // [rsp+370h] [rbp+270h]
  __int64 v195; // [rsp+378h] [rbp+278h]
  _QWORD *v196; // [rsp+380h] [rbp+280h]
  __int64 v197; // [rsp+388h] [rbp+288h]

  v6 = 0;
  v7 = a3;
  v110 = a4;
  v100 = 0;
  if ( *((struct tagPROCESSINFO **)a1 + 55) == a3 )
    return 0LL;
  v10 = (char *)a1 + 544;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 544), a2);
  v11 = *((_QWORD *)v10 + 2);
  v108 = v11;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 568), a2);
  v12 = *((_QWORD *)a1 + 73);
  v13 = v11 - *((_DWORD *)a1 + 209);
  v109 = v12;
  if ( v13 > dword_1C011E5A4 )
  {
    v52 = 3;
LABEL_55:
    CitpPostUpdateUseInfoLog(a1, v52);
    *((_DWORD *)a1 + 209) = v11;
    *((_DWORD *)a1 + 208) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 208) > 2 * dword_1C011E5A4 )
  {
    v52 = 4;
    goto LABEL_55;
  }
LABEL_4:
  if ( *((_QWORD *)a1 + 55) )
  {
    v14 = *((_DWORD *)a1 + 158);
    v15 = -1;
    v16 = -1;
    v17 = a2 - *((_DWORD *)a1 + 114);
    v101 = v17;
    v18 = v14 + 1;
    v19 = v14 + 1 < v14;
    v20 = *((_DWORD *)a1 + 159);
    if ( !v19 )
      v16 = v18;
    *((_DWORD *)a1 + 158) = v16;
    v21 = -1;
    if ( v20 + v17 >= v20 )
      v21 = v20 + v17;
    *((_DWORD *)a1 + 159) = v21;
    v107 = *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 55) + 872LL);
    if ( v107 )
    {
      CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v108, &v104, (char *)a1 + 488);
      CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v109, &v102, (char *)a1 + 496);
      if ( byte_1C011E5C0 )
      {
        v53 = CitpProcessEnsureProgData(*((struct tagPROCESSINFO **)a1 + 55));
        v54 = v53
            ? (struct _CIT_PROG_DATA *)((char *)v53 + 88)
            : (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C011E5D0 + 216);
        if ( v54 )
        {
          v55 = *((_DWORD *)v54 + 6);
          v56 = -1;
          v57 = v101;
          v58 = v55 + 1;
          v19 = v55 + 1 < v55;
          v59 = *((_DWORD *)v54 + 7);
          if ( !v19 )
            v56 = v58;
          *((_DWORD *)v54 + 6) = v56;
          v60 = -1;
          if ( v57 + v59 >= v59 )
            v60 = v57 + v59;
          *((_DWORD *)v54 + 7) = v60;
          CitpBitmapUpdateBit(v54, (const struct _CIT_TIME_CONTEXT *)&dword_1C011E5D8);
          v62 = *((_DWORD *)a1 + 42);
          v63 = -1;
          v64 = v62 + 1;
          v19 = v62 + 1 < v62;
          v65 = -1;
          if ( !v19 )
            v63 = v64;
          v66 = v101;
          *((_DWORD *)a1 + 42) = v63;
          v67 = *((_DWORD *)a1 + 43);
          v68 = v67 + v66;
          if ( v68 >= v67 )
            v65 = v68;
          *((_DWORD *)a1 + 43) = v65;
          CitpBitmapUpdateBit((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 80), v61);
          v71 = -1;
          if ( v70[8] + (v105 & 0x7FFFFFFFu) >= v70[8] )
            v71 = v70[8] + (v105 & 0x7FFFFFFF);
          v72 = v70[9] + v104;
          v19 = v72 < v70[9];
          v73 = -1;
          v70[8] = v71;
          v74 = -1;
          if ( !v19 )
            v73 = v72;
          v70[9] = v73;
          if ( *((_DWORD *)a1 + 26) + (v105 & 0x7FFFFFFFu) >= *((_DWORD *)a1 + 26) )
            v74 = *((_DWORD *)a1 + 26) + (v105 & 0x7FFFFFFF);
          v75 = *((_DWORD *)a1 + 27) + v104;
          v19 = v75 < *((_DWORD *)a1 + 27);
          v76 = v103;
          *((_DWORD *)a1 + 26) = v74;
          v77 = -1;
          if ( !v19 )
            v77 = v75;
          v78 = v102;
          *((_DWORD *)a1 + 27) = v77;
          v79 = v70[10] + (v76 & 0x7FFFFFFF);
          v80 = -1;
          if ( v79 >= v70[10] )
            v80 = v79;
          v81 = v70[11] + v78;
          v19 = v81 < v70[11];
          v82 = -1;
          v70[10] = v80;
          v83 = -1;
          if ( !v19 )
            v82 = v81;
          v70[11] = v82;
          v22 = *((_DWORD *)a1 + 28) + (v103 & 0x7FFFFFFF);
          if ( v22 >= *((_DWORD *)a1 + 28) )
            v83 = *((_DWORD *)a1 + 28) + (v103 & 0x7FFFFFFF);
          v23 = (const struct _TlgProvider_t *)(unsigned int)(*((_DWORD *)a1 + 29) + v102);
          v19 = (unsigned int)v23 < *((_DWORD *)a1 + 29);
          *((_DWORD *)a1 + 28) = v83;
          v84 = -1;
          if ( !v19 )
            v84 = (int)v23;
          *((_DWORD *)a1 + 29) = v84;
          if ( v69 )
            CitpProgDataNotifyUseUpdate(qword_1C011E5D0, v69);
        }
      }
      if ( TraceLoggingProviderEnabled(v23, v22, v24) )
      {
        v25 = *((_WORD *)a1 + 242);
        v26 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
        v114 = *(_QWORD *)((char *)a1 + 476);
        v115 = v25;
        CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v114, v26, 0LL);
        v116 = (__int128)*CitpProcessGetAppSessionId(&v111, *((struct tagPROCESSINFO **)a1 + 55));
        if ( byte_1C011E5C2 )
        {
          ++*((_QWORD *)a1 + 106);
          if ( dword_1C01187D0 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x800000000800uLL) )
            {
              v92 = v87;
              v120 = 1LL;
              v119 = &v92;
              v121 = &v116;
              v123 = &v93;
              v125 = &v116;
              v127 = &v101;
              v129 = &v104;
              v131 = &v102;
              v106 = v105;
              v133 = &v106;
              v137 = (char *)&v85->Data1 + 2;
              p_Data2 = &v85->Data2;
              Data4 = v85->Data4;
              v143 = &v85->Data4[2];
              p_Data3 = &v85->Data3;
              v147 = &dword_1C011E5A0;
              v149 = &v114;
              v151 = (char *)&v114 + 2;
              v153 = (char *)&v114 + 4;
              v155 = (char *)&v114 + 6;
              v94 = v115;
              v157 = &v94;
              v159 = (char *)&v94 + 1;
              v161 = &v95;
              v163 = &v85->Data4[4];
              v165 = &v85->Data4[6];
              v122 = 16LL;
              v93 = 1;
              v124 = 1LL;
              v126 = 16LL;
              v128 = 4LL;
              v130 = 4LL;
              v132 = 4LL;
              v134 = 2LL;
              v135 = v85;
              v136 = 2LL;
              v138 = 2LL;
              v140 = 2LL;
              v142 = 2LL;
              v144 = 2LL;
              v146 = 2LL;
              v148 = 4LL;
              v150 = 2LL;
              v152 = 2LL;
              v154 = 2LL;
              v156 = 2LL;
              v158 = 1LL;
              v160 = 1LL;
              v95 = 1;
              v162 = 1LL;
              v164 = 2LL;
              v166 = 2LL;
              v167 = v86;
              v168 = 8LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C0104A61, 0LL, v85, 0x1Bu, &pData);
            }
          }
        }
        if ( (dword_1C011E5B0 & 1) != 0 )
        {
          v27 = CitpInteractionSummaryEnsure(a1, (struct tagPROCESSINFO **)v107);
          v28 = v27;
          if ( v27 )
          {
            v29 = *((_DWORD *)v27 + 18);
            v30 = -1;
            v31 = v101;
            if ( v29 + 1 >= v29 )
              v30 = v29 + 1;
            v32 = -1;
            *((_DWORD *)v27 + 18) = v30;
            v33 = *((_DWORD *)v27 + 19);
            v34 = v33 + v31;
            v19 = v33 + v31 < v33;
            v35 = -1;
            if ( !v19 )
              v32 = v34;
            *((_DWORD *)v28 + 19) = v32;
            if ( *((_DWORD *)v28 + 20) + (v105 & 0x7FFFFFFFu) >= *((_DWORD *)v28 + 20) )
              v35 = *((_DWORD *)v28 + 20) + (v105 & 0x7FFFFFFF);
            v36 = *((_DWORD *)v28 + 21) + v104;
            v19 = v36 < *((_DWORD *)v28 + 21);
            v37 = -1;
            *((_DWORD *)v28 + 20) = v35;
            v38 = -1;
            if ( !v19 )
              v37 = v36;
            *((_DWORD *)v28 + 21) = v37;
            if ( *((_DWORD *)v28 + 22) + (v103 & 0x7FFFFFFFu) >= *((_DWORD *)v28 + 22) )
              v38 = *((_DWORD *)v28 + 22) + (v103 & 0x7FFFFFFF);
            v39 = *((_DWORD *)v28 + 23) + v102;
            v19 = v39 < *((_DWORD *)v28 + 23);
            v40 = -1;
            *((_DWORD *)v28 + 22) = v38;
            v41 = -1;
            if ( !v19 )
              v40 = v39;
            *((_DWORD *)v28 + 23) = v40;
            if ( *((_DWORD *)v28 + 24) + (v103 & 0x7FFFFFFFu) >= *((_DWORD *)v28 + 24) )
              v41 = *((_DWORD *)v28 + 24) + (v103 & 0x7FFFFFFF);
            v42 = *((_DWORD *)v28 + 25) + v102;
            v19 = v42 < *((_DWORD *)v28 + 25);
            *((_DWORD *)v28 + 24) = v41;
            if ( !v19 )
              v15 = v42;
            *((_DWORD *)v28 + 25) = v15;
            CitpInputTimesAddTo(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)v28 + 24),
              (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 460));
            *(_QWORD *)(v43 + 40) = v114;
            *(_WORD *)(v43 + 48) = v115;
            CitpBitmapUpdateForTimeRange(
              (struct _CIT_BITMAP *)(v43 + 104),
              *((_DWORD *)a1 + 114),
              a2,
              *((_DWORD *)a1 + 222),
              dword_1C011E5B8);
          }
          if ( a2 - *((_DWORD *)a1 + 222) > dword_1C011E5B4 )
            CitpInteractionSummariesFlush(a1);
        }
      }
      v6 = v100;
      *((_DWORD *)v107 + 16) = a2;
    }
    else
    {
      v6 = 0;
    }
  }
  if ( a6 )
  {
    *((_WORD *)a6 + 4) = *((_WORD *)a1 + 231);
    *((_WORD *)a6 + 5) = *((_WORD *)a1 + 232);
    *((_WORD *)a6 + 6) = *((_WORD *)a1 + 233);
    *((_WORD *)a6 + 7) = *((_WORD *)a1 + 234);
    *((_WORD *)a6 + 8) = *((_WORD *)a1 + 235);
    v6 = 1;
  }
  if ( !CitpAllowForegroundProcess(a1) )
    v7 = v44;
  *((_QWORD *)a1 + 55) = v7;
  *((_DWORD *)a1 + 114) = a2;
  *((_QWORD *)a1 + 61) = v11;
  *((_QWORD *)a1 + 62) = v12;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 616),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 460));
  *v45 = 0LL;
  v45[1] = 0LL;
  *(_QWORD *)((char *)a1 + 476) = 0LL;
  *((_WORD *)a1 + 242) = 0;
  if ( v7 )
  {
    CitpProcessEnsureContext(v7);
    if ( byte_1C011E5C0 )
      CitpProcessEnsureProgData(v7);
    v49 = *((_QWORD *)v7 + 109);
    if ( v49 )
    {
      if ( TraceLoggingProviderEnabled(v47, v46, v48) )
      {
        if ( (dword_1C011E5B0 & 1) != 0
          && *((struct _CIT_IMPACT_CONTEXT **)a1 + 108) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 864) )
        {
          *((_DWORD *)a1 + 222) = a2;
          *((_QWORD *)a1 + 110) = MEMORY[0xFFFFF78000000014];
        }
        v113 = 0.0;
        if ( !(unsigned int)CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v113, v7, v110) )
          CitGetMonitorInfo(a5, &v113);
        v50 = HIWORD(v113);
        *(_QWORD *)((char *)a1 + 476) = *(_QWORD *)&v113;
        *((_WORD *)a1 + 242) = v50;
        if ( byte_1C011E5C2 )
        {
          LODWORD(v107) = a2 - *(_DWORD *)(v49 + 64);
          v88 = (_QWORD *)((char *)a1 + 848);
          v89 = (__int128)*CitpProcessGetAppSessionId(&v112, v7);
          v90 = *(_WORD *)(v49 + 72);
          *(_WORD *)(v49 + 72) = 0;
          ++*v88;
          v117 = v89;
          LOWORD(v100) = v90;
          if ( dword_1C01187D0 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x800000000800uLL) )
            {
              v96 = 1;
              v170 = &v96;
              v171 = 1LL;
              v172 = &v117;
              v174 = &v97;
              v176 = &v117;
              v178 = &v107;
              v180 = &v113;
              v182 = (char *)&v113 + 2;
              v184 = (char *)&v113 + 4;
              v186 = (char *)&v113 + 6;
              v98 = HIWORD(v113);
              v188 = &v98;
              v190 = (char *)&v98 + 1;
              v192 = &v99;
              v194 = &v100;
              v173 = 16LL;
              v97 = 1;
              v175 = 1LL;
              v177 = 16LL;
              v179 = 4LL;
              v181 = 2LL;
              v183 = 2LL;
              v185 = 2LL;
              v187 = 2LL;
              v189 = 1LL;
              v191 = 1LL;
              v99 = 1;
              v193 = 1LL;
              v195 = 2LL;
              v196 = v88;
              v197 = 8LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C0104954, 0LL, v91, 0x10u, &v169);
            }
          }
        }
      }
      *(_DWORD *)(v49 + 64) = a2;
    }
  }
  return v6;
}
