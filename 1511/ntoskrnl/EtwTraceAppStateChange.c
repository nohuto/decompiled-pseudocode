/*
 * XREFs of EtwTraceAppStateChange @ 0x14044A950
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x14003AF8C (PsGetProcessSessionId.c)
 *     TraceLoggingProviderEnabled @ 0x1400923A4 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObGetProcessHandleCount @ 0x1403E94CC (ObGetProcessHandleCount.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 */

char __fastcall EtwTraceAppStateChange(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  signed __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int16 ProcessSessionId; // ax
  int v9; // r10d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // kr10_8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // kr00_8
  unsigned __int64 v16; // kr08_8
  int ProcessHandleCount; // r13d
  int v18; // esi
  int v19; // r14d
  __int64 v20; // rdi
  int v21; // r15d
  int v22; // r9d
  char v23; // r10
  __int64 v24; // r11
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // r11
  char v31; // [rsp+38h] [rbp-D0h] BYREF
  char v32; // [rsp+39h] [rbp-CFh] BYREF
  char v33; // [rsp+3Ah] [rbp-CEh] BYREF
  char v34; // [rsp+3Bh] [rbp-CDh] BYREF
  char v35; // [rsp+3Ch] [rbp-CCh] BYREF
  char v36; // [rsp+3Dh] [rbp-CBh] BYREF
  char v37; // [rsp+3Eh] [rbp-CAh] BYREF
  char v38; // [rsp+3Fh] [rbp-C9h] BYREF
  char v39; // [rsp+40h] [rbp-C8h] BYREF
  char v40; // [rsp+41h] [rbp-C7h] BYREF
  char v41; // [rsp+42h] [rbp-C6h] BYREF
  char v42; // [rsp+43h] [rbp-C5h] BYREF
  int v43; // [rsp+44h] [rbp-C4h] BYREF
  int v44; // [rsp+48h] [rbp-C0h] BYREF
  int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  int v46; // [rsp+50h] [rbp-B8h] BYREF
  int v47; // [rsp+54h] [rbp-B4h] BYREF
  int v48; // [rsp+58h] [rbp-B0h] BYREF
  int v49; // [rsp+5Ch] [rbp-ACh] BYREF
  int v50; // [rsp+60h] [rbp-A8h] BYREF
  int v51; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-70h] BYREF
  signed __int64 v59; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v68; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v71[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v72; // [rsp+128h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+28h]
  __int64 v74; // [rsp+140h] [rbp+38h]
  __int64 v75; // [rsp+148h] [rbp+40h]
  _QWORD v76[12]; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B8h] [rbp+B0h] BYREF
  char *v78; // [rsp+1D8h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+D8h]
  char *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  _QWORD *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  char *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  char *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  char *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  _QWORD *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  __int64 *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  __int64 *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  __int64 *v98; // [rsp+278h] [rbp+170h]
  __int64 v99; // [rsp+280h] [rbp+178h]
  __int64 *v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  char *v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  __int64 *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v106; // [rsp+2B8h] [rbp+1B0h]
  __int64 v107; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v108; // [rsp+2C8h] [rbp+1C0h]
  __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 *v110; // [rsp+2D8h] [rbp+1D0h]
  __int64 v111; // [rsp+2E0h] [rbp+1D8h]
  int *v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  int *v114; // [rsp+2F8h] [rbp+1F0h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  int *v116; // [rsp+308h] [rbp+200h]
  __int64 v117; // [rsp+310h] [rbp+208h]
  int *v118; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  __int64 *v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  __int64 *v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]
  __int64 *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  int *v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  int *v128; // [rsp+368h] [rbp+260h]
  __int64 v129; // [rsp+370h] [rbp+268h]
  int *v130; // [rsp+378h] [rbp+270h]
  __int64 v131; // [rsp+380h] [rbp+278h]
  int *v132; // [rsp+388h] [rbp+280h]
  __int64 v133; // [rsp+390h] [rbp+288h]
  int *v134; // [rsp+398h] [rbp+290h]
  __int64 v135; // [rsp+3A0h] [rbp+298h]
  EVENT_DATA_DESCRIPTOR v136; // [rsp+3A8h] [rbp+2A0h] BYREF
  char *v137; // [rsp+3C8h] [rbp+2C0h]
  __int64 v138; // [rsp+3D0h] [rbp+2C8h]
  char *v139; // [rsp+3D8h] [rbp+2D0h]
  __int64 v140; // [rsp+3E0h] [rbp+2D8h]
  _QWORD *v141; // [rsp+3E8h] [rbp+2E0h]
  __int64 v142; // [rsp+3F0h] [rbp+2E8h]
  char *v143; // [rsp+3F8h] [rbp+2F0h]
  __int64 v144; // [rsp+400h] [rbp+2F8h]
  char *v145; // [rsp+408h] [rbp+300h]
  __int64 v146; // [rsp+410h] [rbp+308h]
  char *v147; // [rsp+418h] [rbp+310h]
  __int64 v148; // [rsp+420h] [rbp+318h]
  _QWORD *v149; // [rsp+428h] [rbp+320h]
  __int64 v150; // [rsp+430h] [rbp+328h]
  __int64 *v151; // [rsp+438h] [rbp+330h]
  __int64 v152; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v153; // [rsp+448h] [rbp+340h]
  __int64 v154; // [rsp+450h] [rbp+348h]
  __int64 *v155; // [rsp+458h] [rbp+350h]
  __int64 v156; // [rsp+460h] [rbp+358h]
  unsigned __int64 *v157; // [rsp+468h] [rbp+360h]
  __int64 v158; // [rsp+470h] [rbp+368h]
  unsigned __int64 *v159; // [rsp+478h] [rbp+370h]
  __int64 v160; // [rsp+480h] [rbp+378h]
  char *v161; // [rsp+488h] [rbp+380h]
  __int64 v162; // [rsp+490h] [rbp+388h]
  signed __int64 *v163; // [rsp+498h] [rbp+390h]
  __int64 v164; // [rsp+4A0h] [rbp+398h]
  __int64 *v165; // [rsp+4A8h] [rbp+3A0h]
  __int64 v166; // [rsp+4B0h] [rbp+3A8h]

  LOBYTE(v4) = TraceLoggingProviderEnabled(&stru_1402D1A00, a2, 0x400000000001uLL);
  if ( (_BYTE)v4 )
  {
    v5 = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
    memset(v76, 0, sizeof(v76));
    v6 = *(_QWORD *)(a1 + 1840);
    v7 = v6 | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
    LODWORD(v76[3]) = *(_DWORD *)(a1 + 744);
    ProcessSessionId = PsGetProcessSessionId(a1);
    v9 = *(_DWORD *)(a2 + 52);
    v10 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 1848);
    WORD2(v76[3]) = ProcessSessionId;
    HIWORD(v76[3]) = MEMORY[0xFFFFF780000002C4];
    v76[4] = *(_QWORD *)(a1 + 776);
    HIDWORD(v76[0]) = *(_DWORD *)(a2 + 48);
    v12 = v10;
    *(_OWORD *)&v76[1] = *(_OWORD *)&v76[3];
    v13 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24);
    v76[2] = v7;
    v14 = v13 / 0x2710;
    LODWORD(v76[0]) = v9;
    v15 = *(_QWORD *)(a2 + 32);
    v76[5] = v12 / 0x2710;
    v4 = 0x346DC5D63886594BLL * *(_QWORD *)(a2 + 40);
    v16 = *(_QWORD *)(a2 + 40);
    v76[6] = v13 / 0x2710;
    v76[7] = v11 / 0x2710;
    v76[8] = v15 / 0x2710;
    v76[9] = v16 / 0x2710;
    v76[10] = v5;
    v76[11] = v6;
    if ( v9 == 3 )
    {
      PsQueryStatisticsProcess(a1, v71);
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
      v18 = -1;
      v19 = -1;
      v20 = *(_QWORD *)(a1 + 1272) << 12;
      v21 = -1;
      if ( v72 < 0xFFFFFFFFLL )
        v18 = v72;
      if ( v73 < 0xFFFFFFFFLL )
        v19 = v73;
      if ( v74 / 1024 < 0xFFFFFFFFLL )
        v21 = v74 / 1024;
      v4 = v75 / 1024;
      if ( stru_1402D1A00.LevelPlus1 > 5 )
      {
        LOBYTE(v4) = TlgKeywordOn(&stru_1402D1A00, 0x400000000003uLL);
        if ( (_BYTE)v4 )
        {
          v31 = v76[0];
          v33 = BYTE4(v76[0]);
          v61 = v76[5];
          v70 = v76[6];
          v63 = v76[7];
          v69 = v76[8];
          v54 = v76[9];
          v56 = v76[10];
          v58 = v76[11];
          v25 = *(_DWORD *)(a1 + 744);
          v84 = &v35;
          LODWORD(v52) = v25;
          v26 = *(_DWORD *)(a1 + 1564);
          v86 = &v37;
          v49 = v26;
          v27 = *(unsigned __int8 *)(a1 + 1723);
          v88 = &v39;
          v47 = v27;
          v90 = &v76[3];
          v66 = v71[2];
          v44 = *(_DWORD *)(a1 + 1456);
          v94 = &v70;
          v78 = &v31;
          v96 = &v63;
          v80 = &v33;
          v98 = &v69;
          v82 = &v76[1];
          v100 = &v54;
          v92 = &v61;
          v35 = 1;
          v37 = 1;
          v39 = 1;
          v41 = 1;
          v60 = v7;
          LOBYTE(v43) = v23;
          v51 = ProcessHandleCount;
          v62 = v24;
          v64 = v20;
          v45 = v18;
          v46 = v19;
          v48 = v21;
          v50 = v22;
          v79 = 1LL;
          v81 = 1LL;
          v83 = 16LL;
          v85 = 1LL;
          v87 = 1LL;
          v89 = 1LL;
          v91 = 16LL;
          v93 = 8LL;
          v95 = 8LL;
          v97 = 8LL;
          v99 = 8LL;
          v101 = 8LL;
          v102 = &v41;
          v103 = 1LL;
          v105 = 8LL;
          v104 = &v56;
          v126 = &v45;
          v106 = &v58;
          v128 = &v46;
          v108 = &v52;
          v130 = &v48;
          v110 = &v60;
          v132 = &v50;
          v112 = &v49;
          v107 = 8LL;
          v114 = &v43;
          v116 = &v47;
          v118 = &v51;
          v120 = &v62;
          v122 = &v64;
          v124 = &v66;
          v109 = 4LL;
          v111 = 8LL;
          v113 = 4LL;
          v115 = 1LL;
          v117 = 4LL;
          v119 = 4LL;
          v121 = 8LL;
          v123 = 8LL;
          v125 = 8LL;
          v127 = 4LL;
          v129 = 4LL;
          v131 = 4LL;
          v133 = 4LL;
          v134 = &v44;
          v135 = 4LL;
          LOBYTE(v4) = TlgWrite(&stru_1402D1A00, &unk_140255314, 0LL, 0LL, 0x1Fu, &pData);
        }
      }
    }
    else if ( stru_1402D1A00.LevelPlus1 > 5 )
    {
      LOBYTE(v4) = TlgKeywordOn(&stru_1402D1A00, 0x400000000001uLL);
      if ( (_BYTE)v4 )
      {
        v143 = &v34;
        v32 = v76[0];
        v145 = &v42;
        v147 = &v36;
        v149 = &v76[3];
        v153 = &v55;
        v38 = BYTE4(v76[0]);
        v155 = &v65;
        v137 = &v32;
        v157 = &v57;
        v34 = 1;
        v42 = 1;
        v36 = 1;
        v40 = 1;
        v138 = 1LL;
        v139 = &v38;
        v140 = 1LL;
        v144 = 1LL;
        v146 = 1LL;
        v148 = 1LL;
        v162 = 1LL;
        v159 = &v68;
        v141 = &v76[1];
        v163 = &v59;
        v161 = &v40;
        v67 = v29;
        v55 = v14;
        v65 = v28;
        v57 = v15 / 0x2710;
        v68 = v16 / 0x2710;
        v59 = v5;
        v53 = v6;
        v142 = 16LL;
        v150 = 16LL;
        v151 = &v67;
        v152 = 8LL;
        v154 = 8LL;
        v156 = 8LL;
        v158 = 8LL;
        v160 = 8LL;
        v164 = 8LL;
        v165 = &v53;
        v166 = 8LL;
        LOBYTE(v4) = TlgWrite(&stru_1402D1A00, &unk_140255514, 0LL, 0LL, 0x11u, &v136);
      }
    }
  }
  return v4;
}
