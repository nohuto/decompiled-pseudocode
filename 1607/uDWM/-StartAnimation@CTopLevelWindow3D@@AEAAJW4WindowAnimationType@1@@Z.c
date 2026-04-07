/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029B30 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18002A324 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002A3B8 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002A460 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007F008 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180029038 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x1800290A0 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180029AD8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002A28C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18002A730 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18002A868 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180032C58 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004100C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180041880 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x1800419F4 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm12_4
  void *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rax
  CWindowList *v8; // rcx
  int TimelineForTransform; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rax
  DWORD v13; // edx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  signed int v16; // eax
  unsigned __int32 v17; // xmm0_4
  __m128i v18; // xmm15
  int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm15_4
  float v22; // xmm10_4
  __m128i v23; // xmm6
  unsigned int v24; // eax
  __int64 v25; // rcx
  float v26; // xmm6_4
  __m128i v27; // xmm9
  signed int v28; // eax
  float v29; // xmm9_4
  __m128i v30; // xmm13
  int v31; // eax
  float v32; // xmm13_4
  float v33; // xmm14_4
  char v34; // al
  float v35; // xmm1_4
  __int64 v36; // rdx
  __int64 Theme; // rax
  unsigned int v38; // r14d
  __int64 v39; // rax
  unsigned int v40; // ebx
  void *(__fastcall *v41)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  float *v42; // rax
  float *v43; // rsi
  __int64 v44; // rax
  int ThemeAnimationTransform; // eax
  float v46; // xmm8_4
  __int64 v47; // rax
  unsigned int v48; // ebx
  void *(__fastcall *v49)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v50; // rax
  __int64 v51; // rax
  int ThemeTimingFunction; // eax
  __int64 v53; // rcx
  void *v54; // rdx
  void (__fastcall *v55)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  void (__fastcall *v63)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v64; // rcx
  void *(*v65)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v66; // rax
  _QWORD *v67; // rax
  int v69; // eax
  float v70; // xmm3_4
  float v71; // xmm2_4
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  float v76; // xmm2_4
  float v77; // xmm3_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm3_4
  float v81; // xmm0_4
  float v82; // xmm2_4
  int v83; // eax
  int v84; // eax
  unsigned int v85; // [rsp+28h] [rbp-E0h]
  unsigned int v86; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v87; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v88; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v89; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v90; // [rsp+58h] [rbp-B0h]
  float v91; // [rsp+60h] [rbp-A8h]
  float v92; // [rsp+64h] [rbp-A4h]
  __int64 v93; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v94; // [rsp+70h] [rbp-98h] BYREF
  __int64 v95; // [rsp+78h] [rbp-90h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID v97; // [rsp+90h] [rbp-78h] BYREF

  v94 = 0LL;
  v89 = 0;
  v95 = 0LL;
  v4 = 0.0;
  v5 = 0LL;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_68;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v6, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v6, a2, &v97);
  v7 = *(_QWORD *)&v97.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v97.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v7 = *(_QWORD *)v97.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v7 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v8, &v97, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 4)
                                                                       + 216LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
        &v97,
        a1 | 0xD100000000000000uLL);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 312) + 579LL) &= ~0x10u;
  *(_DWORD *)(a1 + 352) = a2;
  *(_QWORD *)(a1 + 276) = 0LL;
  *(_QWORD *)(a1 + 284) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v85 = 962;
    goto LABEL_122;
  }
  v11 = *(_QWORD *)(a1 + 312);
  v12 = *(_QWORD *)(a1 + 320);
  v13 = *(_DWORD *)(v12 + 88);
  PerformanceCount.HighPart = *(_DWORD *)(v12 + 96);
  LODWORD(v12) = v13 + *(_DWORD *)(a1 + 292);
  PerformanceCount.LowPart = v13;
  v14 = _mm_cvtsi32_si128(v12);
  LODWORD(v12) = PerformanceCount.HighPart + *(_DWORD *)(a1 + 296);
  LODWORD(v91) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v15 = _mm_cvtsi32_si128(v12);
  v16 = *(_DWORD *)(a1 + 300) - *(_DWORD *)(a1 + 292);
  v17 = _mm_cvtepi32_ps(v15).m128_u32[0];
  if ( v16 < 0 )
    v16 = 0;
  v18 = _mm_cvtsi32_si128(v16);
  v19 = *(_DWORD *)(a1 + 304) - *(_DWORD *)(a1 + 296);
  v92 = *(float *)&v17;
  v20 = FLOAT_0_5;
  if ( v19 < 0 )
    v19 = 0;
  LODWORD(v21) = _mm_cvtepi32_ps(v18).m128_u32[0];
  v22 = (float)v19;
  v23 = _mm_cvtsi32_si128(v13 + *(_DWORD *)(v11 + 48));
  v24 = PerformanceCount.HighPart + *(_DWORD *)(v11 + 52);
  *(float *)&PerformanceCount.LowPart = v22;
  v25 = *(unsigned int *)(a1 + 352);
  LODWORD(v26) = _mm_cvtepi32_ps(v23).m128_u32[0];
  v27 = _mm_cvtsi32_si128(v24);
  v28 = *(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 48);
  LODWORD(v29) = _mm_cvtepi32_ps(v27).m128_u32[0];
  if ( v28 < 0 )
    v28 = 0;
  *(float *)&v90 = v26;
  v30 = _mm_cvtsi32_si128(v28);
  v31 = *(_DWORD *)(v11 + 60) - *(_DWORD *)(v11 + 52);
  LODWORD(v32) = _mm_cvtepi32_ps(v30).m128_u32[0];
  if ( v31 < 0 )
    v31 = 0;
  v94 = __PAIR64__(LODWORD(v29), LODWORD(v26));
  *((float *)&v90 + 1) = v29;
  *(float *)&v95 = v32;
  v33 = (float)v31;
  *((float *)&v95 + 1) = (float)v31;
  if ( (((_DWORD)v25 - 2) & 0xFFFFFFFD) != 0 )
  {
    v34 = 0;
    v35 = 0.0;
  }
  else
  {
    v34 = 1;
    v35 = FLOAT_0_5;
  }
  *(float *)(a1 + 452) = v35;
  if ( !v34 )
    v20 = 0.0;
  *(float *)(a1 + 456) = v20;
  *(_DWORD *)(a1 + 460) = 0;
  if ( (((_DWORD)v25 - 3) & 0xFFFFFFFD) == 0 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v11 + 40), a1 + 276);
    if ( !IsRectEmpty((const RECT *)(a1 + 276)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 276), v22 / v21, (struct MilPointAndSizeF *)&v94);
      v29 = *((float *)&v94 + 1);
      LODWORD(v26) = v94;
      v33 = *((float *)&v95 + 1);
      v32 = *(float *)&v95;
      v90 = v94;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(a1 + 352) == 3 )
    {
      *(_DWORD *)(a1 + 352) = 6;
      goto LABEL_23;
    }
