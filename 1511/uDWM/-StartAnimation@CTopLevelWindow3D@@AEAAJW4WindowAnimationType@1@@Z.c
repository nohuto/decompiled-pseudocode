/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800359D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180035C44 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180035CD8 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035D7C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007E454 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180032EA0 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800348C0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180034928 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180035488 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035BAC (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180036034 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x180036150 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180038F64 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18003EAA0 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x18003F084 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     Template_qp @ 0x180074068 (Template_qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm12_4
  LPVOID v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  CWindowList *v8; // rcx
  struct MIL_CHANNEL__ *v9; // r8
  int TimelineForTransform; // eax
  unsigned int v11; // esi
  __int64 v12; // r9
  __int64 v13; // rax
  float v14; // xmm1_4
  DWORD v15; // r8d
  unsigned int v16; // ecx
  __m128i v17; // xmm0
  int v18; // ecx
  __m128i v19; // xmm0
  signed int v20; // eax
  unsigned __int32 v21; // xmm0_4
  __m128i v22; // xmm15
  signed int v23; // eax
  float v24; // xmm15_4
  __m128i v25; // xmm10
  __m128i v26; // xmm6
  __int64 v27; // rcx
  float v28; // xmm6_4
  signed int v29; // eax
  float v30; // xmm9_4
  __m128i v31; // xmm13
  int v32; // eax
  unsigned __int32 LowPart; // xmm10_4
  float v34; // xmm14_4
  float v35; // xmm13_4
  char v36; // al
  float v37; // xmm0_4
  __int64 v38; // rdx
  __int64 Theme; // rax
  __int64 v40; // rax
  unsigned int v41; // edx
  unsigned int v42; // r15d
  LPVOID (__fastcall *v43)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  float *v44; // rax
  float *v45; // r14
  __int64 v46; // rax
  int ThemeAnimationTransform; // eax
  float v48; // xmm8_4
  __int64 v49; // rax
  unsigned int v50; // r12d
  LPVOID (__fastcall *v51)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  LPVOID v52; // rax
  __int64 v53; // rax
  int ThemeTimingFunction; // eax
  __int64 v55; // rcx
  void *v56; // rdx
  void (__fastcall *v57)(WPF::ProcessHeapImpl *, void *); // rsi
  unsigned int v58; // ecx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  void (__fastcall *v65)(WPF::ProcessHeapImpl *, void *); // rsi
  __int64 v66; // rcx
  void *(__fastcall *v67)(WPF::ProcessHeapImpl *, size_t); // rsi
  void *v68; // rax
  _QWORD *v69; // rax
  int v71; // eax
  float v72; // xmm3_4
  float v73; // xmm2_4
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  float v78; // xmm3_4
  float v79; // xmm0_4
  float v80; // xmm1_4
  float v81; // xmm2_4
  bool v82; // cc
  float v83; // xmm3_4
  float v84; // xmm2_4
  int v85; // eax
  int v86; // eax
  unsigned int v87; // [rsp+20h] [rbp-E0h]
  unsigned int v88; // [rsp+40h] [rbp-C0h] BYREF
  float v89; // [rsp+44h] [rbp-BCh]
  unsigned int v90; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v91; // [rsp+4Ch] [rbp-B4h] BYREF
  float v92; // [rsp+50h] [rbp-B0h]
  unsigned int v93; // [rsp+54h] [rbp-ACh]
  unsigned int v94; // [rsp+58h] [rbp-A8h] BYREF
  float v95; // [rsp+5Ch] [rbp-A4h]
  float v96; // [rsp+60h] [rbp-A0h]
  __int128 v97; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID v99; // [rsp+88h] [rbp-78h] BYREF
  int v100; // [rsp+98h] [rbp-68h] BYREF
  struct _GUID v101; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v102; // [rsp+ACh] [rbp-54h]

  v90 = 0;
  v4 = 0.0;
  v5 = 0LL;
  v97 = 0LL;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_69;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v6, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v6, a2, &v99);
  v7 = *(_QWORD *)&v99.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v99.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)v99.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v8, &v99, PerformanceCount.QuadPart) >= 0 )
    {
      v100 = 14;
      v9 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
      v101 = v99;
      v102 = a1 | 0xD100000000000000uLL;
      MilResource_SendCommand(&v100, 0x1Cu, v9);
    }
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 312) + 571LL) &= ~0x10u;
  *(_DWORD *)(a1 + 352) = a2;
  *(_QWORD *)(a1 + 276) = 0LL;
  *(_QWORD *)(a1 + 284) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v11 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v87 = 949;
    goto LABEL_142;
  }
  v12 = *(_QWORD *)(a1 + 312);
  v13 = *(_QWORD *)(a1 + 320);
  v14 = FLOAT_0_5;
  v15 = *(_DWORD *)(v13 + 88);
  v16 = v15 + *(_DWORD *)(a1 + 292);
  PerformanceCount.HighPart = *(_DWORD *)(v13 + 96);
  LODWORD(v13) = *(_DWORD *)(a1 + 296);
  v17 = _mm_cvtsi32_si128(v16);
  v18 = *(_DWORD *)(v12 + 48);
  PerformanceCount.LowPart = v15;
  LODWORD(v95) = _mm_cvtepi32_ps(v17).m128_u32[0];
  v19 = _mm_cvtsi32_si128(PerformanceCount.HighPart + (int)v13);
  v20 = *(_DWORD *)(a1 + 300) - *(_DWORD *)(a1 + 292);
  v21 = _mm_cvtepi32_ps(v19).m128_u32[0];
  if ( v20 < 0 )
    v20 = 0;
  v22 = _mm_cvtsi32_si128(v20);
  v23 = *(_DWORD *)(a1 + 304) - *(_DWORD *)(a1 + 296);
  v96 = *(float *)&v21;
  if ( v23 < 0 )
    v23 = 0;
  LODWORD(v24) = _mm_cvtepi32_ps(v22).m128_u32[0];
  v25 = _mm_cvtsi32_si128(v23);
  v26 = _mm_cvtsi32_si128(v15 + v18);
  v27 = *(unsigned int *)(a1 + 352);
  LODWORD(v28) = _mm_cvtepi32_ps(v26).m128_u32[0];
  v29 = *(_DWORD *)(v12 + 56) - *(_DWORD *)(v12 + 48);
  v30 = (float)(PerformanceCount.HighPart + *(_DWORD *)(v12 + 52));
  if ( v29 < 0 )
    v29 = 0;
  v92 = v28;
  v31 = _mm_cvtsi32_si128(v29);
  v32 = *(_DWORD *)(v12 + 60) - *(_DWORD *)(v12 + 52);
  LowPart = _mm_cvtepi32_ps(v25).m128_u32[0];
  if ( v32 < 0 )
    v32 = 0;
  *(_QWORD *)&v97 = __PAIR64__(LODWORD(v30), LODWORD(v28));
  PerformanceCount.LowPart = LowPart;
  v89 = v30;
  v34 = (float)v32;
  LODWORD(v35) = _mm_cvtepi32_ps(v31).m128_u32[0];
  *((float *)&v97 + 3) = (float)v32;
  *((float *)&v97 + 2) = v35;
  if ( (((_DWORD)v27 - 2) & 0xFFFFFFFD) != 0 )
  {
    v36 = 0;
    v37 = 0.0;
  }
  else
  {
    v36 = 1;
    v37 = FLOAT_0_5;
  }
  *(float *)(a1 + 452) = v37;
  if ( !v36 )
    v14 = 0.0;
  *(float *)(a1 + 456) = v14;
  *(_DWORD *)(a1 + 460) = 0;
  if ( (((_DWORD)v27 - 3) & 0xFFFFFFFD) == 0 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v12 + 40), a1 + 276);
    if ( !IsRectEmpty((const RECT *)(a1 + 276)) )
    {
      CTopLevelWindow3D::GetFinalMinRect(
        (struct tagRECT *)(a1 + 276),
        *(float *)&LowPart / v24,
        (struct MilPointAndSizeF *)&v97);
      v30 = *((float *)&v97 + 1);
      LODWORD(v28) = v97;
      v34 = *((float *)&v97 + 3);
      v35 = *((float *)&v97 + 2);
      v89 = *((float *)&v97 + 1);
      v92 = *(float *)&v97;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(a1 + 352) == 3 )
    {
      *(_DWORD *)(a1 + 352) = 6;
      goto LABEL_23;
    }
