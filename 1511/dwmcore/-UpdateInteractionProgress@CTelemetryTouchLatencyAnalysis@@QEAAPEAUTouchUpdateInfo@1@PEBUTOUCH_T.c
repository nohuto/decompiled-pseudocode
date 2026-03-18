/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800AFE64
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180005ADC (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPD.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180003550 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IdentifyScenarioInteractionTypeForKbdMouse@@YA?AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@W41@KI_K@Z @ 0x18001D4FC (-IdentifyScenarioInteractionTypeForKbdMouse@@YA-AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_00.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 *     Template_xhhxz @ 0x1800F3184 (Template_xhhxz.c)
 *     Template_xxhx @ 0x1801022E0 (Template_xxhx.c)
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
  __int64 v27; // rdx
  int v28; // r8d
  int v30; // [rsp+28h] [rbp+20h]

  *((_QWORD *)this + 231) = *a4;
  v7 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xxhx((_DWORD)this, (_DWORD)a2, *(_QWORD *)a2, *((_QWORD *)a2 + 1), *((_WORD *)a2 + 14), a3);
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v9 = Scenario;
  if ( Scenario )
  {
    if ( *((_DWORD *)Scenario + 9)
      && (!*((_WORD *)Scenario + 37) && *((_WORD *)a2 + 14)
       || *((_DWORD *)Scenario + 16) == 6 && *((_DWORD *)Scenario + 39) == 256 && *((_DWORD *)this + 464) == 257
       || *((_DWORD *)Scenario + 16) == 4 && *((_DWORD *)Scenario + 39) == 513 && *((_DWORD *)this + 464) == 514) )
    {
      CTelemetryTouchLatencyAnalysis::RetireScenario(this, Scenario, 0, 0);
    }
    if ( !*((_DWORD *)v9 + 9) )
    {
      *(_QWORD *)v9 = *(_QWORD *)a2;
      *((_DWORD *)v9 + 8) = 1;
      *((_QWORD *)v9 + 5) = 0LL;
      v10 = *((_DWORD *)a2 + 6);
      if ( v10 )
      {
        *((_DWORD *)v9 + 16) = v10;
      }
      else
      {
        v11 = *((_QWORD *)this + 233);
        if ( v11 > a3 || v11 <= a3 - 10 )
        {
          *((_DWORD *)v9 + 16) = 0;
        }
        else
        {
          v12 = *((_DWORD *)this + 464);
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
                               *((_DWORD *)a2 + 9),
                               *((_DWORD *)v9 + 16),
                               *((_DWORD *)this + 464),
                               *((_QWORD *)this + 234));
      *((_DWORD *)v9 + 18) = 0;
      *((_QWORD *)v9 + 10) = a3;
      *((_WORD *)v9 + 44) = 0;
      *(_QWORD *)((char *)v9 + 92) = 0LL;
      *((_DWORD *)v9 + 25) = 0;
      *((_WORD *)v9 + 52) = 0;
      *(_QWORD *)((char *)v9 + 108) = 0LL;
      *((_WORD *)v9 + 58) = 0;
      *((_QWORD *)v9 + 16) = 0LL;
      *((_QWORD *)v9 + 17) = 0LL;
      *((_DWORD *)v9 + 36) = *((_DWORD *)a2 + 8);
      *((_DWORD *)v9 + 37) = 0;
      *((_WORD *)v9 + 76) = 0;
      *((_QWORD *)v9 + 6) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v9 + 7) = 0LL;
      *((_WORD *)v9 + 77) = 0;
      *(_QWORD *)((char *)v9 + 156) = 0LL;
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
        LOWORD(v30) = *((_WORD *)v9 + 15);
        Template_xhhxz(
          v15,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT,
          *(_QWORD *)a2,
          *((unsigned __int16 *)v9 + 14),
          v30,
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
      v19 = *((_DWORD *)this + 430);
      if ( v19 > 3 )
      {
        if ( v19 == 4 )
        {
          if ( *((_DWORD *)v9 + 39) == 514 && *((_DWORD *)this + 464) == 513 )
            goto LABEL_42;
          v20 = ((*((_DWORD *)this + 464) - 522) & 0xFFFFFFFB) == 0;
LABEL_36:
          if ( v20 )
            goto LABEL_42;
          goto LABEL_56;
        }
        if ( v19 != 5 )
        {
          if ( v19 != 6 || *((_DWORD *)v9 + 39) != 257 )
            goto LABEL_56;
          v20 = *((_DWORD *)this + 464) == 256;
          goto LABEL_36;
        }
      }
      if ( *((_WORD *)a2 + 14) )
LABEL_42:
        *((_QWORD *)v9 + 6) = *((_QWORD *)a2 + 1);
LABEL_56:
      v23 = *((_WORD *)a2 + 14);
      v24 = *((_DWORD *)v9 + 16);
      if ( *((_WORD *)v9 + 36) > v23 )
        v23 = *((_WORD *)v9 + 36);
      *((_WORD *)v9 + 36) = v23;
      *((_WORD *)v9 + 37) = *((_WORD *)a2 + 14);
      *((_DWORD *)v9 + 37) = *((_DWORD *)v9 + 36);
      *((_DWORD *)v9 + 36) = *((_DWORD *)a2 + 8);
      *((_DWORD *)v9 + 17) = IdentifyScenarioInteractionTypeForKbdMouse(
                               *((_DWORD *)a2 + 9),
                               v24,
                               *((_DWORD *)this + 464),
                               *((_QWORD *)this + 234));
      if ( ((v25 - 4) & 0xFFFFFFFD) == 0 )
        *((_DWORD *)v9 + 39) = *((_DWORD *)this + 464);
      *((_WORD *)v9 + 77) = *((_WORD *)a2 + 20);
      *((_DWORD *)v9 + 40) += *((_DWORD *)a2 + 11);
      *((_DWORD *)v9 + 9) = 1;
      v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             40LL);
      if ( v7 )
      {
        v27 = *((_QWORD *)a2 + 2);
        v26 = *((_QWORD *)a2 + 1);
        v28 = *((_DWORD *)a2 + 8);
        *(_QWORD *)v7 = *(_QWORD *)a2;
        *(_QWORD *)(v7 + 8) = v26;
        *(_QWORD *)(v7 + 16) = v27;
        *(_DWORD *)(v7 + 24) = v28;
        *(_QWORD *)(v7 + 32) = this;
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
    v21 = *((_DWORD *)this + 430);
    if ( v21 > 3 )
    {
      if ( v21 == 4 )
      {
        if ( *((_DWORD *)v9 + 39) == 513 && *((_DWORD *)this + 464) == 514 )
          goto LABEL_55;
        v22 = ((*((_DWORD *)this + 464) - 522) & 0xFFFFFFFB) == 0;
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
        v22 = *((_DWORD *)this + 464) == 257;
        goto LABEL_54;
      }
    }
    v22 = *((_WORD *)a2 + 14) == 0;
    goto LABEL_54;
  }
  return (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v7;
}
