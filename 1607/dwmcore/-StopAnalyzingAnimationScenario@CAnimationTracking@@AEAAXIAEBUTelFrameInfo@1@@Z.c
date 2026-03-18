/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A0628
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800A10E0 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800A115C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 * Callees:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800A0020 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800A0B34 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A0EF0 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800A0F58 (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6FC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     Template_qqqzzq @ 0x1801181C4 (Template_qqqzzq.c)
 *     Template_xxqqqzzq @ 0x1801182DC (Template_xxqqqzzq.c)
 *     Template_xxqqxxqzqqqqqqzzqq @ 0x180118414 (Template_xxqqxxqzqqqqqqzzqq.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rbx
  CAnimationTracking *v4; // r9
  unsigned __int64 v5; // r11
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rcx
  _DWORD *v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // r8
  float v12; // xmm0_4
  float v13; // xmm1_4
  unsigned __int64 v14; // r10
  int v15; // r14d
  unsigned __int64 v16; // rtt
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rtt
  unsigned int v22; // r11d
  unsigned __int64 v23; // rtt
  __int64 v24; // rax
  __int64 v25; // rax
  const WCHAR *ScenarioName; // r12
  CAnimationTracking *v27; // rcx
  unsigned int v28; // r9d
  const WCHAR *ScenarioDetails; // rax
  int v30; // edx
  size_t v31; // r8
  unsigned int v32; // r8d
  const unsigned __int16 *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // esi
  unsigned int v37; // ecx
  int v38; // r14d
  int v39; // edx
  int v40; // eax
  int v41; // edx
  unsigned int v42; // eax
  void *v43; // r13
  unsigned int v44; // r10d
  char v45; // r11
  int v46; // r9d
  int v47; // eax
  int v48; // r9d
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rtt
  void *v54; // r8
  __int64 v55; // rcx
  int v56; // r9d
  const WCHAR *v57; // rdx
  const WCHAR *v58; // rax
  const WCHAR *v59; // rdx
  const GUID *v60; // r8
  const GUID *v61; // r9
  __int64 v62; // rcx
  void *v63; // rcx
  __int64 cData; // [rsp+20h] [rbp-100h]
  unsigned int v65; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v66; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v67; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v68; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v69; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v70; // [rsp+B4h] [rbp-6Ch] BYREF
  int v71; // [rsp+B8h] [rbp-68h] BYREF
  int v72; // [rsp+BCh] [rbp-64h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-60h]
  int v74; // [rsp+C8h] [rbp-58h] BYREF
  unsigned int v75; // [rsp+CCh] [rbp-54h]
  const struct CAnimationTracking::TelFrameInfo *v76; // [rsp+D0h] [rbp-50h]
  CAnimationTracking *v77; // [rsp+D8h] [rbp-48h]
  LPCWSTR pwsz; // [rsp+E0h] [rbp-40h]
  unsigned int v79[2]; // [rsp+E8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp-10h] BYREF
  unsigned int *v82; // [rsp+120h] [rbp+0h]
  __int64 v83; // [rsp+128h] [rbp+8h]
  int *v84; // [rsp+130h] [rbp+10h]
  __int64 v85; // [rsp+138h] [rbp+18h]
  unsigned int *v86; // [rsp+140h] [rbp+20h]
  __int64 v87; // [rsp+148h] [rbp+28h]
  unsigned int *v88; // [rsp+150h] [rbp+30h]
  __int64 v89; // [rsp+158h] [rbp+38h]
  unsigned int *v90; // [rsp+160h] [rbp+40h]
  __int64 v91; // [rsp+168h] [rbp+48h]
  __int64 v92; // [rsp+170h] [rbp+50h]
  __int64 v93; // [rsp+178h] [rbp+58h]
  char *v94; // [rsp+180h] [rbp+60h]
  __int64 v95; // [rsp+188h] [rbp+68h]
  unsigned int *v96; // [rsp+190h] [rbp+70h]
  __int64 v97; // [rsp+198h] [rbp+78h]
  int *v98; // [rsp+1A0h] [rbp+80h]
  __int64 v99; // [rsp+1A8h] [rbp+88h]
  unsigned int *v100; // [rsp+1B0h] [rbp+90h]
  __int64 v101; // [rsp+1B8h] [rbp+98h]
  __int64 v102; // [rsp+1C0h] [rbp+A0h]
  __int64 v103; // [rsp+1C8h] [rbp+A8h]
  __int64 v104; // [rsp+1D0h] [rbp+B0h]
  __int64 v105; // [rsp+1D8h] [rbp+B8h]
  __int64 v106; // [rsp+1E0h] [rbp+C0h]
  __int64 v107; // [rsp+1E8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+1F0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+200h] [rbp+E0h] BYREF
  __int64 v110; // [rsp+210h] [rbp+F0h]
  __int64 v111; // [rsp+218h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+220h] [rbp+100h] BYREF
  int *v113; // [rsp+230h] [rbp+110h]
  __int64 v114; // [rsp+238h] [rbp+118h]
  wchar_t String2[8]; // [rsp+240h] [rbp+120h] BYREF
  unsigned __int16 v116[128]; // [rsp+250h] [rbp+130h] BYREF
  unsigned __int16 v117[128]; // [rsp+350h] [rbp+230h] BYREF

  v3 = 0LL;
  v77 = this;
  v4 = this;
  LODWORD(v5) = 0;
  v76 = a3;
  v75 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  v67 = 0;
  v68 = 0;
  v65 = 0;
  v70 = 0;
  v71 = 0;
  v66 = 0;
  if ( !*(_BYTE *)a3 )
    goto LABEL_36;
  if ( *(_DWORD *)(v6 + 72) < 3u )
    goto LABEL_36;
  v7 = *(_DWORD *)(v6 + 28);
  if ( v7 <= *(_DWORD *)(v6 + 24) )
    goto LABEL_36;
  v8 = v7 - *(_DWORD *)(v6 + 24);
  v9 = (_DWORD *)(v6 + 32);
  v69 = v8;
  if ( *(_DWORD *)(v6 + 32) > (unsigned int)v8 )
  {
    *v9 = v8;
    LODWORD(v5) = v65;
  }
  v10 = 100 * *v9 / (unsigned int)v8;
  if ( !v10 )
    v10 = *v9 != 0;
  v11 = *((_QWORD *)a3 + 2);
  v12 = (float)(int)v11;
  *(_QWORD *)v79 = v11 * v8 / 0x2710uLL;
  if ( v11 < 0 )
    v12 = v12 + 1.8446744e19;
  v13 = 10000000.0 / v12;
  if ( (float)(10000000.0 / v12) >= 59.0 && v13 <= 61.0 )
    v13 = FLOAT_60_0;
  v14 = *((_QWORD *)v4 + 71);
  v15 = (int)v13;
  v73 = (unsigned int)(int)v13;
  v67 = (int)v13 * (100 - v10) / 0x64;
  v16 = *(_QWORD *)(v6 + 96);
  v17 = v16 / v14;
  v18 = 1000 * (unsigned int)(v16 / v14);
  v68 = v18 + 1000 * (v16 % v14) / v14;
  v19 = *(_QWORD *)(v6 + 152);
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 8) )
    {
      v20 = *(_QWORD *)(v6 + 104);
      if ( v20 > *(_QWORD *)(v19 + 8) )
      {
        v21 = v20 - *(_QWORD *)(v19 + 8);
        v17 = v21 / v14;
        v5 = (10000000 * (v21 % v14) / v14 + 10000000 * (v21 / v14)) / 0x2710;
        v65 = v5;
      }
    }
    if ( (_DWORD)v5 )
    {
      v22 = *(_DWORD *)(v6 + 72);
      if ( v22 > 1 )
      {
        v23 = *(_QWORD *)(v6 + 80);
        v17 = v23 / v14;
        v71 = (10000000 * (v23 % v14) / v14 + 10000000 * (v23 / v14)) / 0x2710 / (v22 - 1);
      }
    }
    v24 = *(_QWORD *)(v6 + 152);
    if ( *(_QWORD *)(v24 + 16) )
    {
      v52 = *(_QWORD *)(v6 + 104);
      if ( v52 > *(_QWORD *)(v24 + 16) )
      {
        v53 = v52 - *(_QWORD *)(v24 + 16);
        v17 = v53 / v14;
        v70 = (10000000 * (v53 % v14) / v14 + 10000000 * (v53 / v14)) / 0x2710;
      }
    }
    v25 = *(_QWORD *)(v6 + 152);
    v18 = *(unsigned int *)(v25 + 24);
    v66 = *(_DWORD *)(v25 + 24);
  }
  ScenarioName = CAnimationTracking::GetScenarioName(
                   (CAnimationTracking *)v18,
                   (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                   v116,
                   v17);
  ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                      v27,
                      (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v6,
                      v117,
                      v28);
  pwsz = ScenarioDetails;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
  {
    v54 = &unk_1801ADA80;
    if ( *(_QWORD *)(v6 + 136) )
      v54 = *(void **)(v6 + 136);
    v55 = *(_QWORD *)(v6 + 152);
    if ( v55 )
      v56 = *(_DWORD *)(v55 + 28);
    else
      LOBYTE(v56) = 0;
    Template_xxqqxxqzqqqqqqzzqq(
      v67,
      v15,
      *(_QWORD *)(v6 + 56),
      *((_QWORD *)v76 + 1),
      v10,
      v69,
      v15,
      v67,
      v68,
      (__int64)ScenarioName,
      *(_DWORD *)(v6 + 20),
      *(_DWORD *)(v6 + 36),
      v65,
      v70,
      v66,
      v56,
      (__int64)ScenarioDetails,
      (__int64)v54,
      *(_DWORD *)(v6 + 40),
      *v9);
  }
  wcscpy(String2, L"DManip");
  if ( ScenarioName )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( String2[v31] );
    if ( wcsncmp(ScenarioName, String2, v31) )
    {
      if ( dword_1801EA780 > 5u )
      {
        v30 = 4;
        if ( (qword_1801EA790 & 0x400000000004LL) != 0 && (qword_1801EA798 & 0x400000000004LL) == qword_1801EA798 )
        {
          TlgCreateWsz(&pDesc, ScenarioName);
          v83 = 4LL;
          v84 = &v71;
          v82 = &v67;
          v86 = &v68;
          v85 = 4LL;
          v88 = &v65;
          v57 = (const WCHAR *)&unk_1801ADA80;
          v87 = 4LL;
          v90 = &v70;
          v92 = v6 + 56;
          v89 = 4LL;
          v94 = (char *)v76 + 8;
          v96 = &v66;
          v98 = &v74;
          v100 = &v69;
          v104 = v6 + 36;
          v106 = v6 + 40;
          v58 = *(const WCHAR **)(v6 + 136);
          v91 = 4LL;
          v93 = 8LL;
          if ( v58 )
            v57 = v58;
          v95 = 8LL;
          v97 = 4LL;
          v74 = (int)v13;
          v99 = 4LL;
          v101 = 4LL;
          v102 = v6 + 32;
          v103 = 4LL;
          v105 = 4LL;
          v107 = 4LL;
          TlgCreateWsz(&v108, v57);
          v59 = (const WCHAR *)&unk_1801ADA80;
          if ( *(_QWORD *)(v6 + 144) )
            v59 = *(const WCHAR **)(v6 + 144);
          TlgCreateWsz(&v109, v59);
          v110 = v6 + 20;
          v111 = 4LL;
          TlgCreateWsz(&v112, pwsz);
          v62 = *(_QWORD *)(v6 + 152);
          if ( v62 )
            v72 = *(_DWORD *)(v62 + 28);
          else
            v72 = 0;
          v114 = 4LL;
          v113 = &v72;
          TlgWrite((TraceLoggingHProvider)&dword_1801EA780, &unk_1801C379C, v60, v61, 0x15u, &pData);
        }
      }
    }
  }
  v32 = v65;
  if ( *v9 || v65 >= 0xC8 )
  {
    if ( *(_DWORD *)v6 )
    {
      v34 = *(_QWORD *)(v6 + 152);
      if ( v34 )
      {
        if ( *(_WORD *)(v34 + 38) && v34 + *(unsigned __int16 *)(v34 + 38) )
        {
          if ( *(_WORD *)(v34 + 38) )
            v35 = v34 + *(unsigned __int16 *)(v34 + 38);
          else
            v35 = 0LL;
          LODWORD(cData) = *(_DWORD *)(v34 + 28);
          StringCchPrintfW((unsigned __int16 *)&pData, 0x80uLL, L"%ws|%X|%ws", ScenarioName, cData, v35);
          v32 = v65;
          ScenarioName = (const WCHAR *)&pData;
        }
      }
    }
    v36 = 4095;
    v37 = v69;
    v38 = 255;
    if ( *v9 )
    {
      v39 = 4095;
      v40 = 255;
      if ( v69 < 0xFFF )
        v39 = v69;
      if ( (unsigned int)v73 < 0xFF )
        v40 = v73;
      v41 = (v40 << 12) | v39;
      v42 = 255;
      if ( v67 < 0xFF )
        v42 = v67;
      v30 = (v42 << 20) | v41;
      if ( *(_DWORD *)v6 )
        v30 |= 0x80000000;
      v43 = &unk_1801ADA80;
      v44 = v66;
      v45 = -1;
      if ( v68 < 0xFFF )
        v45 = v68;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
        goto LABEL_57;
      v63 = &unk_1801ADA80;
      if ( *(_QWORD *)(v6 + 136) )
        v63 = *(void **)(v6 + 136);
      Template_xxqqqzzq(
        (_DWORD)v63,
        v30,
        *(_QWORD *)(v6 + 56),
        *((_QWORD *)v76 + 1),
        v10,
        v30,
        v45,
        (__int64)ScenarioName,
        (__int64)v63,
        *(_DWORD *)(v6 + 20));
      v32 = v65;
      v37 = v69;
    }
    else
    {
      v43 = &unk_1801ADA80;
    }
    v44 = v66;
LABEL_57:
    if ( v32 >= 0xC8 )
    {
      v46 = 4095;
      v47 = 255;
      if ( v37 < 0xFFF )
        v46 = v37;
      if ( (unsigned int)v73 < 0xFF )
        v47 = v73;
      v48 = (v47 << 12) | v46;
      if ( *(_DWORD *)v6 )
        v48 |= 0x80000000;
      v49 = 4095;
      if ( v70 < 0xFFF )
        v49 = v70;
      if ( *(_DWORD *)(v6 + 36) < 0xFFu )
        v38 = *(_DWORD *)(v6 + 36);
      v50 = (v38 << 12) | v49;
      if ( v44 < 0xFFF )
        v36 = v44;
      v51 = (v36 << 20) | v50;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      {
        if ( *(_QWORD *)(v6 + 136) )
          v43 = *(void **)(v6 + 136);
        Template_qqqzzq(v51, v30, v32, v48, v51, (__int64)ScenarioName, (__int64)v43, *(_DWORD *)(v6 + 20));
        v32 = v65;
      }
    }
    v15 = v73;
  }
  if ( *(_DWORD *)v6 )
    v33 = *(const unsigned __int16 **)(v6 + 136);
  else
    v33 = 0LL;
  if ( !*(_DWORD *)v6 )
    v3 = (const struct _GUID *)(v6 + 4);
  CAnimationTracking::UpdateLongtermStatistics(v77, v3, v33, v10, v15, v67, v32, v79[0], *(_DWORD *)(v6 + 36));
  v4 = v77;
LABEL_36:
  CAnimationTracking::DeleteScenario(v4, v75);
}
