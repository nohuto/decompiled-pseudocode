/*
 * XREFs of ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518
 * Callers:
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C004B210 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0064C88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     CitSessionConnectChange @ 0x1C0079310 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00478F8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C0047A38 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0049DF0 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C004A158 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C004A1C0 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C004A328 (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     CitGetMonitorInfo @ 0x1C004A3A0 (CitGetMonitorInfo.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C004A448 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004B2E8 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C004B304 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004FC0C (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00656FC (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C0076514 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00773F8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0078968 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z @ 0x1C00E4004 (-CitpBitmapUpdateBit@@YAXPEAU_CIT_BITMAP@@PEBU_CIT_TIME_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00E4374 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C00E48F0 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagMONITOR *a5)
{
  struct tagWND *v5; // r14
  struct tagPROCESSINFO *v6; // r13
  char *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // r12d
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // ecx
  bool v18; // cf
  unsigned int v19; // eax
  int v20; // edx
  unsigned int v21; // edx
  const struct _TlgProvider_t *v22; // rcx
  __int16 v23; // ax
  struct tagPROCESSINFO *v24; // rdx
  struct _CIT_IMPACT_CONTEXT *v25; // rcx
  const GUID *v26; // r9
  __int64 v27; // r10
  int v28; // r11d
  struct _CIT_INTERACTION_SUMMARY *v29; // rax
  struct _CIT_INTERACTION_SUMMARY *v30; // r14
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  int v33; // edx
  unsigned int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  struct _CIT_PROCESS *v45; // rax
  char v46; // cl
  struct tagPROCESSINFO *v47; // r11
  __int64 v48; // r11
  UCHAR v49; // dl
  const struct _TlgProvider_t *v50; // rcx
  __int64 v51; // rbx
  __int16 v52; // ax
  _QWORD *v53; // rsi
  __int128 v54; // xmm0
  const GUID *v55; // r9
  unsigned int v56; // edx
  struct _CIT_PROG_DATA *v57; // rax
  struct _CIT_IMPACT_CONTEXT *v58; // r10
  unsigned int v59; // eax
  int v60; // edx
  unsigned int v61; // r8d
  int v62; // ecx
  unsigned int v63; // eax
  int v64; // edx
  const struct _CIT_TIME_CONTEXT *v65; // rdx
  unsigned int v66; // eax
  int v67; // r8d
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // r8d
  unsigned int v72; // ecx
  struct _CIT_PROG_DATA *v73; // r9
  _DWORD *v74; // r10
  int v75; // eax
  unsigned int v76; // ecx
  int v77; // edx
  int v78; // eax
  unsigned int v79; // ecx
  int v80; // edx
  int v81; // eax
  unsigned int v82; // ecx
  unsigned int v83; // edx
  int v84; // eax
  unsigned int v85; // ecx
  int v86; // edx
  int v87; // eax
  int v88; // eax
  char v89; // [rsp+30h] [rbp-D0h] BYREF
  char v90; // [rsp+31h] [rbp-CFh] BYREF
  char v91; // [rsp+32h] [rbp-CEh] BYREF
  char v92; // [rsp+33h] [rbp-CDh] BYREF
  char v93; // [rsp+34h] [rbp-CCh] BYREF
  char v94; // [rsp+35h] [rbp-CBh] BYREF
  char v95; // [rsp+36h] [rbp-CAh] BYREF
  char v96; // [rsp+37h] [rbp-C9h] BYREF
  char v97; // [rsp+38h] [rbp-C8h] BYREF
  char v98; // [rsp+39h] [rbp-C7h] BYREF
  unsigned int v99; // [rsp+40h] [rbp-C0h] BYREF
  int v100; // [rsp+44h] [rbp-BCh]
  unsigned int v101; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v102; // [rsp+50h] [rbp-B0h] BYREF
  int v103; // [rsp+54h] [rbp-ACh]
  __int16 v104; // [rsp+58h] [rbp-A8h] BYREF
  struct _CIT_PROCESS *v105; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+68h] [rbp-98h] BYREF
  __int64 v107; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v108; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID v109; // [rsp+88h] [rbp-78h] BYREF
  _TBYTE v110; // [rsp+98h] [rbp-68h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v112; // [rsp+B0h] [rbp-50h]
  __int128 v113; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  char *v116; // [rsp+100h] [rbp+0h]
  __int64 v117; // [rsp+108h] [rbp+8h]
  __int128 *v118; // [rsp+110h] [rbp+10h]
  __int64 v119; // [rsp+118h] [rbp+18h]
  char *v120; // [rsp+120h] [rbp+20h]
  __int64 v121; // [rsp+128h] [rbp+28h]
  __int128 *v122; // [rsp+130h] [rbp+30h]
  __int64 v123; // [rsp+138h] [rbp+38h]
  unsigned int *v124; // [rsp+140h] [rbp+40h]
  __int64 v125; // [rsp+148h] [rbp+48h]
  unsigned int *v126; // [rsp+150h] [rbp+50h]
  __int64 v127; // [rsp+158h] [rbp+58h]
  unsigned int *v128; // [rsp+160h] [rbp+60h]
  __int64 v129; // [rsp+168h] [rbp+68h]
  __int16 *v130; // [rsp+170h] [rbp+70h]
  __int64 v131; // [rsp+178h] [rbp+78h]
  const GUID *v132; // [rsp+180h] [rbp+80h]
  __int64 v133; // [rsp+188h] [rbp+88h]
  char *v134; // [rsp+190h] [rbp+90h]
  __int64 v135; // [rsp+198h] [rbp+98h]
  unsigned __int16 *p_Data2; // [rsp+1A0h] [rbp+A0h]
  __int64 v137; // [rsp+1A8h] [rbp+A8h]
  unsigned __int8 *Data4; // [rsp+1B0h] [rbp+B0h]
  __int64 v139; // [rsp+1B8h] [rbp+B8h]
  unsigned __int8 *v140; // [rsp+1C0h] [rbp+C0h]
  __int64 v141; // [rsp+1C8h] [rbp+C8h]
  unsigned __int16 *p_Data3; // [rsp+1D0h] [rbp+D0h]
  __int64 v143; // [rsp+1D8h] [rbp+D8h]
  int *v144; // [rsp+1E0h] [rbp+E0h]
  __int64 v145; // [rsp+1E8h] [rbp+E8h]
  __int64 *v146; // [rsp+1F0h] [rbp+F0h]
  __int64 v147; // [rsp+1F8h] [rbp+F8h]
  char *v148; // [rsp+200h] [rbp+100h]
  __int64 v149; // [rsp+208h] [rbp+108h]
  char *v150; // [rsp+210h] [rbp+110h]
  __int64 v151; // [rsp+218h] [rbp+118h]
  char *v152; // [rsp+220h] [rbp+120h]
  __int64 v153; // [rsp+228h] [rbp+128h]
  char *v154; // [rsp+230h] [rbp+130h]
  __int64 v155; // [rsp+238h] [rbp+138h]
  char *v156; // [rsp+240h] [rbp+140h]
  __int64 v157; // [rsp+248h] [rbp+148h]
  char *v158; // [rsp+250h] [rbp+150h]
  __int64 v159; // [rsp+258h] [rbp+158h]
  __int64 v160; // [rsp+260h] [rbp+160h]
  __int64 v161; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR v162; // [rsp+270h] [rbp+170h] BYREF
  char *v163; // [rsp+290h] [rbp+190h]
  __int64 v164; // [rsp+298h] [rbp+198h]
  __int128 *v165; // [rsp+2A0h] [rbp+1A0h]
  __int64 v166; // [rsp+2A8h] [rbp+1A8h]
  char *v167; // [rsp+2B0h] [rbp+1B0h]
  __int64 v168; // [rsp+2B8h] [rbp+1B8h]
  __int128 *v169; // [rsp+2C0h] [rbp+1C0h]
  __int64 v170; // [rsp+2C8h] [rbp+1C8h]
  struct _CIT_PROCESS **v171; // [rsp+2D0h] [rbp+1D0h]
  __int64 v172; // [rsp+2D8h] [rbp+1D8h]
  _TBYTE *v173; // [rsp+2E0h] [rbp+1E0h]
  __int64 v174; // [rsp+2E8h] [rbp+1E8h]
  char *v175; // [rsp+2F0h] [rbp+1F0h]
  __int64 v176; // [rsp+2F8h] [rbp+1F8h]
  char *v177; // [rsp+300h] [rbp+200h]
  __int64 v178; // [rsp+308h] [rbp+208h]
  char *v179; // [rsp+310h] [rbp+210h]
  __int64 v180; // [rsp+318h] [rbp+218h]
  char *v181; // [rsp+320h] [rbp+220h]
  __int64 v182; // [rsp+328h] [rbp+228h]
  char *v183; // [rsp+330h] [rbp+230h]
  __int64 v184; // [rsp+338h] [rbp+238h]
  char *v185; // [rsp+340h] [rbp+240h]
  __int64 v186; // [rsp+348h] [rbp+248h]
  _QWORD *v187; // [rsp+350h] [rbp+250h]
  __int64 v188; // [rsp+358h] [rbp+258h]

  v5 = a4;
  *(_QWORD *)&v110 = a4;
  v6 = a3;
  if ( *((struct tagPROCESSINFO **)a1 + 55) == a3 )
    return;
  v9 = (char *)a1 + 536;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 536), a2);
  v10 = *((_QWORD *)v9 + 2);
  v107 = v10;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 560), a2);
  v11 = *((_QWORD *)a1 + 72);
  v12 = v10 - *((_DWORD *)a1 + 199);
  v106 = v11;
  if ( v12 > dword_1C0107154 )
  {
    v56 = 3;
LABEL_62:
    CitpPostUpdateUseInfoLog(a1, v56);
    *((_DWORD *)a1 + 199) = v10;
    *((_DWORD *)a1 + 198) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 198) > 2 * dword_1C0107154 )
  {
    v56 = 4;
    goto LABEL_62;
  }
LABEL_4:
  if ( *((_QWORD *)a1 + 55) )
  {
    v13 = *((_DWORD *)a1 + 155);
    v14 = -1;
    v15 = -1;
    v16 = a2 - *((_DWORD *)a1 + 114);
    v101 = v16;
    v17 = v13 + 1;
    v18 = v13 + 1 < v13;
    v19 = *((_DWORD *)a1 + 156);
    if ( !v18 )
      v15 = v17;
    *((_DWORD *)a1 + 155) = v15;
    v20 = -1;
    if ( v19 + v16 >= v19 )
      v20 = v19 + v16;
    *((_DWORD *)a1 + 156) = v20;
    v105 = *(struct _CIT_PROCESS **)(*((_QWORD *)a1 + 55) + 880LL);
    if ( v105 )
    {
      CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom((unsigned int *)&v107, &v102, (_DWORD *)a1 + 121);
      CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom((unsigned int *)&v106, &v99, (_DWORD *)a1 + 123);
      if ( byte_1C0107171 )
      {
        v57 = CitpProcessEnsureProgData(*((struct tagPROCESSINFO **)a1 + 55));
        v58 = v57
            ? (struct _CIT_PROG_DATA *)((char *)v57 + 88)
            : (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C0107180 + 216);
        if ( v58 )
        {
          v59 = *((_DWORD *)v58 + 6);
          v60 = -1;
          v61 = v101;
          v62 = v59 + 1;
          v18 = v59 + 1 < v59;
          v63 = *((_DWORD *)v58 + 7);
          if ( !v18 )
            v60 = v62;
          *((_DWORD *)v58 + 6) = v60;
          v64 = -1;
          if ( v61 + v63 >= v63 )
            v64 = v61 + v63;
          *((_DWORD *)v58 + 7) = v64;
          CitpBitmapUpdateBit(v58, (const struct _CIT_TIME_CONTEXT *)&dword_1C0107188);
          v66 = *((_DWORD *)a1 + 42);
          v67 = -1;
          v68 = v66 + 1;
          v18 = v66 + 1 < v66;
          v69 = -1;
          if ( !v18 )
            v67 = v68;
          v70 = v101;
          *((_DWORD *)a1 + 42) = v67;
          v71 = *((_DWORD *)a1 + 43);
          v72 = v71 + v70;
          if ( v72 >= v71 )
            v69 = v72;
          *((_DWORD *)a1 + 43) = v69;
          CitpBitmapUpdateBit((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 80), v65);
          v75 = -1;
          if ( v74[8] + (v103 & 0x7FFFFFFFu) >= v74[8] )
            v75 = v74[8] + (v103 & 0x7FFFFFFF);
          v76 = v74[9] + v102;
          v18 = v76 < v74[9];
          v77 = -1;
          v74[8] = v75;
          v78 = -1;
          if ( !v18 )
            v77 = v76;
          v74[9] = v77;
          if ( *((_DWORD *)a1 + 26) + (v103 & 0x7FFFFFFFu) >= *((_DWORD *)a1 + 26) )
            v78 = *((_DWORD *)a1 + 26) + (v103 & 0x7FFFFFFF);
          v79 = *((_DWORD *)a1 + 27) + v102;
          v18 = v79 < *((_DWORD *)a1 + 27);
          v80 = v100;
          *((_DWORD *)a1 + 26) = v78;
          v81 = -1;
          if ( !v18 )
            v81 = v79;
          v82 = v99;
          *((_DWORD *)a1 + 27) = v81;
          v83 = v74[10] + (v80 & 0x7FFFFFFF);
          v84 = -1;
          if ( v83 >= v74[10] )
            v84 = v83;
          v85 = v74[11] + v82;
          v18 = v85 < v74[11];
          v86 = -1;
          v74[10] = v84;
          v87 = -1;
          if ( !v18 )
            v86 = v85;
          v74[11] = v86;
          v21 = *((_DWORD *)a1 + 28) + (v100 & 0x7FFFFFFF);
          if ( v21 >= *((_DWORD *)a1 + 28) )
            v87 = *((_DWORD *)a1 + 28) + (v100 & 0x7FFFFFFF);
          v22 = (const struct _TlgProvider_t *)(*((_DWORD *)a1 + 29) + v99);
          v18 = (unsigned int)v22 < *((_DWORD *)a1 + 29);
          *((_DWORD *)a1 + 28) = v87;
          v88 = -1;
          if ( !v18 )
            v88 = (int)v22;
          *((_DWORD *)a1 + 29) = v88;
          if ( v73 )
            CitpProgDataNotifyUseUpdate(qword_1C0107180, v73);
        }
      }
      if ( TraceLoggingProviderEnabled(v22, v21, 0x800000000800uLL) )
      {
        v23 = *((_WORD *)a1 + 240);
        v24 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
        v111 = *((_QWORD *)a1 + 59);
        v112 = v23;
        CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v111, v24, 0LL);
        v113 = (__int128)*CitpProcessGetAppSessionId(&v109, *((struct tagPROCESSINFO **)a1 + 55));
        if ( byte_1C0107173 )
        {
          ++*((_QWORD *)a1 + 101);
          if ( hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
            {
              v98 = v28;
              v117 = (unsigned int)(v28 + 1);
              v116 = &v98;
              v118 = &v113;
              v120 = &v91;
              v122 = &v113;
              v124 = &v101;
              v126 = &v102;
              v128 = &v99;
              v104 = v103;
              v130 = &v104;
              v134 = (char *)&v26->Data1 + 2;
              p_Data2 = &v26->Data2;
              Data4 = v26->Data4;
              v140 = &v26->Data4[2];
              p_Data3 = &v26->Data3;
              v144 = &dword_1C0107150;
              v146 = &v111;
              v148 = (char *)&v111 + 2;
              v150 = (char *)&v111 + 4;
              v152 = (char *)&v111 + 6;
              v97 = v112;
              v154 = &v97;
              v93 = HIBYTE(v112);
              v156 = &v93;
              v158 = &v96;
              v119 = 16LL;
              v91 = v28 + 1;
              v121 = v117;
              v123 = 16LL;
              v125 = 4LL;
              v127 = 4LL;
              v129 = 4LL;
              v131 = 2LL;
              v132 = v26;
              v133 = 2LL;
              v135 = 2LL;
              v137 = 2LL;
              v139 = 2LL;
              v141 = 2LL;
              v143 = 2LL;
              v145 = 4LL;
              v147 = 2LL;
              v149 = 2LL;
              v151 = 2LL;
              v153 = 2LL;
              v155 = v117;
              v157 = v117;
              v96 = v28 + 1;
              v159 = v117;
              v160 = v27;
              v161 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EE5A5, 0LL, v26, 0x19u, &pData);
            }
          }
        }
        if ( (dword_1C0107160 & 1) != 0 )
        {
          v29 = CitpInteractionSummaryEnsure(v25, v105);
          v30 = v29;
          if ( v29 )
          {
            if ( *(struct _CIT_INTERACTION_SUMMARY **)v29 == v29 )
              CitpInteractionSummaryStartTracking(a1, v29);
            v31 = *((_DWORD *)v30 + 17);
            v32 = v101;
            v33 = -1;
            if ( v31 + 1 >= v31 )
              v33 = v31 + 1;
            v34 = *((_DWORD *)v30 + 18);
            *((_DWORD *)v30 + 17) = v33;
            v35 = -1;
            v36 = v32 + v34;
            v18 = v32 + v34 < v34;
            v37 = -1;
            if ( !v18 )
              v35 = v36;
            *((_DWORD *)v30 + 18) = v35;
            if ( *((_DWORD *)v30 + 19) + (v103 & 0x7FFFFFFFu) >= *((_DWORD *)v30 + 19) )
              v37 = *((_DWORD *)v30 + 19) + (v103 & 0x7FFFFFFF);
            v38 = *((_DWORD *)v30 + 20) + v102;
            v18 = v38 < *((_DWORD *)v30 + 20);
            v39 = -1;
            *((_DWORD *)v30 + 19) = v37;
            v40 = -1;
            if ( !v18 )
              v39 = v38;
            *((_DWORD *)v30 + 20) = v39;
            if ( *((_DWORD *)v30 + 21) + (v100 & 0x7FFFFFFFu) >= *((_DWORD *)v30 + 21) )
              v40 = *((_DWORD *)v30 + 21) + (v100 & 0x7FFFFFFF);
            v41 = *((_DWORD *)v30 + 22) + v99;
            v18 = v41 < *((_DWORD *)v30 + 22);
            v42 = -1;
            *((_DWORD *)v30 + 21) = v40;
            v43 = -1;
            if ( !v18 )
              v42 = v41;
            *((_DWORD *)v30 + 22) = v42;
            if ( *((_DWORD *)v30 + 23) + (v100 & 0x7FFFFFFFu) >= *((_DWORD *)v30 + 23) )
              v43 = *((_DWORD *)v30 + 23) + (v100 & 0x7FFFFFFF);
            v44 = *((_DWORD *)v30 + 24) + v99;
            v18 = v44 < *((_DWORD *)v30 + 24);
            *((_DWORD *)v30 + 23) = v43;
            if ( !v18 )
              v14 = v44;
            *((_DWORD *)v30 + 24) = v14;
            CitpInputTimesAddTo(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)v30 + 24),
              (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 460));
            *(_QWORD *)((char *)v30 + 36) = v111;
            *((_WORD *)v30 + 22) = v112;
            v45 = v105;
            *((_OWORD *)v30 + 3) = v113;
            v46 = *((_BYTE *)v45 + 75);
            if ( (v46 & 1) == 0 )
            {
              *((_BYTE *)v45 + 75) = v46 | 1;
              CitpStatIncrement((unsigned __int16 *)v30 + 33, 1u);
            }
            CitpBitmapUpdateForTimeRange(
              (struct _CIT_INTERACTION_SUMMARY *)((char *)v30 + 104),
              *((_DWORD *)a1 + 114),
              a2,
              *((_DWORD *)a1 + 212),
              dword_1C0107168);
          }
          if ( a2 - *((_DWORD *)a1 + 212) > dword_1C0107164 )
            CitpInteractionSummariesFlush(a1);
          v5 = *(struct tagWND **)&v110;
        }
      }
      *((_DWORD *)v105 + 16) = a2;
    }
  }
  if ( !(unsigned int)CitpAllowForegroundProcess(a1) )
    v6 = v47;
  *((_QWORD *)a1 + 55) = v6;
  *((_DWORD *)a1 + 114) = a2;
  *(_QWORD *)((char *)a1 + 484) = v10;
  *(_QWORD *)((char *)a1 + 492) = v11;
  CitpInputTimesAddTo(
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 608),
    (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 460));
  *(_QWORD *)v48 = 0LL;
  *(_DWORD *)(v48 + 8) = 0;
  *((_QWORD *)a1 + 59) = 0LL;
  *((_WORD *)a1 + 240) = 0;
  if ( v6 )
  {
    CitpProcessEnsureContext(v6);
    if ( byte_1C0107171 )
      CitpProcessEnsureProgData(v6);
    v51 = *((_QWORD *)v6 + 110);
    if ( v51 )
    {
      if ( TraceLoggingProviderEnabled(v50, v49, 0x800000000800uLL) )
      {
        if ( (dword_1C0107160 & 1) != 0
          && *((struct _CIT_IMPACT_CONTEXT **)a1 + 103) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 824) )
        {
          *((_DWORD *)a1 + 212) = a2;
          *((_QWORD *)a1 + 105) = MEMORY[0xFFFFF78000000014];
        }
        v110 = 0.0;
        if ( !(unsigned int)CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v110, v6, v5) )
          CitGetMonitorInfo(a5, &v110);
        v52 = HIWORD(v110);
        *((_QWORD *)a1 + 59) = *(_QWORD *)&v110;
        *((_WORD *)a1 + 240) = v52;
        if ( byte_1C0107173 )
        {
          LODWORD(v105) = a2 - *(_DWORD *)(v51 + 64);
          v53 = (_QWORD *)((char *)a1 + 808);
          v54 = (__int128)*CitpProcessGetAppSessionId(&v108, v6);
          ++*v53;
          v114 = v54;
          if ( hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
            {
              v95 = 1;
              v163 = &v95;
              v165 = &v114;
              v167 = &v89;
              v169 = &v114;
              v171 = &v105;
              v173 = &v110;
              v175 = (char *)&v110 + 2;
              v177 = (char *)&v110 + 4;
              v179 = (char *)&v110 + 6;
              v90 = BYTE8(v110);
              v181 = &v90;
              v92 = HIBYTE(v110);
              v183 = &v92;
              v185 = &v94;
              v164 = 1LL;
              v166 = 16LL;
              v89 = 1;
              v168 = 1LL;
              v170 = 16LL;
              v172 = 4LL;
              v174 = 2LL;
              v176 = 2LL;
              v178 = 2LL;
              v180 = 2LL;
              v182 = 1LL;
              v184 = 1LL;
              v94 = 1;
              v186 = 1LL;
              v187 = v53;
              v188 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EE4AE, 0LL, v55, 0xFu, &v162);
            }
          }
        }
      }
      *(_DWORD *)(v51 + 64) = a2;
    }
  }
}
