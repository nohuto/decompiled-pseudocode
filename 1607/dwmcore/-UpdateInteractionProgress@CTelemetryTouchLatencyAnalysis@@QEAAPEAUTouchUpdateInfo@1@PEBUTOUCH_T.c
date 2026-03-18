/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800A1F60
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000D7C0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPD.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001C97C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001CB00 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?IdentifyScenarioInteractionTypeForKbdMouse@@YA?AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@W41@KI_K@Z @ 0x18001F930 (-IdentifyScenarioInteractionTypeForKbdMouse@@YA-AW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_00.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xhhxz @ 0x180106C70 (Template_xhhxz.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     Template_xxhx @ 0x1801177BC (Template_xxhx.c)
 */

struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *__fastcall CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int64 *a4)
{
  _QWORD *v7; // r14
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v9; // rbx
  ULONGLONG TickCount64; // rax
  int v11; // ecx
  unsigned __int16 v12; // ax
  int v13; // edx
  int v14; // edx
  LPVOID (__fastcall *v15)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  unsigned int v21; // eax
  bool v22; // zf
  unsigned int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int16 v27; // ax
  bool v28; // zf
  int v29; // ecx
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // [rsp+28h] [rbp+20h]

  *((_QWORD *)this + 232) = *a4;
  v7 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xxhx((_DWORD)this, (_DWORD)a2, *(_QWORD *)a2, *((_QWORD *)a2 + 1), *((_WORD *)a2 + 14), a3);
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v9 = Scenario;
  if ( Scenario )
  {
    if ( *((_DWORD *)Scenario + 9)
      && (!*((_WORD *)Scenario + 37) && *((_WORD *)a2 + 14)
       || *((_DWORD *)Scenario + 16) == 6 && *((_DWORD *)Scenario + 39) == 256 && *((_DWORD *)this + 466) == 257
       || *((_DWORD *)Scenario + 16) == 4 && *((_DWORD *)Scenario + 39) == 513 && *((_DWORD *)this + 466) == 514) )
    {
      CTelemetryTouchLatencyAnalysis::RetireScenario(this, Scenario, 0, 0);
    }
    if ( !*((_DWORD *)v9 + 9) )
    {
      *(_QWORD *)v9 = *(_QWORD *)a2;
      *((_DWORD *)v9 + 8) = 1;
      *((_QWORD *)v9 + 5) = 0LL;
      v24 = *((_DWORD *)a2 + 6);
      if ( v24 )
      {
        *((_DWORD *)v9 + 16) = v24;
      }
      else
      {
        v25 = *((_QWORD *)this + 234);
        if ( v25 <= a3 && v25 > a3 - 10 )
        {
          v29 = *((_DWORD *)this + 466);
          if ( (unsigned int)(v29 - 256) <= 1 )
          {
            *((_DWORD *)v9 + 16) = 6;
          }
          else
          {
            v30 = v29 - 513;
            if ( v30 <= 0xD )
            {
              v31 = 8707;
              if ( _bittest(&v31, v30) )
                *((_DWORD *)v9 + 16) = 4;
            }
          }
        }
        else
        {
          *((_DWORD *)v9 + 16) = 0;
        }
      }
      *((_DWORD *)v9 + 17) = IdentifyScenarioInteractionTypeForKbdMouse(
                               *((_DWORD *)a2 + 9),
                               *((_DWORD *)v9 + 16),
                               *((_DWORD *)this + 466),
                               *((_QWORD *)this + 235));
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
      v27 = Microsoft_Windows_Dwm_CoreEnableBits;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        Template_xd(
          v26,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
          *(_QWORD *)a2,
          *((unsigned int *)v9 + 8));
        v27 = Microsoft_Windows_Dwm_CoreEnableBits;
      }
      if ( (v27 & 0x100) != 0 )
      {
        LOWORD(v32) = *((_WORD *)v9 + 15);
        Template_xhhxz(
          v26,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT,
          *(_QWORD *)a2,
          *((unsigned __int16 *)v9 + 14),
          v32,
          a3,
          *((_QWORD *)v9 + 1));
      }
    }
    *((_QWORD *)v9 + 17) = *((_QWORD *)v9 + 16);
    QueryPerformanceCounter((LARGE_INTEGER *)v9 + 16);
    TickCount64 = GetTickCount64();
    v11 = *((_DWORD *)v9 + 9);
    *((_QWORD *)v9 + 15) = TickCount64;
    if ( v11 )
    {
      if ( *((_QWORD *)v9 + 7) )
      {
LABEL_12:
        v12 = *((_WORD *)a2 + 14);
        v13 = *((_DWORD *)v9 + 16);
        if ( *((_WORD *)v9 + 36) > v12 )
          v12 = *((_WORD *)v9 + 36);
        *((_WORD *)v9 + 36) = v12;
        *((_WORD *)v9 + 37) = *((_WORD *)a2 + 14);
        *((_DWORD *)v9 + 37) = *((_DWORD *)v9 + 36);
        *((_DWORD *)v9 + 36) = *((_DWORD *)a2 + 8);
        *((_DWORD *)v9 + 17) = IdentifyScenarioInteractionTypeForKbdMouse(
                                 *((_DWORD *)a2 + 9),
                                 v13,
                                 *((_DWORD *)this + 466),
                                 *((_QWORD *)this + 235));
        if ( ((v14 - 4) & 0xFFFFFFFD) == 0 )
          *((_DWORD *)v9 + 39) = *((_DWORD *)this + 466);
        *((_WORD *)v9 + 77) = *((_WORD *)a2 + 20);
        *((_DWORD *)v9 + 40) += *((_DWORD *)a2 + 11);
        *((_DWORD *)v9 + 9) = 1;
        v15 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v15 == WPF::ProcessHeapImpl::Alloc )
          v16 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x28uLL);
        else
          v16 = (_QWORD *)v15(WPF::g_pProcessHeap, 40LL);
        v7 = v16;
        if ( v16 )
        {
          v18 = *((_QWORD *)a2 + 2);
          v17 = *((_QWORD *)a2 + 1);
          v19 = *((_DWORD *)a2 + 8);
          *v16 = *(_QWORD *)a2;
          v16[1] = v17;
          v16[2] = v18;
          *((_DWORD *)v16 + 6) = v19;
          v16[4] = this;
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
                v17,
                &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
                *(_QWORD *)a2,
                *((unsigned int *)v9 + 8));
          }
        }
        return (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v7;
      }
      v21 = *((_DWORD *)this + 430);
      if ( v21 > 3 )
      {
        if ( v21 == 4 )
        {
          if ( *((_DWORD *)v9 + 39) == 513 && *((_DWORD *)this + 466) == 514 )
            goto LABEL_30;
          v22 = ((*((_DWORD *)this + 466) - 522) & 0xFFFFFFFB) == 0;
LABEL_29:
          if ( !v22 )
            goto LABEL_12;
LABEL_30:
          *((_QWORD *)v9 + 7) = *((_QWORD *)a2 + 1);
          goto LABEL_12;
        }
        if ( v21 != 5 )
        {
          if ( v21 != 6 || *((_DWORD *)v9 + 39) != 256 )
            goto LABEL_12;
          v22 = *((_DWORD *)this + 466) == 257;
          goto LABEL_29;
        }
      }
      v22 = *((_WORD *)a2 + 14) == 0;
      goto LABEL_29;
    }
    *((_QWORD *)v9 + 5) = *((_QWORD *)a2 + 1);
    v23 = *((_DWORD *)this + 430);
    if ( v23 <= 3 )
      goto LABEL_33;
    if ( v23 == 4 )
    {
      if ( *((_DWORD *)v9 + 39) == 514 && *((_DWORD *)this + 466) == 513 )
        goto LABEL_51;
      v28 = ((*((_DWORD *)this + 466) - 522) & 0xFFFFFFFB) == 0;
    }
    else
    {
      if ( v23 == 5 )
      {
LABEL_33:
        if ( !*((_WORD *)a2 + 14) )
          goto LABEL_12;
LABEL_51:
        *((_QWORD *)v9 + 6) = *((_QWORD *)a2 + 1);
        goto LABEL_12;
      }
      if ( v23 != 6 || *((_DWORD *)v9 + 39) != 257 )
        goto LABEL_12;
      v28 = *((_DWORD *)this + 466) == 256;
    }
    if ( !v28 )
      goto LABEL_12;
    goto LABEL_51;
  }
  return (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v7;
}
