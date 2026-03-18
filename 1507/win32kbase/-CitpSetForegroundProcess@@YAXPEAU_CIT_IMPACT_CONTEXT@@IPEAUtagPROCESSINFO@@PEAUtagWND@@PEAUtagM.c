/*
 * XREFs of ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C0057180 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     CitSessionConnectChange @ 0x1C006F7A0 (CitSessionConnectChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     IsCitGetWindowInfoSupported_0 @ 0x1C0002F70 (IsCitGetWindowInfoSupported_0.c)
 *     CitGetWindowInfo_0 @ 0x1C0002F78 (CitGetWindowInfo_0.c)
 *     CitGetMonitorInfo @ 0x1C000D7C0 (CitGetMonitorInfo.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0017F7C (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00527AC (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA?AU1@AEBU1@@Z @ 0x1C00528EC (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEAA-AU1@AEBU1@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0052B50 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C00569F4 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0057B24 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C0057C18 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0057C5C (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x1C0057C78 (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        struct tagMONITOR *a5)
{
  struct tagPROCESSINFO *v6; // r13
  char *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  struct tagPROCESSINFO *v13; // rcx
  struct _CIT_PROG_DATA *v14; // rax
  struct _CIT_PROG_DATA *v15; // r15
  char *v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int v19; // edx
  int v20; // ecx
  bool v21; // cf
  unsigned int v22; // eax
  int v23; // edx
  int v24; // edx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // edx
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // r10
  int v40; // edx
  int v41; // r9d
  int v42; // r8d
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // edx
  int v47; // r8d
  unsigned int v48; // ecx
  int v49; // edx
  unsigned int v50; // ecx
  int v51; // edx
  int v52; // eax
  _DWORD *v53; // r8
  __int64 v54; // r10
  int v55; // r11d
  int v56; // edx
  int v57; // r9d
  int v58; // r8d
  unsigned int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // eax
  unsigned int v62; // edx
  int v63; // r8d
  unsigned int v64; // ecx
  int v65; // edx
  const struct _TlgProvider_t *v66; // rcx
  __int64 v67; // rax
  __int128 v68; // xmm0
  const GUID *v69; // r9
  const GUID *v70; // r10
  __int64 v71; // rax
  struct tagPROCESSINFO *v72; // r11
  __int16 v73; // dx
  UCHAR v74; // dl
  const struct _TlgProvider_t *v75; // rcx
  __int64 v76; // r15
  char *v77; // rsi
  __int128 v78; // xmm0
  const GUID *v79; // r9
  __int64 v80; // xmm0_8
  int v81; // edx
  __int64 v82; // rax
  struct tagWND *v83; // rax
  __int16 v84; // ax
  char v85; // [rsp+30h] [rbp-D0h] BYREF
  char v86; // [rsp+31h] [rbp-CFh] BYREF
  char v87; // [rsp+32h] [rbp-CEh] BYREF
  char v88; // [rsp+33h] [rbp-CDh] BYREF
  _BYTE v89[4]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v90; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v91; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v92; // [rsp+40h] [rbp-C0h] BYREF
  int v93; // [rsp+44h] [rbp-BCh]
  unsigned int v94; // [rsp+48h] [rbp-B8h] BYREF
  int v95; // [rsp+4Ch] [rbp-B4h]
  struct _GUID v96; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v97; // [rsp+60h] [rbp-A0h] BYREF
  _TBYTE v98; // [rsp+70h] [rbp-90h] BYREF
  __int128 v99; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  char *v101; // [rsp+B0h] [rbp-50h]
  const GUID *v102; // [rsp+B8h] [rbp-48h]
  __int128 *v103; // [rsp+C0h] [rbp-40h]
  __int64 v104; // [rsp+C8h] [rbp-38h]
  char *v105; // [rsp+D0h] [rbp-30h]
  const GUID *v106; // [rsp+D8h] [rbp-28h]
  __int128 *v107; // [rsp+E0h] [rbp-20h]
  __int64 v108; // [rsp+E8h] [rbp-18h]
  unsigned int *v109; // [rsp+F0h] [rbp-10h]
  __int64 v110; // [rsp+F8h] [rbp-8h]
  unsigned int *v111; // [rsp+100h] [rbp+0h]
  __int64 v112; // [rsp+108h] [rbp+8h]
  unsigned int *v113; // [rsp+110h] [rbp+10h]
  __int64 v114; // [rsp+118h] [rbp+18h]
  char *v115; // [rsp+120h] [rbp+20h]
  __int64 v116; // [rsp+128h] [rbp+28h]
  char *v117; // [rsp+130h] [rbp+30h]
  __int64 v118; // [rsp+138h] [rbp+38h]
  char *v119; // [rsp+140h] [rbp+40h]
  __int64 v120; // [rsp+148h] [rbp+48h]
  char *v121; // [rsp+150h] [rbp+50h]
  __int64 v122; // [rsp+158h] [rbp+58h]
  char *v123; // [rsp+160h] [rbp+60h]
  __int64 v124; // [rsp+168h] [rbp+68h]
  char *v125; // [rsp+170h] [rbp+70h]
  __int64 v126; // [rsp+178h] [rbp+78h]
  char *v127; // [rsp+180h] [rbp+80h]
  __int64 v128; // [rsp+188h] [rbp+88h]
  int *v129; // [rsp+190h] [rbp+90h]
  __int64 v130; // [rsp+198h] [rbp+98h]
  _TBYTE *v131; // [rsp+1A0h] [rbp+A0h]
  __int64 v132; // [rsp+1A8h] [rbp+A8h]
  char *v133; // [rsp+1B0h] [rbp+B0h]
  __int64 v134; // [rsp+1B8h] [rbp+B8h]
  char *v135; // [rsp+1C0h] [rbp+C0h]
  __int64 v136; // [rsp+1C8h] [rbp+C8h]
  char *v137; // [rsp+1D0h] [rbp+D0h]
  __int64 v138; // [rsp+1D8h] [rbp+D8h]
  char *v139; // [rsp+1E0h] [rbp+E0h]
  const GUID *v140; // [rsp+1E8h] [rbp+E8h]
  char *v141; // [rsp+1F0h] [rbp+F0h]
  const GUID *v142; // [rsp+1F8h] [rbp+F8h]
  _BYTE *v143; // [rsp+200h] [rbp+100h]
  const GUID *v144; // [rsp+208h] [rbp+108h]
  const GUID *v145; // [rsp+210h] [rbp+110h]
  __int64 v146; // [rsp+218h] [rbp+118h]

  v6 = a3;
  if ( *((struct tagPROCESSINFO **)a1 + 55) == a3 )
    return;
  v9 = (char *)a1 + 496;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 496), a2);
  v10 = *((_QWORD *)v9 + 2);
  *(_QWORD *)&v99 = v10;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 520), a2);
  v11 = *((_QWORD *)a1 + 67);
  v12 = v10 - *((_DWORD *)a1 + 191);
  *(_QWORD *)&v98 = v11;
  if ( v12 > dword_1C0101FC4 )
  {
    v81 = 3;
LABEL_67:
    CitpPostUpdateUseInfoLog(a1, v81);
    *((_DWORD *)a1 + 191) = v10;
    *((_DWORD *)a1 + 190) = a2;
    goto LABEL_4;
  }
  if ( a2 - *((_DWORD *)a1 + 190) > 2 * dword_1C0101FC4 )
  {
    v81 = 4;
    goto LABEL_67;
  }
LABEL_4:
  v13 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 55);
  if ( v13 )
  {
    v90 = a2 - *((_DWORD *)a1 + 114);
    v14 = CitpProcessEnsureProgData(v13);
    v15 = v14;
    if ( v14 )
    {
      v16 = (char *)v14 + 80;
    }
    else
    {
      v15 = 0LL;
      v16 = (char *)qword_1C0101FE0 + 216;
    }
    v17 = *((_DWORD *)v16 + 6);
    v18 = v90;
    v19 = -1;
    *(_QWORD *)&v97.Data1 = v16;
    v20 = v17 + 1;
    v21 = v17 + 1 < v17;
    v22 = *((_DWORD *)v16 + 7);
    if ( !v21 )
      v19 = v20;
    *((_DWORD *)v16 + 6) = v19;
    v23 = -1;
    if ( v18 + v22 >= v22 )
      v23 = v18 + v22;
    *((_DWORD *)v16 + 7) = v23;
    *(_BYTE *)((unsigned int)dword_1C010202C + *(_QWORD *)v16) |= byte_1C0102030;
    v24 = -1;
    v25 = *((_DWORD *)a1 + 42);
    v26 = v25 + 1;
    v21 = v25 + 1 < v25;
    v27 = -1;
    if ( !v21 )
      v24 = v26;
    v28 = v90;
    *((_DWORD *)a1 + 42) = v24;
    v29 = *((_DWORD *)a1 + 43);
    v30 = v29 + v28;
    if ( v30 >= v29 )
      v27 = v30;
    *((_DWORD *)a1 + 43) = v27;
    *(_BYTE *)((unsigned int)dword_1C010202C + *((_QWORD *)a1 + 10)) |= byte_1C0102030;
    v31 = -1;
    v32 = *((_DWORD *)a1 + 148);
    v33 = v32 + 1;
    v21 = v32 + 1 < v32;
    v34 = -1;
    if ( !v21 )
      v31 = v33;
    v35 = v90;
    *((_DWORD *)a1 + 148) = v31;
    v36 = *((_DWORD *)a1 + 149);
    v37 = v36 + v35;
    if ( v37 >= v36 )
      v34 = v37;
    *((_DWORD *)a1 + 149) = v34;
    v38 = *(_QWORD *)(*((_QWORD *)a1 + 55) + 896LL);
    *(_QWORD *)&v96.Data1 = v38;
    if ( v38 )
    {
      CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom((unsigned int *)&v99, &v92, (_DWORD *)(v38 + 88));
      v39 = *(_QWORD *)&v97.Data1;
      v40 = -1;
      v41 = v93 & 0x7FFFFFFF;
      v42 = -1;
      v43 = *(_DWORD *)(*(_QWORD *)&v97.Data1 + 32LL);
      v44 = v43 + (v93 & 0x7FFFFFFF);
      v21 = v44 < v43;
      v45 = v92;
      if ( !v21 )
        v40 = v44;
      *(_DWORD *)(*(_QWORD *)&v97.Data1 + 32LL) = v40;
      v46 = *(_DWORD *)(v39 + 36);
      if ( v45 + v46 >= v46 )
        v42 = v45 + v46;
      *(_DWORD *)(v39 + 36) = v42;
      v47 = -1;
      v48 = *((_DWORD *)a1 + 26);
      v49 = v48 + v41;
      v21 = v48 + v41 < v48;
      v50 = *((_DWORD *)a1 + 27);
      if ( !v21 )
        v47 = v49;
      *((_DWORD *)a1 + 26) = v47;
      v51 = v45 + v50;
      v21 = v45 + v50 < v50;
      v52 = -1;
      if ( !v21 )
        v52 = v51;
      v53 = (_DWORD *)(*(_QWORD *)&v96.Data1 + 96LL);
      *((_DWORD *)a1 + 27) = v52;
      CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom((unsigned int *)&v98, &v94, v53);
      v54 = *(_QWORD *)&v97.Data1;
      v55 = -1;
      v56 = -1;
      v57 = v95 & 0x7FFFFFFF;
      v58 = -1;
      v59 = *(_DWORD *)(*(_QWORD *)&v97.Data1 + 40LL);
      v60 = v59 + (v95 & 0x7FFFFFFF);
      v21 = v60 < v59;
      v61 = v94;
      if ( !v21 )
        v56 = v60;
      *(_DWORD *)(*(_QWORD *)&v97.Data1 + 40LL) = v56;
      v62 = *(_DWORD *)(v54 + 44);
      if ( v61 + v62 >= v62 )
        v58 = v61 + v62;
      *(_DWORD *)(v54 + 44) = v58;
      v63 = -1;
      v64 = *((_DWORD *)a1 + 28);
      v65 = v64 + v57;
      v21 = v64 + v57 < v64;
      v66 = (const struct _TlgProvider_t *)*((unsigned int *)a1 + 29);
      if ( !v21 )
        v63 = v65;
      *((_DWORD *)a1 + 28) = v63;
      if ( v61 + (unsigned int)v66 >= (unsigned int)v66 )
        v55 = v61 + (_DWORD)v66;
      *((_DWORD *)a1 + 29) = v55;
      if ( TraceLoggingProviderEnabled(v66, v61 + (_BYTE)v66, 0x800000000800uLL) )
      {
        v98 = 0.0;
        if ( gptiForeground
          && *((_QWORD *)gptiForeground + 48) == *((_QWORD *)a1 + 55)
          && (v67 = *((_QWORD *)gptiForeground + 49)) != 0
          && *(_QWORD *)(v67 + 80) )
        {
          if ( (int)IsCitGetWindowInfoSupported_0() >= 0 )
            CitGetWindowInfo_0();
        }
        else
        {
          v80 = *(_QWORD *)(*(_QWORD *)&v96.Data1 + 76LL);
          HIWORD(v98) = *(_WORD *)(*(_QWORD *)&v96.Data1 + 84LL);
          *(_QWORD *)&v98 = v80;
        }
        v68 = (__int128)*CitpProcessGetAppSessionId(&v97, *((struct tagPROCESSINFO **)a1 + 55));
        ++*((_QWORD *)a1 + 97);
        v99 = v68;
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
        {
          v86 = 0;
          v101 = &v86;
          v103 = &v99;
          v105 = &v88;
          v107 = &v99;
          v109 = &v90;
          v111 = &v92;
          v113 = &v94;
          v91 = v93;
          v115 = (char *)&v91;
          v117 = (char *)a1 + 568;
          v119 = (char *)a1 + 570;
          v121 = (char *)a1 + 572;
          v123 = (char *)a1 + 576;
          v125 = (char *)a1 + 578;
          v127 = (char *)a1 + 574;
          v129 = &dword_1C0101FC0;
          v131 = &v98;
          v133 = (char *)&v98 + 2;
          v135 = (char *)&v98 + 4;
          v137 = (char *)&v98 + 6;
          v85 = BYTE8(v98);
          v139 = &v85;
          v87 = HIBYTE(v98);
          v141 = &v87;
          v143 = v89;
          v102 = v70;
          v104 = 16LL;
          v88 = (char)v70;
          v106 = v70;
          v108 = 16LL;
          v110 = 4LL;
          v112 = 4LL;
          v114 = 4LL;
          v116 = 2LL;
          v118 = 2LL;
          v120 = 2LL;
          v122 = 2LL;
          v124 = 2LL;
          v126 = 2LL;
          v128 = 2LL;
          v130 = 4LL;
          v132 = 2LL;
          v134 = 2LL;
          v136 = 2LL;
          v138 = 2LL;
          v140 = v70;
          v142 = v70;
          v89[0] = (_BYTE)v70;
          v144 = v70;
          v145 = v69;
          v146 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EB786, 0LL, v69, 0x19u, &pData);
        }
      }
      v71 = *(_QWORD *)&v96.Data1;
      *(_DWORD *)(*(_QWORD *)&v96.Data1 + 72LL) = a2;
      *(_QWORD *)(v71 + 76) = 0LL;
      *(_WORD *)(v71 + 84) = 0;
    }
    if ( v15 )
      CitpProgDataNotifyUseUpdate(qword_1C0101FE0, v15);
  }
  if ( !(unsigned int)CitpAllowForegroundProcess(a1) )
    v6 = v72;
  v73 = *((_WORD *)a1 + 284);
  *((_DWORD *)a1 + 114) = a2;
  *((_QWORD *)a1 + 55) = v6;
  if ( v73 )
  {
    CitpStatIncrement((unsigned __int16 *)a1 + 290, v73);
    CitpStatIncrement((unsigned __int16 *)a1 + 291, *((_WORD *)a1 + 285));
    CitpStatIncrement((unsigned __int16 *)a1 + 292, *((_WORD *)a1 + 286));
    CitpStatIncrement((unsigned __int16 *)a1 + 294, *((_WORD *)a1 + 288));
  }
  *((_QWORD *)a1 + 71) = 0LL;
  *((_DWORD *)a1 + 144) = 0;
  if ( v6 )
  {
    CitpProcessEnsureProgData(v6);
    v76 = *((_QWORD *)v6 + 112);
    if ( v76 )
    {
      *(_QWORD *)(v76 + 96) = v11;
      *(_QWORD *)(v76 + 88) = v10;
      if ( TraceLoggingProviderEnabled(v75, v74, 0x800000000800uLL) )
      {
        v90 = a2 - *(_DWORD *)(v76 + 72);
        if ( !a4 )
        {
          if ( gptiForeground )
          {
            if ( *((struct tagPROCESSINFO **)gptiForeground + 48) == v6 )
            {
              v82 = *((_QWORD *)gptiForeground + 49);
              if ( v82 )
              {
                v83 = *(struct tagWND **)(v82 + 80);
                if ( v83 )
                  a4 = v83;
              }
            }
          }
        }
        v98 = 0.0;
        if ( a4 && (int)IsCitGetWindowInfoSupported_0() >= 0 )
        {
          CitGetWindowInfo_0();
        }
        else
        {
          CitGetMonitorInfo((__int64)a5, (__int64)&v98);
          v84 = HIWORD(v98);
          *(_QWORD *)(v76 + 76) = *(_QWORD *)&v98;
          *(_WORD *)(v76 + 84) = v84;
        }
        v77 = (char *)a1 + 776;
        v78 = (__int128)*CitpProcessGetAppSessionId(&v96, v6);
        ++*(_QWORD *)v77;
        v99 = v78;
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
          {
            v89[0] = (_BYTE)v79;
            v101 = v89;
            v103 = &v99;
            v105 = &v87;
            v107 = &v99;
            v109 = &v90;
            v111 = (unsigned int *)&v98;
            v113 = (unsigned int *)((char *)&v98 + 2);
            v115 = (char *)&v98 + 4;
            v117 = (char *)&v98 + 6;
            v85 = BYTE8(v98);
            v119 = &v85;
            v88 = HIBYTE(v98);
            v121 = &v88;
            v123 = &v86;
            v102 = v79;
            v104 = 16LL;
            v87 = (char)v79;
            v106 = v79;
            v108 = 16LL;
            v110 = 4LL;
            v112 = 2LL;
            v114 = 2LL;
            v116 = 2LL;
            v118 = 2LL;
            v120 = (__int64)v79;
            v122 = (__int64)v79;
            v86 = (char)v79;
            v124 = (__int64)v79;
            v125 = v77;
            v126 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EB68F, 0LL, v79, 0xFu, &pData);
          }
        }
      }
      *(_DWORD *)(v76 + 72) = a2;
    }
  }
}
