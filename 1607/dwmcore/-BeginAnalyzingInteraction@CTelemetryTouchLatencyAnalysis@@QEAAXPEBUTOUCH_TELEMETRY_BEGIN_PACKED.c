/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x18001CE50
 * Callers:
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x18000CFFC (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001C97C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18001C9BC (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xhhxz @ 0x180106C70 (Template_xhhxz.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  wchar_t *v13; // rax
  const wchar_t *v14; // r14
  wchar_t *v15; // rax
  wchar_t *v16; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v17; // rax
  __int64 v18; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v19; // rdi
  __int64 v20; // rcx
  wchar_t *v21; // rsi
  void *v22; // rdx
  const wchar_t *v23; // [rsp+38h] [rbp+30h]

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v10 = Scenario;
  if ( Scenario )
  {
    ++*((_DWORD *)Scenario + 8);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      return;
    Template_xd(
      (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
      &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
      *(_QWORD *)Scenario,
      *((unsigned int *)Scenario + 8));
    v20 = (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      return;
    v22 = &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_CONCAT_EVENT;
    v23 = (const wchar_t *)*((_QWORD *)v10 + 1);
LABEL_20:
    Template_xhhxz(v20, v22, *(_QWORD *)a2, *((unsigned __int16 *)a2 + 5), *((_WORD *)a2 + 6), a5, v23);
    return;
  }
  if ( a4 )
  {
    v11 = (a3 >> 1) + 1;
    v12 = 2 * v11;
    if ( !is_mul_ok(v11, 2uLL) )
      v12 = -1LL;
    v13 = (wchar_t *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       v12);
    v14 = v13;
    if ( v13 )
    {
      if ( wcscpy_s(v13, v11, a4) )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const wchar_t *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v14);
        return;
      }
      v15 = wcschr(v14, 1u);
      v16 = v15;
      if ( v15 )
        *v15 = 0;
      v17 = CTelemetryTouchLatencyAnalysis::AllocateScenario(this);
      v19 = v17;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_xd(
          v18,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
          *(_QWORD *)a2,
          *((unsigned int *)v17 + 8));
      v20 = *(_QWORD *)a2;
      *(_QWORD *)v19 = *(_QWORD *)a2;
      *((_QWORD *)v19 + 1) = v14;
      v21 = v16 ? v16 + 1 : L"0.0.0.0";
      *((_QWORD *)v19 + 2) = v21;
      *((_DWORD *)v19 + 6) = *((_DWORD *)a2 + 4);
      *((_WORD *)v19 + 14) = *((_WORD *)a2 + 5);
      *((_WORD *)v19 + 15) = *((_WORD *)a2 + 6);
      *((_DWORD *)v19 + 9) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      {
        v23 = v14;
        v22 = &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT;
        goto LABEL_20;
      }
    }
  }
}
