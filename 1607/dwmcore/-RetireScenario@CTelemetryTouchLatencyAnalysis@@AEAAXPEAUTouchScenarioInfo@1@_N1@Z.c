/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001CB00
 * Callers:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x18001C920 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18001C9BC (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18001CDD0 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800A1F60 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180113DF0 (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001C608 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18001C628 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@@Z @ 0x18001D014 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 QuadPart; // r11
  __int64 v9; // r8
  __int64 v10; // rdx
  _WORD *v11; // r12
  __int64 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // r10
  __int64 v22; // r11
  const WCHAR *v23; // r13
  unsigned int v24; // eax
  unsigned int v25; // r8d
  bool v26; // zf
  int v27; // ecx
  int v28; // r11d
  const GUID *v29; // r8
  const GUID *v30; // r9
  __int64 v31; // r11
  EVENT_DATA_DESCRIPTOR *pData; // rax
  const void *v33; // rdx
  int v34; // ecx
  _WORD v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v36[2]; // [rsp+34h] [rbp-CCh] BYREF
  char v37; // [rsp+38h] [rbp-C8h]
  _WORD v38[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  _WORD v39[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v40; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v41; // [rsp+46h] [rbp-BAh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v47; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-70h] BYREF
  int *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  __int16 *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-40h] BYREF
  char *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  char *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  char *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  _WORD *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  char *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  _WORD *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  _WORD *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  char *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  char *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  char *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  char *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  char *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]
  _WORD *v87; // [rsp+1C0h] [rbp+C0h]
  __int64 v88; // [rsp+1C8h] [rbp+C8h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  char *v91; // [rsp+1E0h] [rbp+E0h]
  __int64 v92; // [rsp+1E8h] [rbp+E8h]
  char *v93; // [rsp+1F0h] [rbp+F0h]
  __int64 v94; // [rsp+1F8h] [rbp+F8h]
  char *v95; // [rsp+200h] [rbp+100h]
  __int64 v96; // [rsp+208h] [rbp+108h]
  char v97; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+240h] [rbp+140h] BYREF
  int *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  __int16 *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+270h] [rbp+170h] BYREF
  char *v105; // [rsp+280h] [rbp+180h]
  __int64 v106; // [rsp+288h] [rbp+188h]
  char *v107; // [rsp+290h] [rbp+190h]
  __int64 v108; // [rsp+298h] [rbp+198h]
  char *v109; // [rsp+2A0h] [rbp+1A0h]
  __int64 v110; // [rsp+2A8h] [rbp+1A8h]
  char *v111; // [rsp+2B0h] [rbp+1B0h]
  __int64 v112; // [rsp+2B8h] [rbp+1B8h]
  _WORD *v113; // [rsp+2C0h] [rbp+1C0h]
  __int64 v114; // [rsp+2C8h] [rbp+1C8h]
  char *v115; // [rsp+2D0h] [rbp+1D0h]
  __int64 v116; // [rsp+2D8h] [rbp+1D8h]
  _WORD *v117; // [rsp+2E0h] [rbp+1E0h]
  __int64 v118; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v119; // [rsp+2F0h] [rbp+1F0h]
  __int64 v120; // [rsp+2F8h] [rbp+1F8h]
  char *v121; // [rsp+300h] [rbp+200h]
  __int64 v122; // [rsp+308h] [rbp+208h]
  char *v123; // [rsp+310h] [rbp+210h]
  __int64 v124; // [rsp+318h] [rbp+218h]
  char *v125; // [rsp+320h] [rbp+220h]
  __int64 v126; // [rsp+328h] [rbp+228h]
  char *v127; // [rsp+330h] [rbp+230h]
  __int64 v128; // [rsp+338h] [rbp+238h]
  int *v129; // [rsp+340h] [rbp+240h]
  __int64 v130; // [rsp+348h] [rbp+248h]
  char *v131; // [rsp+350h] [rbp+250h]
  __int64 v132; // [rsp+358h] [rbp+258h]
  char *v133; // [rsp+360h] [rbp+260h]
  __int64 v134; // [rsp+368h] [rbp+268h]
  _WORD *v135; // [rsp+370h] [rbp+270h]
  __int64 v136; // [rsp+378h] [rbp+278h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v137; // [rsp+380h] [rbp+280h]
  __int64 v138; // [rsp+388h] [rbp+288h]
  char *v139; // [rsp+390h] [rbp+290h]
  __int64 v140; // [rsp+398h] [rbp+298h]
  char *v141; // [rsp+3A0h] [rbp+2A0h]
  __int64 v142; // [rsp+3A8h] [rbp+2A8h]
  char *v143; // [rsp+3B0h] [rbp+2B0h]
  __int64 v144; // [rsp+3B8h] [rbp+2B8h]
  char v145; // [rsp+428h] [rbp+328h] BYREF

  v145 = a4;
  v37 = a3;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  QueryPerformanceCounter(&PerformanceCount);
  v7 = *((_QWORD *)a2 + 6);
  QuadPart = PerformanceCount.QuadPart;
  v35[0] = 0;
  v36[0] = 0;
  if ( v7 )
  {
    v9 = PerformanceCount.QuadPart;
    if ( *((_QWORD *)a2 + 7) )
      v9 = *((_QWORD *)a2 + 7);
    v35[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v7, v9);
  }
  v10 = *((_QWORD *)a2 + 7);
  if ( v10 )
    v36[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v10, QuadPart);
  v11 = (_WORD *)((char *)a2 + 88);
  v38[0] = 0;
  v12 = 0LL;
  if ( *((_WORD *)a2 + 44) > 1u )
  {
    v13 = (unsigned __int16)*v11 - 1;
    v12 = *((_DWORD *)a2 + 23) / v13;
    v38[0] = *((_DWORD *)a2 + 23) / v13;
  }
  v14 = *((_DWORD *)a2 + 28);
  if ( v14 <= *((_DWORD *)a2 + 27)
    || (v15 = v14 - *((_DWORD *)a2 + 27), v16 = *((unsigned __int16 *)a2 + 52), v16 > v15) )
  {
    LOBYTE(v6) = 0;
    v17 = 0;
  }
  else
  {
    LOBYTE(v6) = 1;
    v17 = 100 * v16 / v15;
  }
  v18 = *((_QWORD *)this + 232);
  v39[0] = 0;
  if ( v18 )
  {
    v39[0] = 0x989680 / v18;
    if ( (_BYTE)v6 )
    {
      v6 = (100 - v17) * (0x989680uLL / (unsigned int)v18) / 0x64;
      *((_WORD *)a2 + 58) = v6;
    }
  }
  if ( !*v11 || !*(_QWORD *)a2 || *(_QWORD *)a2 == 0xDDEECCCCDDEE0001uLL )
    goto LABEL_26;
  v19 = *((_QWORD *)this + 232) / 0x2710uLL;
  LOWORD(v19) = 2 * v19;
  v23 = (const WCHAR *)ConvertTelemetryInteractionTypeToString(*((unsigned int *)a2 + 17), v19, v6, v12);
  if ( ((unsigned __int16)v12 >= v20
     || *((_WORD *)a2 + 48) >= v20
     || *((_WORD *)a2 + 49) >= v20
     || *((unsigned __int16 *)a2 + 50) + *((unsigned __int16 *)a2 + 76) >= 1)
    && (unsigned __int64)(v22 - *((_QWORD *)this + 231)) >= 0x1388
    || *((_WORD *)a2 + 77) > 1u && v21 && 1000 * *((unsigned __int16 *)a2 + 77) / v21 < 15
    || *((_DWORD *)a2 + 40) )
  {
    *((_QWORD *)this + 231) = v22;
    if ( dword_1801EA780 > 4u
      && (qword_1801EA790 & 0x400000000002LL) != 0
      && (qword_1801EA798 & 0x400000000002LL) == qword_1801EA798 )
    {
      TlgCreateWsz(&v98, *((LPCWSTR *)a2 + 1));
      TlgCreateWsz(&v99, *((LPCWSTR *)a2 + 2));
      v34 = *((_DWORD *)a2 + 6);
      v100 = &v44;
      v41 = *((_WORD *)a2 + 32);
      v44 = v34;
      v102 = &v41;
      v101 = 4LL;
      v103 = 2LL;
      TlgCreateWsz(&v104, v23);
      v106 = 2LL;
      v107 = (char *)a2 + 28;
      v105 = (char *)a2 + 72;
      v109 = (char *)a2 + 30;
      v108 = 2LL;
      v111 = (char *)a2 + 98;
      v113 = v38;
      v115 = (char *)a2 + 96;
      v117 = v35;
      v119 = v36;
      v123 = (char *)a2 + 116;
      v125 = (char *)a2 + 100;
      v127 = (char *)a2 + 152;
      v45 = *((_DWORD *)a2 + 28) - *((_DWORD *)a2 + 27);
      v129 = &v45;
      v131 = (char *)a2 + 104;
      v133 = (char *)a2 + 102;
      v135 = v39;
      v139 = &v145;
      v141 = (char *)a2 + 154;
      v143 = (char *)a2 + 160;
      v110 = 2LL;
      v112 = 2LL;
      v114 = 2LL;
      v116 = 2LL;
      v118 = 2LL;
      v120 = 2LL;
      v121 = (char *)a2 + 88;
      v122 = 2LL;
      v124 = 2LL;
      v126 = 2LL;
      v128 = 2LL;
      v130 = 4LL;
      v132 = 2LL;
      v134 = 2LL;
      v136 = 2LL;
      v137 = a2;
      v138 = 8LL;
      v140 = 1LL;
      v142 = 2LL;
      v144 = 4LL;
      pData = (EVENT_DATA_DESCRIPTOR *)&v97;
      v33 = &unk_1801C3632;
      goto LABEL_48;
    }
  }
  else if ( dword_1801EA780 > 4u && (qword_1801EA790 & 2) != 0 && (qword_1801EA798 & 2) == qword_1801EA798 )
  {
    TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
    TlgCreateWsz(&v49, *((LPCWSTR *)a2 + 2));
    v27 = *((_DWORD *)a2 + 6);
    v52 = 0;
    v55 = 0;
    v50 = &v42;
    v40 = *((_WORD *)a2 + 32);
    v42 = v27;
    v53 = &v40;
    v51 = 4;
    v54 = v28;
    TlgCreateWsz(&v56, v23);
    v58 = v31;
    v59 = (char *)a2 + 28;
    v57 = (char *)a2 + 72;
    v61 = (char *)a2 + 30;
    v60 = v31;
    v63 = (char *)a2 + 98;
    v65 = v38;
    v67 = (char *)a2 + 96;
    v69 = v35;
    v71 = v36;
    v75 = (char *)a2 + 116;
    v77 = (char *)a2 + 100;
    v79 = (char *)a2 + 152;
    v43 = *((_DWORD *)a2 + 28) - *((_DWORD *)a2 + 27);
    v81 = &v43;
    v83 = (char *)a2 + 104;
    v85 = (char *)a2 + 102;
    v87 = v39;
    v91 = &v145;
    v62 = v31;
    v64 = v31;
    v66 = v31;
    v68 = v31;
    v70 = v31;
    v72 = v31;
    v73 = (char *)a2 + 88;
    v74 = v31;
    v76 = v31;
    v78 = v31;
    v80 = v31;
    v82 = 4LL;
    v84 = v31;
    v86 = v31;
    v88 = v31;
    v89 = a2;
    v90 = 8LL;
    v92 = 1LL;
    v93 = (char *)a2 + 154;
    v94 = v31;
    v95 = (char *)a2 + 160;
    v96 = 4LL;
    pData = &v47;
    v33 = &unk_1801C34C8;
LABEL_48:
    TlgWrite((TraceLoggingHProvider)&dword_1801EA780, v33, v29, v30, 0x1Bu, pData);
    v21 = v35[0];
  }
  v24 = *((_DWORD *)this + 430);
  if ( v24 <= 3 )
  {
LABEL_24:
    v25 = v21 + v36[0];
LABEL_25:
    CTelemetryTouchLatencyAnalysis::AddToInteractionSummary((LARGE_INTEGER *)this, a2, v25);
    goto LABEL_26;
  }
  if ( v24 == 4 )
  {
    if ( *((_DWORD *)a2 + 39) == 513 && *((_DWORD *)this + 466) == 514 )
      goto LABEL_55;
    v26 = ((*((_DWORD *)this + 466) - 522) & 0xFFFFFFFB) == 0;
  }
  else
  {
    if ( v24 == 5 )
      goto LABEL_24;
    if ( v24 != 6 || *((_DWORD *)a2 + 39) != 256 )
      goto LABEL_26;
    v26 = *((_DWORD *)this + 466) == 257;
  }
  if ( v26 )
  {
LABEL_55:
    v25 = v21;
    goto LABEL_25;
  }
LABEL_26:
  *((_DWORD *)a2 + 9) = 0;
  if ( v37 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD, unsigned __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)a2 + 1),
      v6,
      v12);
    memset_0(a2, 0, 0xA8uLL);
    if ( *(_DWORD *)this )
      --*(_DWORD *)this;
  }
}
