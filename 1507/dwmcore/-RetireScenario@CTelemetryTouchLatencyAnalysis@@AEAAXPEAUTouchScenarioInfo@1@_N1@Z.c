/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20
 * Callers:
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800E177C (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x1800E47BC (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800E5AE8 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x1800E5B68 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800E5BF4 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1800639D8 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800E44C0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800E4BA4 (-ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800E4E00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 QuadPart; // r8
  __int64 v10; // rdx
  _WORD *v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int16 v17; // bx
  unsigned __int16 v18; // bx
  int v19; // ecx
  __int64 v20; // r10
  const GUID *v21; // r8
  const GUID *v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  EVENT_DATA_DESCRIPTOR *pData; // rax
  const void *v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  bool v29; // zf
  unsigned int v30; // r8d
  _WORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v32[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v33[2]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v34[2]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v36; // [rsp+42h] [rbp-BEh] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  char v42; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+90h] [rbp-70h] BYREF
  int *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int16 *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+C0h] [rbp-40h] BYREF
  char *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  char *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  _WORD *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  _WORD *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  _WORD *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  char *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  int *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  char *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  _WORD *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  char *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]
  char *v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v86; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+220h] [rbp+120h] BYREF
  int *v89; // [rsp+230h] [rbp+130h]
  __int64 v90; // [rsp+238h] [rbp+138h]
  __int16 *v91; // [rsp+240h] [rbp+140h]
  __int64 v92; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+250h] [rbp+150h] BYREF
  char *v94; // [rsp+260h] [rbp+160h]
  __int64 v95; // [rsp+268h] [rbp+168h]
  char *v96; // [rsp+270h] [rbp+170h]
  __int64 v97; // [rsp+278h] [rbp+178h]
  char *v98; // [rsp+280h] [rbp+180h]
  __int64 v99; // [rsp+288h] [rbp+188h]
  char *v100; // [rsp+290h] [rbp+190h]
  __int64 v101; // [rsp+298h] [rbp+198h]
  _WORD *v102; // [rsp+2A0h] [rbp+1A0h]
  __int64 v103; // [rsp+2A8h] [rbp+1A8h]
  char *v104; // [rsp+2B0h] [rbp+1B0h]
  __int64 v105; // [rsp+2B8h] [rbp+1B8h]
  _WORD *v106; // [rsp+2C0h] [rbp+1C0h]
  __int64 v107; // [rsp+2C8h] [rbp+1C8h]
  _WORD *v108; // [rsp+2D0h] [rbp+1D0h]
  __int64 v109; // [rsp+2D8h] [rbp+1D8h]
  char *v110; // [rsp+2E0h] [rbp+1E0h]
  __int64 v111; // [rsp+2E8h] [rbp+1E8h]
  char *v112; // [rsp+2F0h] [rbp+1F0h]
  __int64 v113; // [rsp+2F8h] [rbp+1F8h]
  char *v114; // [rsp+300h] [rbp+200h]
  __int64 v115; // [rsp+308h] [rbp+208h]
  char *v116; // [rsp+310h] [rbp+210h]
  __int64 v117; // [rsp+318h] [rbp+218h]
  int *v118; // [rsp+320h] [rbp+220h]
  __int64 v119; // [rsp+328h] [rbp+228h]
  char *v120; // [rsp+330h] [rbp+230h]
  __int64 v121; // [rsp+338h] [rbp+238h]
  _WORD *v122; // [rsp+340h] [rbp+240h]
  __int64 v123; // [rsp+348h] [rbp+248h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v124; // [rsp+350h] [rbp+250h]
  __int64 v125; // [rsp+358h] [rbp+258h]
  char *v126; // [rsp+360h] [rbp+260h]
  __int64 v127; // [rsp+368h] [rbp+268h]
  __int64 v128; // [rsp+370h] [rbp+270h]
  __int64 v129; // [rsp+378h] [rbp+278h]
  WCHAR pwsz[2]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v131[252]; // [rsp+384h] [rbp+284h] BYREF
  char v132; // [rsp+4E8h] [rbp+3E8h] BYREF

  v132 = a4;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  QueryPerformanceCounter(&PerformanceCount);
  v8 = *((_QWORD *)a2 + 6);
  v31[0] = 0;
  v32[0] = 0;
  if ( v8 )
  {
    QuadPart = PerformanceCount.QuadPart;
    if ( *((_QWORD *)a2 + 7) )
      QuadPart = *((_QWORD *)a2 + 7);
    v31[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v8, QuadPart);
  }
  v10 = *((_QWORD *)a2 + 7);
  if ( v10 )
    v32[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v10, PerformanceCount.QuadPart);
  v11 = (_WORD *)((char *)a2 + 88);
  v33[0] = 0;
  if ( *((_WORD *)a2 + 44) > 1u )
    v33[0] = *((_DWORD *)a2 + 23) / ((unsigned int)(unsigned __int16)*v11 - 1);
  v12 = *((_DWORD *)a2 + 27);
  if ( v12 <= *((_DWORD *)a2 + 26)
    || (v13 = v12 - *((_DWORD *)a2 + 26), v14 = *((unsigned __int16 *)a2 + 51), v14 > v13) )
  {
    LOBYTE(v7) = 0;
    v15 = 0LL;
  }
  else
  {
    LOBYTE(v7) = 1;
    v15 = 100 * v14 / v13;
  }
  v16 = *((_QWORD *)this + 216);
  v34[0] = 0;
  if ( v16 )
  {
    v34[0] = 0x989680 / v16;
    if ( (_BYTE)v7 )
    {
      v7 = (unsigned int)(100 - v15) * (0x989680uLL / (unsigned int)v16) / 0x64;
      *((_WORD *)a2 + 56) = v7;
    }
  }
  if ( !*v11 || !*(_QWORD *)a2 || *(_QWORD *)a2 == 0xDDEECCCCDDEE0001uLL )
    goto LABEL_50;
  v17 = *((_WORD *)this + 864);
  *(_DWORD *)pwsz = 0;
  v18 = 2 * v17;
  memset_0(v131, 0, sizeof(v131));
  ConvertTelemetryInteractionTypeToString(*((_DWORD *)a2 + 17), (char *)pwsz);
  v15 = v31[0];
  v7 = PerformanceCount.QuadPart;
  if ( (v33[0] >= v18
     || *((_WORD *)a2 + 48) >= v18
     || *((_WORD *)a2 + 49) >= v18
     || *((unsigned __int16 *)a2 + 50) + *((unsigned __int16 *)a2 + 76) >= 1)
    && PerformanceCount.QuadPart - *((_QWORD *)this + 215) >= 0x1388uLL
    || *((_WORD *)a2 + 77) > 1u && v31[0] && 1000 * *((unsigned __int16 *)a2 + 77) / v31[0] < 15 )
  {
    *((LARGE_INTEGER *)this + 215) = PerformanceCount;
    if ( hProvider > 4u
      && (qword_180190A80 & 0x400000000002LL) != 0
      && (qword_180190A88 & 0x400000000002LL) == qword_180190A88 )
    {
      TlgCreateWsz(&v43, *((LPCWSTR *)a2 + 1));
      TlgCreateWsz(&v44, *((LPCWSTR *)a2 + 2));
      v27 = *((_DWORD *)a2 + 6);
      v45 = &v40;
      v36 = *((_WORD *)a2 + 32);
      v40 = v27;
      v47 = &v36;
      v46 = 4LL;
      v48 = 2LL;
      TlgCreateWsz(&v49, pwsz);
      v51 = 2LL;
      v52 = (char *)a2 + 28;
      v50 = (char *)a2 + 72;
      v54 = (char *)a2 + 30;
      v56 = (char *)a2 + 98;
      v58 = v33;
      v60 = (char *)a2 + 96;
      v62 = v31;
      v64 = v32;
      v68 = (char *)a2 + 112;
      v70 = (char *)a2 + 100;
      v72 = (char *)a2 + 152;
      v41 = *((_DWORD *)a2 + 27) - *((_DWORD *)a2 + 26);
      v74 = &v41;
      v76 = (char *)a2 + 102;
      v78 = v34;
      v82 = &v132;
      v84 = (char *)a2 + 154;
      v53 = 2LL;
      v55 = 2LL;
      v57 = 2LL;
      v59 = 2LL;
      v61 = 2LL;
      v63 = 2LL;
      v65 = 2LL;
      v66 = (char *)a2 + 88;
      v67 = 2LL;
      v69 = 2LL;
      v71 = 2LL;
      v73 = 2LL;
      v75 = 4LL;
      v77 = 2LL;
      v79 = 2LL;
      v80 = a2;
      v81 = 8LL;
      v83 = 1LL;
      v85 = 2LL;
      pData = (EVENT_DATA_DESCRIPTOR *)&v42;
      v26 = &unk_18016DFFA;
      goto LABEL_36;
    }
  }
  else if ( hProvider > 4u && (qword_180190A80 & 2) != 0 && (qword_180190A88 & 2) == qword_180190A88 )
  {
    TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
    TlgCreateWsz(&v88, *((LPCWSTR *)a2 + 2));
    v19 = *((_DWORD *)a2 + 6);
    v89 = &v37;
    v35 = *((_WORD *)a2 + 32);
    v37 = v19;
    v91 = &v35;
    v90 = 4LL;
    v92 = v20;
    TlgCreateWsz(&v93, pwsz);
    v95 = v23;
    v96 = (char *)a2 + 28;
    v94 = (char *)a2 + 72;
    v98 = (char *)a2 + 30;
    v100 = (char *)a2 + 98;
    v102 = v33;
    v104 = (char *)a2 + 96;
    v106 = v31;
    v108 = v32;
    v112 = (char *)a2 + 112;
    v114 = (char *)a2 + 100;
    v116 = (char *)a2 + 152;
    v39 = *((_DWORD *)a2 + 27) - *((_DWORD *)a2 + 26);
    v118 = &v39;
    v120 = (char *)a2 + 102;
    v122 = v34;
    v126 = &v132;
    v97 = v23;
    v99 = v23;
    v101 = v23;
    v103 = v23;
    v105 = v23;
    v107 = v23;
    v109 = v23;
    v110 = (char *)a2 + 88;
    v111 = v23;
    v113 = v23;
    v115 = v23;
    v117 = v23;
    v119 = 4LL;
    v121 = v23;
    v123 = v23;
    v124 = a2;
    v125 = 8LL;
    v127 = 1LL;
    v128 = v24;
    v129 = v23;
    pData = &v86;
    v26 = &unk_18016DEBD;
LABEL_36:
    TlgWrite((TraceLoggingHProvider)&hProvider, v26, v21, v22, 0x19u, pData);
    v15 = v31[0];
  }
  v28 = *((_DWORD *)this + 410);
  if ( v28 <= 3 )
    goto LABEL_48;
  if ( v28 == 4 )
  {
    if ( *((_DWORD *)a2 + 39) == 513 && *((_DWORD *)this + 434) == 514 )
    {
LABEL_44:
      v30 = (unsigned __int16)v15;
LABEL_49:
      CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(this, a2, v30);
      goto LABEL_50;
    }
    v29 = ((*((_DWORD *)this + 434) - 522) & 0xFFFFFFFB) == 0;
LABEL_43:
    if ( !v29 )
      goto LABEL_50;
    goto LABEL_44;
  }
  if ( v28 == 5 )
  {
LABEL_48:
    v30 = (unsigned __int16)v15 + v32[0];
    goto LABEL_49;
  }
  if ( v28 == 6 && *((_DWORD *)a2 + 39) == 256 )
  {
    v29 = *((_DWORD *)this + 434) == 257;
    goto LABEL_43;
  }
LABEL_50:
  *((_DWORD *)a2 + 9) = 0;
  if ( a3 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD, unsigned __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)a2 + 1),
      v7,
      v15);
    memset_0(a2, 0, 0xA0uLL);
    if ( *(_DWORD *)this )
      --*(_DWORD *)this;
  }
}
