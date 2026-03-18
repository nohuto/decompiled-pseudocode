/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C
 * Callers:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x180002EE4 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x1800034F4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180003594 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800AFE64 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800FFE8C (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800025E4 (-ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800032C8 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800032E8 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     _TlgCreateWsz @ 0x180016F98 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 QuadPart; // r8
  unsigned __int64 v10; // rdx
  _WORD *v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int16 v17; // bx
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // ecx
  const GUID *v21; // r8
  const GUID *v22; // r9
  EVENT_DATA_DESCRIPTOR *pData; // rax
  const void *v24; // rdx
  int v25; // ecx
  __int64 v26; // r10
  __int64 v27; // r10
  __int64 v28; // r11
  bool v29; // zf
  _WORD v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v31[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v33[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v35; // [rsp+42h] [rbp-BEh] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+90h] [rbp-70h] BYREF
  int *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int16 *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+C0h] [rbp-40h] BYREF
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  char *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  _WORD *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  char *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  _WORD *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  _WORD *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  char *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  char *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  char *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  char *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  int *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  char *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  char *v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  _WORD *v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  char *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  char *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  char *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  char v89; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+240h] [rbp+140h] BYREF
  int *v92; // [rsp+250h] [rbp+150h]
  __int64 v93; // [rsp+258h] [rbp+158h]
  __int16 *v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+270h] [rbp+170h] BYREF
  char *v97; // [rsp+280h] [rbp+180h]
  __int64 v98; // [rsp+288h] [rbp+188h]
  char *v99; // [rsp+290h] [rbp+190h]
  __int64 v100; // [rsp+298h] [rbp+198h]
  char *v101; // [rsp+2A0h] [rbp+1A0h]
  __int64 v102; // [rsp+2A8h] [rbp+1A8h]
  char *v103; // [rsp+2B0h] [rbp+1B0h]
  __int64 v104; // [rsp+2B8h] [rbp+1B8h]
  _WORD *v105; // [rsp+2C0h] [rbp+1C0h]
  __int64 v106; // [rsp+2C8h] [rbp+1C8h]
  char *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  _WORD *v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v111; // [rsp+2F0h] [rbp+1F0h]
  __int64 v112; // [rsp+2F8h] [rbp+1F8h]
  char *v113; // [rsp+300h] [rbp+200h]
  __int64 v114; // [rsp+308h] [rbp+208h]
  char *v115; // [rsp+310h] [rbp+210h]
  __int64 v116; // [rsp+318h] [rbp+218h]
  char *v117; // [rsp+320h] [rbp+220h]
  __int64 v118; // [rsp+328h] [rbp+228h]
  char *v119; // [rsp+330h] [rbp+230h]
  __int64 v120; // [rsp+338h] [rbp+238h]
  int *v121; // [rsp+340h] [rbp+240h]
  __int64 v122; // [rsp+348h] [rbp+248h]
  char *v123; // [rsp+350h] [rbp+250h]
  __int64 v124; // [rsp+358h] [rbp+258h]
  char *v125; // [rsp+360h] [rbp+260h]
  __int64 v126; // [rsp+368h] [rbp+268h]
  _WORD *v127; // [rsp+370h] [rbp+270h]
  __int64 v128; // [rsp+378h] [rbp+278h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v129; // [rsp+380h] [rbp+280h]
  __int64 v130; // [rsp+388h] [rbp+288h]
  char *v131; // [rsp+390h] [rbp+290h]
  __int64 v132; // [rsp+398h] [rbp+298h]
  char *v133; // [rsp+3A0h] [rbp+2A0h]
  __int64 v134; // [rsp+3A8h] [rbp+2A8h]
  __int64 v135; // [rsp+3B0h] [rbp+2B0h]
  __int64 v136; // [rsp+3B8h] [rbp+2B8h]
  WCHAR pwsz[2]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v138[252]; // [rsp+3C4h] [rbp+2C4h] BYREF
  char v139; // [rsp+528h] [rbp+428h] BYREF

  v139 = a4;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  QueryPerformanceCounter(&PerformanceCount);
  v8 = *((_QWORD *)a2 + 6);
  v30[0] = 0;
  v31[0] = 0;
  if ( v8 )
  {
    QuadPart = PerformanceCount.QuadPart;
    if ( *((_QWORD *)a2 + 7) )
      QuadPart = *((_QWORD *)a2 + 7);
    v30[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v8, QuadPart);
  }
  v10 = *((_QWORD *)a2 + 7);
  if ( v10 )
    v31[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v10, PerformanceCount.QuadPart);
  v11 = (_WORD *)((char *)a2 + 88);
  v32[0] = 0;
  if ( *((_WORD *)a2 + 44) > 1u )
    v32[0] = *((_DWORD *)a2 + 23) / ((unsigned int)(unsigned __int16)*v11 - 1);
  v12 = *((_DWORD *)a2 + 28);
  if ( v12 <= *((_DWORD *)a2 + 27)
    || (v13 = v12 - *((_DWORD *)a2 + 27), v14 = *((unsigned __int16 *)a2 + 52), v14 > v13) )
  {
    LOBYTE(v7) = 0;
    v15 = 0LL;
  }
  else
  {
    LOBYTE(v7) = 1;
    v15 = 100 * v14 / v13;
  }
  v16 = *((_QWORD *)this + 231);
  v33[0] = 0;
  if ( v16 )
  {
    v33[0] = 0x989680 / v16;
    if ( (_BYTE)v7 )
    {
      v7 = (unsigned int)(100 - v15) * (0x989680uLL / (unsigned int)v16) / 0x64;
      *((_WORD *)a2 + 58) = v7;
    }
  }
  if ( !*v11 || !*(_QWORD *)a2 || *(_QWORD *)a2 == 0xDDEECCCCDDEE0001uLL )
    goto LABEL_27;
  *(_DWORD *)pwsz = 0;
  v17 = 2 * (*((_QWORD *)this + 231) / 0x2710uLL);
  memset_0(v138, 0, sizeof(v138));
  ConvertTelemetryInteractionTypeToString(*((_DWORD *)a2 + 17), pwsz);
  v15 = v30[0];
  v7 = PerformanceCount.QuadPart;
  if ( (v32[0] >= v17
     || *((_WORD *)a2 + 48) >= v17
     || *((_WORD *)a2 + 49) >= v17
     || *((unsigned __int16 *)a2 + 50) + *((unsigned __int16 *)a2 + 76) >= 1)
    && PerformanceCount.QuadPart - *((_QWORD *)this + 230) >= 0x1388uLL
    || *((_WORD *)a2 + 77) > 1u && v30[0] && 1000 * *((unsigned __int16 *)a2 + 77) / v30[0] < 15
    || *((_DWORD *)a2 + 40) )
  {
    *((LARGE_INTEGER *)this + 230) = PerformanceCount;
    if ( hProvider > 4u
      && (qword_18019E910 & 0x400000000002LL) != 0
      && (qword_18019E918 & 0x400000000002LL) == qword_18019E918 )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
      TlgCreateWsz(&v43, *((LPCWSTR *)a2 + 2));
      v20 = *((_DWORD *)a2 + 6);
      v44 = &v39;
      v35 = *((_WORD *)a2 + 32);
      v39 = v20;
      v46 = &v35;
      v45 = 4LL;
      v47 = 2LL;
      TlgCreateWsz(&v48, pwsz);
      v50 = 2LL;
      v51 = (char *)a2 + 28;
      v49 = (char *)a2 + 72;
      v53 = (char *)a2 + 30;
      v55 = (char *)a2 + 98;
      v57 = v32;
      v59 = (char *)a2 + 96;
      v61 = v30;
      v63 = v31;
      v67 = (char *)a2 + 116;
      v69 = (char *)a2 + 100;
      v71 = (char *)a2 + 152;
      v40 = *((_DWORD *)a2 + 28) - *((_DWORD *)a2 + 27);
      v73 = &v40;
      v75 = (char *)a2 + 104;
      v77 = (char *)a2 + 102;
      v79 = v33;
      v83 = &v139;
      v85 = (char *)a2 + 154;
      v87 = (char *)a2 + 160;
      v52 = 2LL;
      v54 = 2LL;
      v56 = 2LL;
      v58 = 2LL;
      v60 = 2LL;
      v62 = 2LL;
      v64 = 2LL;
      v65 = (char *)a2 + 88;
      v66 = 2LL;
      v68 = 2LL;
      v70 = 2LL;
      v72 = 2LL;
      v74 = 4LL;
      v76 = 2LL;
      v78 = 2LL;
      v80 = 2LL;
      v81 = a2;
      v82 = 8LL;
      v84 = 1LL;
      v86 = 2LL;
      v88 = 4LL;
      pData = &v41;
      v24 = &unk_18017CF55;
LABEL_33:
      TlgWrite((TraceLoggingHProvider)&hProvider, v24, v21, v22, 0x1Bu, pData);
      v15 = v30[0];
    }
  }
  else if ( hProvider > 4u && (qword_18019E910 & 2) != 0 && (qword_18019E918 & 2) == qword_18019E918 )
  {
    TlgCreateWsz(&v90, *((LPCWSTR *)a2 + 1));
    TlgCreateWsz(&v91, *((LPCWSTR *)a2 + 2));
    v25 = *((_DWORD *)a2 + 6);
    v92 = &v36;
    v34 = *((_WORD *)a2 + 32);
    v36 = v25;
    v94 = &v34;
    v93 = 4LL;
    v95 = v26;
    TlgCreateWsz(&v96, pwsz);
    v98 = v27;
    v99 = (char *)a2 + 28;
    v97 = (char *)a2 + 72;
    v101 = (char *)a2 + 30;
    v103 = (char *)a2 + 98;
    v105 = v32;
    v107 = (char *)a2 + 96;
    v109 = v30;
    v111 = v31;
    v115 = (char *)a2 + 116;
    v117 = (char *)a2 + 100;
    v119 = (char *)a2 + 152;
    v38 = *((_DWORD *)a2 + 28) - *((_DWORD *)a2 + 27);
    v121 = &v38;
    v123 = (char *)a2 + 104;
    v125 = (char *)a2 + 102;
    v127 = v33;
    v131 = &v139;
    v100 = v27;
    v102 = v27;
    v104 = v27;
    v106 = v27;
    v108 = v27;
    v110 = v27;
    v112 = v27;
    v113 = (char *)a2 + 88;
    v114 = v27;
    v116 = v27;
    v118 = v27;
    v120 = v27;
    v122 = 4LL;
    v124 = v27;
    v126 = v27;
    v128 = v27;
    v129 = a2;
    v130 = 8LL;
    v132 = 1LL;
    v133 = (char *)a2 + 154;
    v134 = v27;
    v135 = v28;
    v136 = 4LL;
    pData = (EVENT_DATA_DESCRIPTOR *)&v89;
    v24 = &unk_18017CDEB;
    goto LABEL_33;
  }
  v18 = *((_DWORD *)this + 430);
  if ( v18 <= 3 )
  {
LABEL_25:
    v19 = (unsigned __int16)v15 + v31[0];
LABEL_26:
    CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(this, a2, v19);
    goto LABEL_27;
  }
  if ( v18 == 4 )
  {
    if ( *((_DWORD *)a2 + 39) == 513 && *((_DWORD *)this + 464) == 514 )
      goto LABEL_52;
    v29 = ((*((_DWORD *)this + 464) - 522) & 0xFFFFFFFB) == 0;
  }
  else
  {
    if ( v18 == 5 )
      goto LABEL_25;
    if ( v18 != 6 || *((_DWORD *)a2 + 39) != 256 )
      goto LABEL_27;
    v29 = *((_DWORD *)this + 464) == 257;
  }
  if ( v29 )
  {
LABEL_52:
    v19 = (unsigned __int16)v15;
    goto LABEL_26;
  }
LABEL_27:
  *((_DWORD *)a2 + 9) = 0;
  if ( a3 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD, unsigned __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)a2 + 1),
      v7,
      v15);
    memset_0(a2, 0, 0xA8uLL);
    if ( *(_DWORD *)this )
      --*(_DWORD *)this;
  }
}
