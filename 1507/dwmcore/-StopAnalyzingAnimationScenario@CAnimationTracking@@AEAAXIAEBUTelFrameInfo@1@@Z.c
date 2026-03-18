/*
 * XREFs of ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118
 * Callers:
 *     ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180064C94 (-TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z.c)
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180064D0C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800655A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180061814 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1800639D8 (_TlgCreateWsz.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180063AEC (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180064798 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180064B44 (-GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     ?GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x180064BAC (-GetScenarioName@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     Template_qqqzzq @ 0x1800E6A6C (Template_qqqzzq.c)
 *     Template_xxqqqzzq @ 0x1800E6B84 (Template_xxqqqzzq.c)
 *     Template_xxqqxxqzqqqqqqzzqq @ 0x1800E6CBC (Template_xxqqxxqzqqqqqqzzqq.c)
 */

void __fastcall CAnimationTracking::StopAnalyzingAnimationScenario(
        CAnimationTracking *this,
        unsigned int a2,
        const struct CAnimationTracking::TelFrameInfo *a3)
{
  const struct _GUID *v3; // rbx
  CAnimationTracking *v4; // r9
  __int64 v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rcx
  _DWORD *v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // r8
  float v11; // xmm0_4
  float v12; // xmm1_4
  unsigned __int64 v13; // r10
  int v14; // r14d
  unsigned __int64 v15; // rtt
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rtt
  __int64 v21; // rax
  __int64 v22; // rax
  const WCHAR *ScenarioName; // r13
  CAnimationTracking *v24; // rcx
  unsigned int v25; // r9d
  const WCHAR *ScenarioDetails; // rax
  int v27; // edx
  size_t v28; // r8
  const WCHAR *v29; // rdx
  const WCHAR *v30; // rax
  const WCHAR *v31; // rdx
  const GUID *v32; // r8
  const GUID *v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned __int16 *v36; // rcx
  int v37; // esi
  unsigned int v38; // ecx
  int v39; // r14d
  int v40; // edx
  int v41; // eax
  int v42; // edx
  unsigned int v43; // eax
  void *v44; // r12
  unsigned int v45; // r10d
  char v46; // r11
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r9d
  int v50; // eax
  int v51; // r9d
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rtt
  void *v57; // r8
  __int64 v58; // rcx
  int v59; // r9d
  void *v60; // rcx
  __int64 cData; // [rsp+20h] [rbp-100h]
  unsigned int v62; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v63; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v64; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v65; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v66; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v67; // [rsp+B4h] [rbp-6Ch] BYREF
  int v68; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-60h]
  unsigned int v70; // [rsp+C8h] [rbp-58h]
  const struct CAnimationTracking::TelFrameInfo *v71; // [rsp+D0h] [rbp-50h]
  int v72; // [rsp+D8h] [rbp-48h] BYREF
  CAnimationTracking *v73; // [rsp+E0h] [rbp-40h]
  LPCWSTR pwsz; // [rsp+E8h] [rbp-38h]
  unsigned int v75[4]; // [rsp+F0h] [rbp-30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+0h] BYREF
  unsigned int *v78; // [rsp+130h] [rbp+10h]
  __int64 v79; // [rsp+138h] [rbp+18h]
  unsigned int *v80; // [rsp+140h] [rbp+20h]
  __int64 v81; // [rsp+148h] [rbp+28h]
  unsigned int *v82; // [rsp+150h] [rbp+30h]
  __int64 v83; // [rsp+158h] [rbp+38h]
  unsigned int *v84; // [rsp+160h] [rbp+40h]
  __int64 v85; // [rsp+168h] [rbp+48h]
  __int64 v86; // [rsp+170h] [rbp+50h]
  __int64 v87; // [rsp+178h] [rbp+58h]
  char *v88; // [rsp+180h] [rbp+60h]
  __int64 v89; // [rsp+188h] [rbp+68h]
  unsigned int *v90; // [rsp+190h] [rbp+70h]
  __int64 v91; // [rsp+198h] [rbp+78h]
  int *v92; // [rsp+1A0h] [rbp+80h]
  __int64 v93; // [rsp+1A8h] [rbp+88h]
  unsigned int *v94; // [rsp+1B0h] [rbp+90h]
  __int64 v95; // [rsp+1B8h] [rbp+98h]
  __int64 v96; // [rsp+1C0h] [rbp+A0h]
  __int64 v97; // [rsp+1C8h] [rbp+A8h]
  __int64 v98; // [rsp+1D0h] [rbp+B0h]
  __int64 v99; // [rsp+1D8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+1E0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+1F0h] [rbp+D0h] BYREF
  __int64 v102; // [rsp+200h] [rbp+E0h]
  __int64 v103; // [rsp+208h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+210h] [rbp+F0h] BYREF
  int *v105; // [rsp+220h] [rbp+100h]
  __int64 v106; // [rsp+228h] [rbp+108h]
  wchar_t String2[8]; // [rsp+230h] [rbp+110h] BYREF
  unsigned __int16 v108[128]; // [rsp+240h] [rbp+120h] BYREF
  unsigned __int16 v109[128]; // [rsp+340h] [rbp+220h] BYREF

  v3 = 0LL;
  v73 = this;
  v4 = this;
  v71 = a3;
  v70 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
  v64 = 0;
  v65 = 0;
  v62 = 0;
  v66 = 0;
  v63 = 0;
  if ( !*(_BYTE *)a3 )
    goto LABEL_41;
  if ( *(_DWORD *)(v5 + 72) < 3u )
    goto LABEL_41;
  v6 = *(_DWORD *)(v5 + 28);
  if ( v6 <= *(_DWORD *)(v5 + 24) )
    goto LABEL_41;
  v7 = v6 - *(_DWORD *)(v5 + 24);
  v8 = (_DWORD *)(v5 + 32);
  v67 = v7;
  if ( *(_DWORD *)(v5 + 32) > (unsigned int)v7 )
    *v8 = v7;
  v9 = 100 * *v8 / (unsigned int)v7;
  if ( !v9 )
    v9 = *v8 != 0;
  v10 = *((_QWORD *)a3 + 2);
  v11 = (float)(int)v10;
  *(_QWORD *)v75 = v10 * v7 / 0x2710uLL;
  if ( v10 < 0 )
    v11 = v11 + 1.8446744e19;
  v12 = 10000000.0 / v11;
  if ( (float)(10000000.0 / v11) >= 59.0 && v12 <= 61.0 )
    v12 = FLOAT_60_0;
  v13 = *((_QWORD *)v4 + 71);
  v14 = (int)v12;
  v69 = (unsigned int)(int)v12;
  v64 = (int)v12 * (100 - v9) / 0x64;
  v15 = *(_QWORD *)(v5 + 88);
  v16 = v15 / v13;
  v17 = 1000 * (unsigned int)(v15 / v13);
  v65 = v17 + 1000 * (v15 % v13) / v13;
  v18 = *(_QWORD *)(v5 + 144);
  if ( v18 )
  {
    if ( *(_QWORD *)(v18 + 8) )
    {
      v19 = *(_QWORD *)(v5 + 96);
      if ( v19 > *(_QWORD *)(v18 + 8) )
      {
        v20 = v19 - *(_QWORD *)(v18 + 8);
        v16 = v20 / v13;
        v62 = (10000000 * (v20 % v13) / v13 + 10000000 * (v20 / v13)) / 0x2710;
      }
    }
    v21 = *(_QWORD *)(v5 + 144);
    if ( *(_QWORD *)(v21 + 16) )
    {
      v55 = *(_QWORD *)(v5 + 96);
      if ( v55 > *(_QWORD *)(v21 + 16) )
      {
        v56 = v55 - *(_QWORD *)(v21 + 16);
        v16 = v56 / v13;
        v66 = (10000000 * (v56 % v13) / v13 + 10000000 * (v56 / v13)) / 0x2710;
      }
    }
    v22 = *(_QWORD *)(v5 + 144);
    v17 = *(unsigned int *)(v22 + 24);
    v63 = *(_DWORD *)(v22 + 24);
  }
  ScenarioName = CAnimationTracking::GetScenarioName(
                   (CAnimationTracking *)v17,
                   (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v5,
                   v108,
                   v16);
  ScenarioDetails = CAnimationTracking::GetScenarioDetails(
                      v24,
                      (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v5,
                      v109,
                      v25);
  pwsz = ScenarioDetails;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
  {
    v57 = &unk_180167798;
    if ( *(_QWORD *)(v5 + 128) )
      v57 = *(void **)(v5 + 128);
    v58 = *(_QWORD *)(v5 + 144);
    if ( v58 )
      v59 = *(_DWORD *)(v58 + 28);
    else
      LOBYTE(v59) = 0;
    Template_xxqqxxqzqqqqqqzzqq(
      v64,
      v14,
      *(_QWORD *)(v5 + 56),
      *((_QWORD *)v71 + 1),
      v9,
      v67,
      v14,
      v64,
      v65,
      (__int64)ScenarioName,
      *(_DWORD *)(v5 + 20),
      *(_DWORD *)(v5 + 36),
      v62,
      v66,
      v63,
      v59,
      (__int64)ScenarioDetails,
      (__int64)v57,
      *(_DWORD *)(v5 + 40),
      *v8);
  }
  wcscpy(String2, L"DManip");
  if ( ScenarioName )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( String2[v28] );
    if ( wcsncmp(ScenarioName, String2, v28) )
    {
      if ( hProvider > 5u )
      {
        v27 = 4;
        if ( (qword_180190A80 & 0x400000000004LL) != 0 && (qword_180190A88 & 0x400000000004LL) == qword_180190A88 )
        {
          TlgCreateWsz(&pDesc, ScenarioName);
          v79 = 4LL;
          v80 = &v65;
          v78 = &v64;
          v82 = &v62;
          v81 = 4LL;
          v84 = &v66;
          v29 = (const WCHAR *)&unk_180167798;
          v83 = 4LL;
          v86 = v5 + 56;
          v85 = 4LL;
          v88 = (char *)v71 + 8;
          v90 = &v63;
          v92 = &v72;
          v94 = &v67;
          v98 = v5 + 36;
          v30 = *(const WCHAR **)(v5 + 128);
          v87 = 8LL;
          v89 = 8LL;
          if ( v30 )
            v29 = v30;
          v91 = 4LL;
          v72 = (int)v12;
          v93 = 4LL;
          v95 = 4LL;
          v96 = v5 + 32;
          v97 = 4LL;
          v99 = 4LL;
          TlgCreateWsz(&v100, v29);
          v31 = (const WCHAR *)&unk_180167798;
          if ( *(_QWORD *)(v5 + 136) )
            v31 = *(const WCHAR **)(v5 + 136);
          TlgCreateWsz(&v101, v31);
          v102 = v5 + 20;
          v103 = 4LL;
          TlgCreateWsz(&v104, pwsz);
          v34 = *(_QWORD *)(v5 + 144);
          if ( v34 )
            v68 = *(_DWORD *)(v34 + 28);
          else
            v68 = 0;
          v106 = 4LL;
          v105 = &v68;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016E137, v32, v33, 0x13u, &pData);
        }
      }
    }
  }
  v35 = v62;
  if ( *v8 || v62 >= 0xC8 )
  {
    if ( *(_DWORD *)v5 )
    {
      v47 = *(_QWORD *)(v5 + 144);
      if ( v47 )
      {
        if ( *(_WORD *)(v47 + 38) && v47 + *(unsigned __int16 *)(v47 + 38) )
        {
          if ( *(_WORD *)(v47 + 38) )
            v48 = v47 + *(unsigned __int16 *)(v47 + 38);
          else
            v48 = 0LL;
          LODWORD(cData) = *(_DWORD *)(v47 + 28);
          StringCchPrintfW((wchar_t *)&pData, 128LL, L"%ws|%X|%ws", ScenarioName, cData, v48);
          v35 = v62;
          ScenarioName = (const WCHAR *)&pData;
        }
      }
    }
    v37 = 4095;
    v38 = v67;
    v39 = 255;
    if ( *v8 )
    {
      v40 = 4095;
      v41 = 255;
      if ( v67 < 0xFFF )
        v40 = v67;
      if ( (unsigned int)v69 < 0xFF )
        v41 = v69;
      v42 = (v41 << 12) | v40;
      v43 = 255;
      if ( v64 < 0xFF )
        v43 = v64;
      v27 = (v43 << 20) | v42;
      if ( *(_DWORD *)v5 )
        v27 |= 0x80000000;
      v44 = &unk_180167798;
      v45 = v63;
      v46 = -1;
      if ( v65 < 0xFFF )
        v46 = v65;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
        goto LABEL_57;
      v60 = &unk_180167798;
      if ( *(_QWORD *)(v5 + 128) )
        v60 = *(void **)(v5 + 128);
      Template_xxqqqzzq(
        (_DWORD)v60,
        v27,
        *(_QWORD *)(v5 + 56),
        *((_QWORD *)v71 + 1),
        v9,
        v27,
        v46,
        (__int64)ScenarioName,
        (__int64)v60,
        *(_DWORD *)(v5 + 20));
      v35 = v62;
      v38 = v67;
    }
    else
    {
      v44 = &unk_180167798;
    }
    v45 = v63;
LABEL_57:
    if ( v35 >= 0xC8 )
    {
      v49 = 4095;
      v50 = 255;
      if ( v38 < 0xFFF )
        v49 = v38;
      if ( (unsigned int)v69 < 0xFF )
        v50 = v69;
      v51 = (v50 << 12) | v49;
      if ( *(_DWORD *)v5 )
        v51 |= 0x80000000;
      v52 = 4095;
      if ( v66 < 0xFFF )
        v52 = v66;
      if ( *(_DWORD *)(v5 + 36) < 0xFFu )
        v39 = *(_DWORD *)(v5 + 36);
      v53 = (v39 << 12) | v52;
      if ( v45 < 0xFFF )
        v37 = v45;
      v54 = (v37 << 20) | v53;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      {
        if ( *(_QWORD *)(v5 + 128) )
          v44 = *(void **)(v5 + 128);
        Template_qqqzzq(v54, v27, v35, v51, v54, (__int64)ScenarioName, (__int64)v44, *(_DWORD *)(v5 + 20));
        v35 = v62;
      }
    }
    v14 = v69;
  }
  if ( *(_DWORD *)v5 )
    v36 = *(unsigned __int16 **)(v5 + 128);
  else
    v36 = 0LL;
  if ( !*(_DWORD *)v5 )
    v3 = (const struct _GUID *)(v5 + 4);
  CAnimationTracking::UpdateLongtermStatistics(v73, v3, v36, v9, v14, v64, v35, v75[0], *(_DWORD *)(v5 + 36));
  v4 = v73;
LABEL_41:
  CAnimationTracking::DeleteScenario(v4, v70);
}
