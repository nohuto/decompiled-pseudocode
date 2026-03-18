/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x1800E49AC
 * Callers:
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x1800E3544 (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x1800E47BC (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800E4CEC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     Template_xhhxz @ 0x1800E605C (Template_xhhxz.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v10; // rbx
  unsigned __int64 v11; // rcx
  void *v12; // rdx
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  wchar_t *v15; // rax
  const wchar_t *v16; // rsi
  wchar_t *v17; // rax
  wchar_t *v18; // rdi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v19; // rax
  __int64 v20; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v21; // rbx
  const wchar_t *v22; // rdi
  const wchar_t *v23; // [rsp+38h] [rbp+30h]

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v10 = Scenario;
  if ( Scenario )
  {
    ++*((_DWORD *)Scenario + 8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_xd(
        (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
        &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
        *(_QWORD *)Scenario,
        *((unsigned int *)Scenario + 8));
      v11 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v12 = &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_CONCAT_EVENT;
        v23 = (const wchar_t *)*((_QWORD *)v10 + 1);
LABEL_19:
        Template_xhhxz(v11, v12, *(_QWORD *)a2, *((unsigned __int16 *)a2 + 5), *((_WORD *)a2 + 6), a5, v23);
      }
    }
  }
  else if ( a4 )
  {
    v13 = (a3 >> 1) + 1;
    v14 = 2 * v13;
    if ( !is_mul_ok(v13, 2uLL) )
      v14 = -1LL;
    v15 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       v14);
    v16 = v15;
    if ( v15 )
    {
      if ( wcscpy_s(v15, v13, a4) )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v16);
      }
      else
      {
        v17 = wcschr(v16, 1u);
        v18 = v17;
        if ( v17 )
          *v17 = 0;
        v19 = CTelemetryTouchLatencyAnalysis::AllocateScenario(this);
        v21 = v19;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xd(
            v20,
            &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
            *(_QWORD *)a2,
            *((unsigned int *)v19 + 8));
        v11 = *(_QWORD *)a2;
        *(_QWORD *)v21 = *(_QWORD *)a2;
        *((_QWORD *)v21 + 1) = v16;
        if ( v18 )
          v22 = v18 + 1;
        else
          v22 = L"0.0.0.0";
        *((_QWORD *)v21 + 2) = v22;
        *((_DWORD *)v21 + 6) = *((_DWORD *)a2 + 4);
        *((_WORD *)v21 + 14) = *((_WORD *)a2 + 5);
        *((_WORD *)v21 + 15) = *((_WORD *)a2 + 6);
        *((_DWORD *)v21 + 9) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
        {
          v23 = v16;
          v12 = &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT;
          goto LABEL_19;
        }
      }
    }
  }
}