LABEL_68:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      return v10;
    v85 = 1242;
LABEL_122:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TimelineForTransform, v85);
    return v10;
  }
LABEL_23:
  v36 = *(unsigned int *)(a1 + 352);
  if ( (unsigned int)(v36 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 392);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v10 = TimelineForTransform;
    if ( TimelineForTransform < 0 )
    {
      v85 = 1018;
      goto LABEL_122;
    }
    goto LABEL_59;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v25, v36, &v88, &v87);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v85 = 1023;
    goto LABEL_122;
  }
  Theme = CDesktopManager::GetTheme(3);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v88, v87, 1LL, &v89, 4, &v86);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v85 = 1030;
    goto LABEL_122;
  }
  v38 = 0;
  LODWORD(v93) = 0;
  if ( !v89 )
  {
LABEL_59:
    v64 = *(_QWORD *)(a1 + 344);
    if ( v64 )
    {
      *(_QWORD *)(v64 + 48) = *(_QWORD *)(v64 + 32);
      *(_WORD *)(v64 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v64 + 24) = v4;
    }
    else
    {
      v65 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v65 == WPF::ProcessHeapImpl::AllocClear )
        v66 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
      else
        v66 = (void *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v65)(WPF::g_pProcessHeap, 80LL);
      if ( v66 )
        v67 = CTimeline<float>::CTimeline<float>((__int64)v66, v4, 0.0, 1.0, 0);
      else
        v67 = 0LL;
      *(_QWORD *)(a1 + 344) = v67;
      if ( !v67 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4CEu);
        return v10;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 4096);
    goto LABEL_68;
  }
  while ( 1 )
  {
    v39 = CDesktopManager::GetTheme(3);
    if ( (unsigned int)GetThemeAnimationTransform(v39, v88, v87, v38, 0LL, 0, &v86) != -2147024662 )
      goto LABEL_58;
    v40 = v86;
    v41 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v42 = v41 == WPF::ProcessHeapImpl::Alloc
        ? (float *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v86)
        : (float *)v41(WPF::g_pProcessHeap, v86);
    v43 = v42;
    v44 = CDesktopManager::GetTheme(3);
    ThemeAnimationTransform = GetThemeAnimationTransform(v44, v88, v87, v38, v43, v40, &v86);
    v10 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v43 - 1) > 1 )
      goto LABEL_56;
    v46 = (float)*((int *)v43 + 3) / 1000.0;
    v47 = CDesktopManager::GetTheme(4);
    if ( (unsigned int)GetThemeTimingFunction(v47, *((unsigned int *)v43 + 1), 0LL, 0LL, &v86) == -2147024662 )
    {
      v48 = v86;
      v49 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v49 == WPF::ProcessHeapImpl::Alloc )
        v50 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v86);
      else
        v50 = v49(WPF::g_pProcessHeap, v86);
      v5 = v50;
      v51 = CDesktopManager::GetTheme(4);
      ThemeTimingFunction = GetThemeTimingFunction(v51, *((unsigned int *)v43 + 1), v5, v48, &v86);
      v10 = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ThemeTimingFunction, 0x42Fu);
        goto LABEL_114;
      }
      CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v53, v5);
      v55 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v55 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v54);
      else
        ((void (__fastcall *)(WPF::ProcessHeapImpl *))v55)(WPF::g_pProcessHeap);
      v5 = 0LL;
    }
    if ( *(_DWORD *)v43 == 1 )
    {
      v56 = *((_DWORD *)v43 + 4);
      if ( (v56 & 1) == 0 )
      {
        if ( v32 <= 0.0 || v33 <= 0.0 )
          goto LABEL_45;
        v57 = *(_DWORD *)(a1 + 352);
        if ( v57 == 2 )
        {
          v76 = v43[7];
          v77 = fmaxf(v76, v21 / v32);
          v78 = fmaxf(v43[8], v22 / v33);
          v79 = fminf(v77, v78);
          v80 = fmaxf(v77, v78);
        }
        else
        {
          if ( v57 != 4 )
          {
LABEL_45:
            if ( (v56 & 4) != 0 )
            {
              v58 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
              v10 = v58;
              if ( v58 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x497u);
                goto LABEL_114;
              }
              v59 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
              v10 = v59;
              if ( v59 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x498u);
                goto LABEL_114;
              }
              v22 = *(float *)&PerformanceCount.LowPart;
            }
            v60 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
            v10 = v60;
            if ( v60 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x49Bu);
              goto LABEL_114;
            }
            v61 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
            v10 = v61;
            if ( v61 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x49Cu);
              goto LABEL_114;
            }
            goto LABEL_55;
          }
          v76 = v43[7];
          v80 = fminf(fminf(v76, v21 / v32), fminf(v43[8], v22 / v33));
          v79 = v80;
        }
        v81 = v79 - v43[5];
        v82 = v76 - v43[5];
        v43[7] = v80;
        v43[8] = v80;
        v46 = fmaxf(0.0, (float)(v81 * v46) / v82);
        goto LABEL_45;
      }
      v69 = *(_DWORD *)(a1 + 352);
      if ( v69 != 3 && v69 != 5 )
      {
        v10 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x45Cu);
        goto LABEL_114;
      }
      v70 = v43[7];
      v71 = v43[8];
      *(float *)&v90 = (float)((float)(1.0 - v70) * v26) + (float)(v70 * v91);
      *((float *)&v90 + 1) = (float)((float)(1.0 - v71) * v29) + (float)(v71 * v92);
      v32 = (float)((float)(1.0 - v70) * v32) + (float)(v70 * v21);
      v33 = (float)((float)(1.0 - v71) * v33) + (float)(v71 * v22);
      v72 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      v10 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x450u);
        goto LABEL_114;
      }
      v73 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      v10 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x451u);
        goto LABEL_114;
      }
      v74 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v10 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x456u);
        goto LABEL_114;
      }
      v75 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v10 = v75;
      if ( v75 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x457u);
        goto LABEL_114;
      }
      v38 = v93;
    }
    else if ( *(_DWORD *)v43 == 2 )
    {
      if ( ((_BYTE)v43[4] & 1) != 0 )
      {
        v83 = *(_DWORD *)(a1 + 352);
        if ( v83 != 3 && v83 != 5 )
        {
          v10 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4AFu);
          goto LABEL_114;
        }
        v84 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v10 = v84;
        if ( v84 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0x4AAu);
          goto LABEL_114;
        }
      }
      else
      {
        v62 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v10 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x4B6u);
          goto LABEL_114;
        }
      }
    }
LABEL_55:
    v4 = fmaxf(v46, v4);
LABEL_56:
    v63 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v63 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v43);
    else
      v63(WPF::g_pProcessHeap, v43);
LABEL_58:
    LODWORD(v93) = ++v38;
    if ( v38 >= v89 )
      goto LABEL_59;
    LODWORD(v26) = v90;
    v29 = *((float *)&v90 + 1);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ThemeAnimationTransform, 0x41Cu);
LABEL_114:
  if ( v43 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v43);
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
  return v10;
}
