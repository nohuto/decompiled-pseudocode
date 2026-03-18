/*
 * XREFs of EtwTraceAppStateChange @ 0x1405075DC
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x1400EFD94 (PsGetProcessSessionId.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1400EFF88 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x140508648 (ObGetProcessHandleCount.c)
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
  char v71[16]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v72; // [rsp+118h] [rbp+10h]
  __int64 v73; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  __int64 v76; // [rsp+148h] [rbp+40h]
  _QWORD v77[12]; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B8h] [rbp+B0h] BYREF
  char *v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h]
  char *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  _QWORD *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  char *v85; // [rsp+208h] [rbp+100h]
  __int64 v86; // [rsp+210h] [rbp+108h]
  char *v87; // [rsp+218h] [rbp+110h]
  __int64 v88; // [rsp+220h] [rbp+118h]
  char *v89; // [rsp+228h] [rbp+120h]
  __int64 v90; // [rsp+230h] [rbp+128h]
  _QWORD *v91; // [rsp+238h] [rbp+130h]
  __int64 v92; // [rsp+240h] [rbp+138h]
  __int64 *v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  __int64 *v95; // [rsp+258h] [rbp+150h]
  __int64 v96; // [rsp+260h] [rbp+158h]
  __int64 *v97; // [rsp+268h] [rbp+160h]
  __int64 v98; // [rsp+270h] [rbp+168h]
  __int64 *v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  __int64 *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  char *v103; // [rsp+298h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+198h]
  __int64 *v105; // [rsp+2A8h] [rbp+1A0h]
  __int64 v106; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v107; // [rsp+2B8h] [rbp+1B0h]
  __int64 v108; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 *v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  int *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  int *v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  int *v117; // [rsp+308h] [rbp+200h]
  __int64 v118; // [rsp+310h] [rbp+208h]
  int *v119; // [rsp+318h] [rbp+210h]
  __int64 v120; // [rsp+320h] [rbp+218h]
  __int64 *v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+330h] [rbp+228h]
  __int64 *v123; // [rsp+338h] [rbp+230h]
  __int64 v124; // [rsp+340h] [rbp+238h]
  __int64 *v125; // [rsp+348h] [rbp+240h]
  __int64 v126; // [rsp+350h] [rbp+248h]
  int *v127; // [rsp+358h] [rbp+250h]
  __int64 v128; // [rsp+360h] [rbp+258h]
  int *v129; // [rsp+368h] [rbp+260h]
  __int64 v130; // [rsp+370h] [rbp+268h]
  int *v131; // [rsp+378h] [rbp+270h]
  __int64 v132; // [rsp+380h] [rbp+278h]
  int *v133; // [rsp+388h] [rbp+280h]
  __int64 v134; // [rsp+390h] [rbp+288h]
  int *v135; // [rsp+398h] [rbp+290h]
  __int64 v136; // [rsp+3A0h] [rbp+298h]
  EVENT_DATA_DESCRIPTOR v137; // [rsp+3A8h] [rbp+2A0h] BYREF
  char *v138; // [rsp+3C8h] [rbp+2C0h]
  __int64 v139; // [rsp+3D0h] [rbp+2C8h]
  char *v140; // [rsp+3D8h] [rbp+2D0h]
  __int64 v141; // [rsp+3E0h] [rbp+2D8h]
  _QWORD *v142; // [rsp+3E8h] [rbp+2E0h]
  __int64 v143; // [rsp+3F0h] [rbp+2E8h]
  char *v144; // [rsp+3F8h] [rbp+2F0h]
  __int64 v145; // [rsp+400h] [rbp+2F8h]
  char *v146; // [rsp+408h] [rbp+300h]
  __int64 v147; // [rsp+410h] [rbp+308h]
  char *v148; // [rsp+418h] [rbp+310h]
  __int64 v149; // [rsp+420h] [rbp+318h]
  _QWORD *v150; // [rsp+428h] [rbp+320h]
  __int64 v151; // [rsp+430h] [rbp+328h]
  __int64 *v152; // [rsp+438h] [rbp+330h]
  __int64 v153; // [rsp+440h] [rbp+338h]
  unsigned __int64 *v154; // [rsp+448h] [rbp+340h]
  __int64 v155; // [rsp+450h] [rbp+348h]
  __int64 *v156; // [rsp+458h] [rbp+350h]
  __int64 v157; // [rsp+460h] [rbp+358h]
  unsigned __int64 *v158; // [rsp+468h] [rbp+360h]
  __int64 v159; // [rsp+470h] [rbp+368h]
  unsigned __int64 *v160; // [rsp+478h] [rbp+370h]
  __int64 v161; // [rsp+480h] [rbp+378h]
  char *v162; // [rsp+488h] [rbp+380h]
  __int64 v163; // [rsp+490h] [rbp+388h]
  signed __int64 *v164; // [rsp+498h] [rbp+390h]
  __int64 v165; // [rsp+4A0h] [rbp+398h]
  __int64 *v166; // [rsp+4A8h] [rbp+3A0h]
  __int64 v167; // [rsp+4B0h] [rbp+3A8h]

  LOBYTE(v4) = TraceLoggingProviderEnabled(&stru_140320BA0, a2, 0x400000000001uLL);
  if ( (_BYTE)v4 )
  {
    v5 = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
    memset(v77, 0, sizeof(v77));
    v6 = *(_QWORD *)(a1 + 1856);
    v7 = v6 | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
    LODWORD(v77[3]) = *(_DWORD *)(a1 + 744);
    ProcessSessionId = PsGetProcessSessionId((struct _KPROCESS *)a1);
    v9 = *(_DWORD *)(a2 + 52);
    v10 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)a2 - *(_QWORD *)(a1 + 1864);
    WORD2(v77[3]) = ProcessSessionId;
    HIWORD(v77[3]) = MEMORY[0xFFFFF780000002C4];
    v77[4] = *(_QWORD *)(a1 + 776);
    HIDWORD(v77[0]) = *(_DWORD *)(a2 + 48);
    v12 = v10;
    *(_OWORD *)&v77[1] = *(_OWORD *)&v77[3];
    v13 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24);
    v77[2] = v7;
    v14 = v13 / 0x2710;
    LODWORD(v77[0]) = v9;
    v15 = *(_QWORD *)(a2 + 32);
    v77[5] = v12 / 0x2710;
    v4 = 0x346DC5D63886594BLL * *(_QWORD *)(a2 + 40);
    v16 = *(_QWORD *)(a2 + 40);
    v77[6] = v13 / 0x2710;
    v77[7] = v11 / 0x2710;
    v77[8] = v15 / 0x2710;
    v77[9] = v16 / 0x2710;
    v77[10] = v5;
    v77[11] = v6;
    if ( v9 == 3 )
    {
      PsQueryStatisticsProcess(a1, v71);
      ProcessHandleCount = ObGetProcessHandleCount(a1, 0LL);
      v18 = -1;
      v19 = -1;
      v20 = *(_QWORD *)(a1 + 1264) << 12;
      v21 = -1;
      if ( v73 < 0xFFFFFFFFLL )
        v18 = v73;
      if ( v74 < 0xFFFFFFFFLL )
        v19 = v74;
      if ( v75 / 1024 < 0xFFFFFFFFLL )
        v21 = v75 / 1024;
      v4 = v76 / 1024;
      if ( stru_140320BA0.LevelPlus1 > 5 )
      {
        LOBYTE(v4) = TlgKeywordOn(&stru_140320BA0, 0x400000000003uLL);
        if ( (_BYTE)v4 )
        {
          v31 = v77[0];
          v33 = BYTE4(v77[0]);
          v61 = v77[5];
          v70 = v77[6];
          v63 = v77[7];
          v69 = v77[8];
          v54 = v77[9];
          v56 = v77[10];
          v58 = v77[11];
          v25 = *(_DWORD *)(a1 + 744);
          v85 = &v35;
          LODWORD(v52) = v25;
          v26 = *(_DWORD *)(a1 + 1556);
          v87 = &v37;
          v49 = v26;
          v27 = *(unsigned __int8 *)(a1 + 1715);
          v89 = &v39;
          v47 = v27;
          v91 = &v77[3];
          v66 = v72;
          v44 = *(_DWORD *)(a1 + 1448);
          v95 = &v70;
          v79 = &v31;
          v97 = &v63;
          v81 = &v33;
          v99 = &v69;
          v83 = &v77[1];
          v101 = &v54;
          v93 = &v61;
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
          v80 = 1LL;
          v82 = 1LL;
          v84 = 16LL;
          v86 = 1LL;
          v88 = 1LL;
          v90 = 1LL;
          v92 = 16LL;
          v94 = 8LL;
          v96 = 8LL;
          v98 = 8LL;
          v100 = 8LL;
          v102 = 8LL;
          v103 = &v41;
          v104 = 1LL;
          v106 = 8LL;
          v105 = &v56;
          v127 = &v45;
          v107 = &v58;
          v129 = &v46;
          v109 = &v52;
          v131 = &v48;
          v111 = &v60;
          v133 = &v50;
          v113 = &v49;
          v108 = 8LL;
          v115 = &v43;
          v117 = &v47;
          v119 = &v51;
          v121 = &v62;
          v123 = &v64;
          v125 = &v66;
          v110 = 4LL;
          v112 = 8LL;
          v114 = 4LL;
          v116 = 1LL;
          v118 = 4LL;
          v120 = 4LL;
          v122 = 8LL;
          v124 = 8LL;
          v126 = 8LL;
          v128 = 4LL;
          v130 = 4LL;
          v132 = 4LL;
          v134 = 4LL;
          v135 = &v44;
          v136 = 4LL;
          LOBYTE(v4) = TlgWrite(&stru_140320BA0, &unk_1402A5311, 0LL, 0LL, 0x1Fu, &pData);
        }
      }
    }
    else if ( stru_140320BA0.LevelPlus1 > 5 )
    {
      LOBYTE(v4) = TlgKeywordOn(&stru_140320BA0, 0x400000000001uLL);
      if ( (_BYTE)v4 )
      {
        v144 = &v34;
        v32 = v77[0];
        v146 = &v42;
        v148 = &v36;
        v150 = &v77[3];
        v154 = &v55;
        v38 = BYTE4(v77[0]);
        v156 = &v65;
        v138 = &v32;
        v158 = &v57;
        v34 = 1;
        v42 = 1;
        v36 = 1;
        v40 = 1;
        v139 = 1LL;
        v140 = &v38;
        v141 = 1LL;
        v145 = 1LL;
        v147 = 1LL;
        v149 = 1LL;
        v163 = 1LL;
        v160 = &v68;
        v142 = &v77[1];
        v164 = &v59;
        v162 = &v40;
        v67 = v29;
        v55 = v14;
        v65 = v28;
        v57 = v15 / 0x2710;
        v68 = v16 / 0x2710;
        v59 = v5;
        v53 = v6;
        v143 = 16LL;
        v151 = 16LL;
        v152 = &v67;
        v153 = 8LL;
        v155 = 8LL;
        v157 = 8LL;
        v159 = 8LL;
        v161 = 8LL;
        v165 = 8LL;
        v166 = &v53;
        v167 = 8LL;
        LOBYTE(v4) = TlgWrite(&stru_140320BA0, &unk_1402A5511, 0LL, 0LL, 0x11u, &v137);
      }
    }
  }
  return v4;
}
