/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800E5BF4
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800E1D04 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPD.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800E4CEC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IdentifyScenarioInteractionTypeForKbdMouse@@YA?AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@W41@KI_K@Z @ 0x1800E4D30 (-IdentifyScenarioInteractionTypeForKbdMouse@@YA-AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_00.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     Template_xhhxz @ 0x1800E605C (Template_xhhxz.c)
 *     Template_xxhx @ 0x1800E613C (Template_xxhx.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 */

struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *__fastcall CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int64 *a4)
{
  __int64 v7; // rbx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int16 v16; // ax
  ULONGLONG TickCount64; // rax
  int v18; // ecx
  unsigned int v19; // eax
  bool v20; // zf
  unsigned int v21; // eax
  bool v22; // zf
  unsigned __int16 v23; // ax
  int v24; // edx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // edx
  int v29; // [rsp+28h] [rbp+20h]

  *((_QWORD *)this + 216) = *a4;
  v7 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xxhx((_DWORD)this, (_DWORD)a2, *(_QWORD *)a2, *((_QWORD *)a2 + 1), *((_WORD *)a2 + 10), a3);
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v9 = Scenario;
  if ( Scenario )
  {
    if ( *((_DWORD *)Scenario + 9)
      && (!*((_WORD *)Scenario + 37) && *((_WORD *)a2 + 10)
       || *((_DWORD *)Scenario + 16) == 6 && *((_DWORD *)Scenario + 39) == 256 && *((_DWORD *)this + 434) == 257
       || *((_DWORD *)Scenario + 16) == 4 && *((_DWORD *)Scenario + 39) == 513 && *((_DWORD *)this + 434) == 514) )
    {
      CTelemetryTouchLatencyAnalysis::RetireScenario(this, Scenario, 0, 0);
    }
    if ( !*((_DWORD *)v9 + 9) )
    {
      *(_QWORD *)v9 = *(_QWORD *)a2;
      *((_DWORD *)v9 + 8) = 1;
      *((_QWORD *)v9 + 5) = 0LL;
      v10 = *((_DWORD *)a2 + 4);
      if ( v10 )
      {
        *((_DWORD *)v9 + 16) = v10;
      }
      else
      {
        v11 = *((_QWORD *)this + 218);
        if ( v11 > a3 || v11 <= a3 - 10 )
        {
          *((_DWORD *)v9 + 16) = 0;
        }
        else
        {
          v12 = *((_DWORD *)this + 434);
          if ( (unsigned int)(v12 - 256) <= 1 )
          {
            *((_DWORD *)v9 + 16) = 6;
          }
          else
          {
            v13 = v12 - 513;
            if ( v13 <= 0xD )
            {
              v14 = 8707;
              if ( _bittest(&v14, v13) )
                *((_DWORD *)v9 + 16) = 4;
            }
          }
        }
      }
      *((_DWORD *)v9 + 17) = IdentifyScenarioInteractionTypeForKbdMouse(
                               *((_DWORD *)a2 + 7),
                               *((_DWORD *)v9 + 16),
                               *((_DWORD *)this + 434),
                               *((_QWORD *)this + 219));
      *((_DWORD *)v9 + 18) = 0;
      *((_QWORD *)v9 + 10) = a3;
      *((_WORD *)v9 + 44) = 0;
      *(_QWORD *)((char *)v9 + 92) = 0LL;
      *(_QWORD *)((char *)v9 + 100) = 0LL;
      *((_DWORD *)v9 + 27) = 0;
      *((_WORD *)v9 + 56) = 0;
      *((_QWORD *)v9 + 16) = 0LL;
      *((_QWORD *)v9 + 17) = 0LL;
      *((_DWORD *)v9 + 36) = *((_DWORD *)a2 + 6);
      *((_DWORD *)v9 + 37) = 0;
      *((_WORD *)v9 + 76) = 0;
      *((_QWORD *)v9 + 6) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v9 + 7) = 0LL;
      *((_WORD *)v9 + 77) = 0;
      *((_DWORD *)v9 + 39) = 0;
      QueryPerformanceCounter((LARGE_INTEGER *)v9 + 6);
      v16 = Microsoft_Windows_Dwm_CoreEnableBits;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        Template_xd(
          v15,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
          *(_QWORD *)a2,
          *((unsigned int *)v9 + 8));
        v16 = Microsoft_Windows_Dwm_CoreEnableBits;
      }
      if ( (v16 & 0x100) != 0 )
      {
        LOWORD(v29) = *((_WORD *)v9 + 15);
        Template_xhhxz(
          v15,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT,
          *(_QWORD *)a2,
          *((unsigned __int16 *)v9 + 14),
          v29,
          a3,
          *((_QWORD *)v9 + 1));
      }
    }
    *((_QWORD *)v9 + 17) = *((_QWORD *)v9 + 16);
    QueryPerformanceCounter((LARGE_INTEGER *)v9 + 16);
    TickCount64 = GetTickCount64();
    v18 = *((_DWORD *)v9 + 9);
    *((_QWORD *)v9 + 15) = TickCount64;
    if ( !v18 )
    {
      *((_QWORD *)v9 + 5) = *((_QWORD *)a2 + 1);
      v19 = *((_DWORD *)this + 410);
      if ( v19 > 3 )
      {
        if ( v19 == 4 )
        {
          if ( *((_DWORD *)v9 + 39) == 514 && *((_DWORD *)this + 434) == 513 )
            goto LABEL_42;
          v20 = ((*((_DWORD *)this + 434) - 522) & 0xFFFFFFFB) == 0;
LABEL_36:
          if ( v20 )
            goto LABEL_42;
          goto LABEL_56;
        }
        if ( v19 != 5 )
        {
          if ( v19 != 6 || *((_DWORD *)v9 + 39) != 257 )
            goto LABEL_56;
          v20 = *((_DWORD *)this + 434) == 256;
          goto LABEL_36;
        }
      }
      if ( *((_WORD *)a2 + 10) )
LABEL_42:
        *((_QWORD *)v9 + 6) = *((_QWORD *)a2 + 1);
LABEL_56:
      v23 = *((_WORD *)a2 + 10);
      v24 = *((_DWORD *)v9 + 16);
      if ( *((_WORD *)v9 + 36) > v23 )
        v23 = *((_WORD *)v9 + 36);
      *((_WORD *)v9 + 36) = v23;
      *((_WORD *)v9 + 37) = *((_WORD *)a2 + 10);
      *((_DWORD *)v9 + 37) = *((_DWORD *)v9 + 36);
      *((_DWORD *)v9 + 36) = *((_DWORD *)a2 + 6);
      *((_DWORD *)v9 + 17) = IdentifyScenarioInteractionTypeForKbdMouse(
                               *((_DWORD *)a2 + 7),
                               v24,
                               *((_DWORD *)this + 434),
                               *((_QWORD *)this + 219));
      if ( ((v25 - 4) & 0xFFFFFFFD) == 0 )
        *((_DWORD *)v9 + 39) = *((_DWORD *)this + 434);
      *((_WORD *)v9 + 77) = *((_WORD *)a2 + 16);
      *((_DWORD *)v9 + 9) = 1;
      v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             32LL);
      if ( v7 )
      {
        v26 = *((_QWORD *)a2 + 1);
        v27 = *((_DWORD *)a2 + 6);
        *(_QWORD *)v7 = *(_QWORD *)a2;
        *(_QWORD *)(v7 + 8) = v26;
        *(_DWORD *)(v7 + 16) = v27;
        *(_QWORD *)(v7 + 24) = this;
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
      {
        if ( a3 >= *((_QWORD *)v9 + 10) )
        {
          ++*((_DWORD *)v9 + 8);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xd(
              v26,
              &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
              *(_QWORD *)a2,
              *((unsigned int *)v9 + 8));
        }
      }
      return (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v7;
    }
    if ( *((_QWORD *)v9 + 7) )
      goto LABEL_56;
    v21 = *((_DWORD *)this + 410);
    if ( v21 > 3 )
    {
      if ( v21 == 4 )
      {
        if ( *((_DWORD *)v9 + 39) == 513 && *((_DWORD *)this + 434) == 514 )
          goto LABEL_55;
        v22 = ((*((_DWORD *)this + 434) - 522) & 0xFFFFFFFB) == 0;
LABEL_54:
        if ( !v22 )
          goto LABEL_56;
LABEL_55:
        *((_QWORD *)v9 + 7) = *((_QWORD *)a2 + 1);
        goto LABEL_56;
      }
      if ( v21 != 5 )
      {
        if ( v21 != 6 || *((_DWORD *)v9 + 39) != 256 )
          goto LABEL_56;
        v22 = *((_DWORD *)this + 434) == 257;
        goto LABEL_54;
      }
    }
    v22 = *((_WORD *)a2 + 10) == 0;
    goto LABEL_54;
  }
  return (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v7;
}
