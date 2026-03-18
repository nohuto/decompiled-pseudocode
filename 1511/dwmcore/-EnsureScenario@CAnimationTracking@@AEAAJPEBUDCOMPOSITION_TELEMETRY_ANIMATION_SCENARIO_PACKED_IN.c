/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180029788
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x180028550 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800286DC (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x1800296F0 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x180029B48 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18002ABD4 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationTracking::EnsureScenario(
        CAnimationTracking *this,
        const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        const struct _GUID *a5,
        const struct CAnimationTracking::TelFrameInfo *a6,
        struct CAnimationTracking::AnimationScenarioRunningStatistics **a7)
{
  int v11; // ebx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  __int64 v19; // rdi
  wchar_t *v20; // rax
  const wchar_t *v21; // rsi
  wchar_t *v22; // rax
  const wchar_t *v23; // rcx
  ULONGLONG TickCount64; // rcx
  CAnimationTracking *v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v30[2]; // [rsp+30h] [rbp-10h] BYREF

  v30[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v30);
  v12 = v30[0];
  if ( v30[0] )
    goto LABEL_2;
  if ( !a5
    && (!a2
     || !*((_WORD *)a2 + 17)
     || !(const struct DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO *)((char *)a2
                                                                              + *((unsigned __int16 *)a2 + 17))) )
  {
    v11 = -2147024809;
LABEL_6:
    v12 = 0LL;
    goto LABEL_2;
  }
  if ( *((_DWORD *)this + 6) >= 8u )
  {
    v11 = -2147024827;
    goto LABEL_6;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          312LL);
  v15 = v14;
  if ( v14 )
  {
    v16 = v14 + 184;
    *(_QWORD *)(v15 + 152) = v16;
    *(_QWORD *)(v15 + 160) = v16;
    *(_DWORD *)(v15 + 168) = 16;
    *(_QWORD *)(v15 + 172) = 16LL;
  }
  else
  {
    v15 = 0LL;
  }
  v30[0] = (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v15;
  if ( !v15 )
  {
    v11 = -2147024882;
    goto LABEL_6;
  }
  if ( a5 )
  {
    *(struct _GUID *)(v15 + 4) = *a5;
  }
  else
  {
    *(_DWORD *)v15 = a4;
    if ( a3 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a3[v17] );
      v18 = v17 + 1;
      v19 = 2 * v18;
      if ( !is_mul_ok(v18, 2uLL) )
        v19 = -1LL;
      v20 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         v19);
      v21 = v20;
      if ( v20 )
      {
        if ( wcscpy_s(v20, v18, a3) )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v21);
          *((_QWORD *)v30[0] + 16) = a3;
          *((_QWORD *)v30[0] + 17) = 0LL;
        }
        else
        {
          v22 = wcschr(v21, 1u);
          if ( v22 )
            *v22 = 0;
          *((_QWORD *)v30[0] + 16) = v21;
          if ( v22 )
            v23 = v22 + 1;
          else
            v23 = L"0.0.0.0";
          *((_QWORD *)v30[0] + 17) = v23;
        }
      }
    }
  }
  *((_DWORD *)v30[0] + 5) = (*((_DWORD *)this + 144))++;
  *((_QWORD *)v30[0] + 6) = *((_QWORD *)a6 + 1);
  TickCount64 = GetTickCount64();
  *((_QWORD *)v30[0] + 13) = TickCount64;
  if ( a5 )
  {
    v25 = (CAnimationTracking *)(TickCount64 + 5000);
    *((_QWORD *)v30[0] + 15) = v25;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    v25 = (CAnimationTracking *)(*((_QWORD *)v30[0] + 13) + 500LL + *((unsigned int *)a2 + 6));
    *((_QWORD *)v30[0] + 15) = v25;
  }
  else
  {
    v25 = v30[0];
    *((_QWORD *)v30[0] + 15) = *((_QWORD *)v30[0] + 13) + 5000LL;
  }
  if ( a2 )
  {
    v11 = CAnimationTracking::CopyScenarioInfo(v25, v30[0], a2);
    if ( v11 < 0 )
    {
      if ( v30[0] )
        CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v30[0], v26);
      goto LABEL_6;
    }
  }
  v27 = *((_DWORD *)this + 6);
  v28 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v11 = 0;
    if ( v28 > *((_DWORD *)this + 5) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, v30);
      v11 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xC0u);
    }
    else
    {
      *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * v27) = v30[0];
      *((_DWORD *)this + 6) = v28;
    }
  }
  v12 = v30[0];
LABEL_2:
  *a7 = v12;
  return (unsigned int)v11;
}