LABEL_69:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v11 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      return v11;
    v87 = 1229;
LABEL_142:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, TimelineForTransform, v87);
    return v11;
  }
LABEL_23:
  v38 = *(unsigned int *)(a1 + 352);
  if ( (unsigned int)(v38 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 396);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v11 = TimelineForTransform;
    if ( TimelineForTransform < 0 )
    {
      v87 = 1005;
      goto LABEL_142;
    }
    goto LABEL_60;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v27, v38, &v91, &v94);
  v11 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v87 = 1010;
    goto LABEL_142;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v91, v94, 1LL, &v90, 4, &v88);
  v11 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v87 = 1017;
    goto LABEL_142;
  }
  v93 = 0;
  if ( !v90 )
  {
LABEL_60:
    v66 = *(_QWORD *)(a1 + 344);
    if ( v66 )
    {
      *(_QWORD *)(v66 + 48) = *(_QWORD *)(v66 + 32);
      *(_WORD *)(v66 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v66 + 24) = v4;
    }
    else
    {
      v67 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v67 == WPF::ProcessHeapImpl::AllocClear )
        v68 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
      else
        v68 = v67(WPF::g_pProcessHeap, 80LL);
      if ( v68 )
        v69 = CTimeline<float>::CTimeline<float>((__int64)v68, v4, 0.0, 1.0, 0);
      else
        v69 = 0LL;
      *(_QWORD *)(a1 + 344) = v69;
      if ( !v69 )
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4C1u);
        return v11;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 4096);
    goto LABEL_69;
  }
  while ( 1 )
  {
    v40 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v40, v91, v94, v41, 0LL, 0, &v88) != -2147024662 )
      goto LABEL_59;
    v42 = v88;
    v43 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v44 = v43 == WPF::ProcessHeapImpl::Alloc
        ? (float *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v88)
        : (float *)v43(WPF::g_pProcessHeap, v88);
    v45 = v44;
    v46 = CDesktopManager::GetTheme(3LL);
    ThemeAnimationTransform = GetThemeAnimationTransform(v46, v91, v94, v93, v45, v42, &v88);
    v11 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v45 - 1) <= 1 )
    {
      v48 = (float)*((int *)v45 + 3) / 1000.0;
      v49 = CDesktopManager::GetTheme(4LL);
      if ( (unsigned int)GetThemeTimingFunction(v49, *((unsigned int *)v45 + 1), 0LL, 0LL, &v88) == -2147024662 )
      {
        v50 = v88;
        v51 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v51 == WPF::ProcessHeapImpl::Alloc )
          v52 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v88);
        else
          v52 = v51(WPF::g_pProcessHeap, v88);
        v5 = v52;
        v53 = CDesktopManager::GetTheme(4LL);
        ThemeTimingFunction = GetThemeTimingFunction(v53, *((unsigned int *)v45 + 1), v5, v50, &v88);
        v11 = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeTimingFunction, 0x422u);
          goto LABEL_133;
        }
        CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v55, v5);
        v57 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v57 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v56);
        else
          v57(WPF::g_pProcessHeap, v5);
        v5 = 0LL;
      }
      if ( *(_DWORD *)v45 == 1 )
      {
        v58 = *((_DWORD *)v45 + 4);
        if ( (v58 & 1) != 0 )
        {
          v71 = *(_DWORD *)(a1 + 352);
          if ( v71 != 3 && v71 != 5 )
          {
            v11 = -2147024809;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x44Fu);
            goto LABEL_133;
          }
          v72 = v45[7];
          v73 = v45[8];
          v92 = (float)((float)(1.0 - v72) * v28) + (float)(v72 * v95);
          v89 = (float)((float)(1.0 - v73) * v30) + (float)(v73 * v96);
          v35 = (float)((float)(1.0 - v72) * v35) + (float)(v72 * v24);
          v34 = (float)((float)(1.0 - v73) * v34) + (float)(v73 * *(float *)&LowPart);
          v74 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
          v11 = v74;
          if ( v74 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v74, 0x443u);
            goto LABEL_133;
          }
          v75 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
          v11 = v75;
          if ( v75 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v75, 0x444u);
            goto LABEL_133;
          }
          v76 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
          v11 = v76;
          if ( v76 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v76, 0x449u);
            goto LABEL_133;
          }
          v77 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
          v11 = v77;
          if ( v77 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v77, 0x44Au);
            goto LABEL_133;
          }
        }
        else
        {
          if ( v35 > 0.0 && v34 > 0.0 )
          {
            v59 = *(_DWORD *)(a1 + 352);
            if ( v59 == 2 )
            {
              v83 = v45[7];
              v79 = v24 / v35;
              if ( v83 > (float)(v24 / v35) )
                v79 = v45[7];
              v80 = v45[8];
              if ( v80 <= (float)(*(float *)&LowPart / v34) )
                v80 = *(float *)&LowPart / v34;
              if ( v80 > v79 )
                v84 = v79;
              else
                v84 = v80;
              v48 = (float)((float)(v84 - v45[5]) * v48) / (float)(v83 - v45[5]);
              if ( v48 < 0.0 )
                v48 = 0.0;
              v82 = v79 <= v80;
            }
            else
            {
              if ( v59 != 4 )
                goto LABEL_45;
              v78 = v45[7];
              v79 = v24 / v35;
              if ( (float)(v24 / v35) > v78 )
                v79 = v45[7];
              v80 = v45[8];
              if ( (float)(*(float *)&LowPart / v34) <= v80 )
                v80 = *(float *)&LowPart / v34;
              if ( v80 > v79 )
                v81 = v79;
              else
                v81 = v80;
              v48 = (float)((float)(v81 - v45[5]) * v48) / (float)(v78 - v45[5]);
              if ( v48 < 0.0 )
                v48 = 0.0;
              v82 = v80 <= v79;
            }
            if ( v82 )
              v79 = v80;
            v45[7] = v79;
            v45[8] = v79;
          }
LABEL_45:
          if ( (v58 & 4) != 0 )
          {
            v60 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
            v11 = v60;
            if ( v60 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v60, 0x48Au);
              goto LABEL_133;
            }
            v61 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
            v11 = v61;
            if ( v61 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v61, 0x48Bu);
              goto LABEL_133;
            }
            LowPart = PerformanceCount.LowPart;
          }
          v62 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
          v11 = v62;
          if ( v62 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v62, 0x48Eu);
            goto LABEL_133;
          }
          v63 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
          v11 = v63;
          if ( v63 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v63, 0x48Fu);
            goto LABEL_133;
          }
        }
      }
      else if ( *(_DWORD *)v45 == 2 )
      {
        if ( ((_BYTE)v45[4] & 1) != 0 )
        {
          v85 = *(_DWORD *)(a1 + 352);
          if ( v85 != 3 && v85 != 5 )
          {
            v11 = -2147024809;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x4A2u);
            goto LABEL_133;
          }
          v86 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
          v11 = v86;
          if ( v86 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v86, 0x49Du);
            goto LABEL_133;
          }
        }
        else
        {
          v64 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
          v11 = v64;
          if ( v64 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v64, 0x4A9u);
            goto LABEL_133;
          }
        }
      }
      if ( v48 > v4 )
        v4 = v48;
    }
    v65 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v65 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v45);
    else
      v65(WPF::g_pProcessHeap, v45);
LABEL_59:
    if ( ++v93 >= v90 )
      goto LABEL_60;
    v28 = v92;
    v30 = v89;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeAnimationTransform, 0x40Fu);
LABEL_133:
  if ( v45 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v45);
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  return v11;
}
