/*
 * XREFs of ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A0C18
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800A115C (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A12DC (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@@Z @ 0x1800A0B90 (-CopyScenarioInfo@CAnimationTracking@@AEAAJPEAUAnimationScenarioRunningStatistics@1@PEBUDCOMPOSI.c)
 *     ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A0FD0 (-FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@.c)
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800A410C (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  wchar_t *v19; // rax
  const wchar_t *v20; // r15
  wchar_t *v21; // rax
  const wchar_t *v22; // rcx
  ULONGLONG TickCount64; // rcx
  CAnimationTracking *v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v29[2]; // [rsp+30h] [rbp-10h] BYREF

  v29[0] = 0LL;
  v11 = 0;
  CAnimationTracking::FindScenario(this, a4, a5, v29);
  v12 = v29[0];
  if ( v29[0] )
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
  v14 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  320LL);
  v15 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x140uLL);
    *((_QWORD *)v15 + 20) = v15 + 192;
    *((_QWORD *)v15 + 21) = v15 + 192;
    *((_DWORD *)v15 + 44) = 16;
    *(_QWORD *)(v15 + 180) = 16LL;
  }
  else
  {
    v15 = 0LL;
  }
  v29[0] = (struct CAnimationTracking::AnimationScenarioRunningStatistics *)v15;
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
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      v17 = v16 + 1;
      v18 = 2 * v17;
      if ( !is_mul_ok(v17, 2uLL) )
        v18 = -1LL;
      v19 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         v18);
      v20 = v19;
      if ( v19 )
      {
        if ( wcscpy_s(v19, v17, a3) )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v20);
          *((_QWORD *)v29[0] + 17) = a3;
          *((_QWORD *)v29[0] + 18) = 0LL;
        }
        else
        {
          v21 = wcschr(v20, 1u);
          if ( v21 )
            *v21 = 0;
          *((_QWORD *)v29[0] + 17) = v20;
          if ( v21 )
            v22 = v21 + 1;
          else
            v22 = L"0.0.0.0";
          *((_QWORD *)v29[0] + 18) = v22;
        }
      }
    }
  }
  *((_DWORD *)v29[0] + 5) = (*((_DWORD *)this + 144))++;
  *((_QWORD *)v29[0] + 6) = *((_QWORD *)a6 + 1);
  TickCount64 = GetTickCount64();
  *((_QWORD *)v29[0] + 14) = TickCount64;
  if ( a5 )
  {
    v24 = (CAnimationTracking *)(TickCount64 + 5000);
    *((_QWORD *)v29[0] + 16) = v24;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    v24 = (CAnimationTracking *)(*((_QWORD *)v29[0] + 14) + 500LL + *((unsigned int *)a2 + 6));
    *((_QWORD *)v29[0] + 16) = v24;
  }
  else
  {
    v24 = v29[0];
    *((_QWORD *)v29[0] + 16) = *((_QWORD *)v29[0] + 14) + 5000LL;
  }
  if ( a2 )
  {
    v11 = CAnimationTracking::CopyScenarioInfo(v24, v29[0], a2);
    if ( v11 < 0 )
    {
      if ( v29[0] )
        CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v29[0], v25);
      goto LABEL_6;
    }
  }
  v26 = *((_DWORD *)this + 6);
  v27 = v26 + 1;
  if ( v26 + 1 < v26 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v11 = 0;
    if ( v27 > *((_DWORD *)this + 5) )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, v29);
      v11 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
    }
    else
    {
      *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * v26) = v29[0];
      *((_DWORD *)this + 6) = v27;
    }
  }
  v12 = v29[0];
LABEL_2:
  *a7 = v12;
  return (unsigned int)v11;
}
