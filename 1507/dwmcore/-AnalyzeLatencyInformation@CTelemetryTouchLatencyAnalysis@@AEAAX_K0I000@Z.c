/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0I000@Z @ 0x1800E4870
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800655A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800E4CEC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     Template_xxxqx @ 0x1800E61D4 (Template_xxxqx.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  int v9; // ebp
  unsigned __int64 v10; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v12; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v13; // rbx
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax

  v9 = a2;
  if ( a6 >= a3 )
  {
    v10 = *((_QWORD *)this + 214);
    if ( v10 )
    {
      Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
      v13 = Scenario;
      if ( Scenario )
      {
        v14 = 0xFFFF;
        if ( *((_WORD *)Scenario + 49) )
        {
          v18 = (v12 - a3) / v10;
          v16 = (v12 - a3) % v10;
          *((_DWORD *)v13 + 23) += v18;
          LOBYTE(v17) = v18;
          if ( (unsigned int)v18 < 0xFFFF )
            v14 = v18;
          if ( *((_WORD *)v13 + 48) > (unsigned __int16)v14 )
            LOWORD(v14) = *((_WORD *)v13 + 48);
          *((_WORD *)v13 + 48) = v14;
        }
        else
        {
          v15 = (v12 - *((_QWORD *)Scenario + 5)) / v10;
          v16 = (v12 - *((_QWORD *)v13 + 5)) % v10;
          v17 = (v12 - *((_QWORD *)v13 + 5)) / v10;
          if ( (unsigned int)v15 < 0xFFFF )
            v14 = v15;
          *((_WORD *)v13 + 49) = v14;
        }
        ++*((_WORD *)v13 + 44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxqx(v14, v16, v9, a3, v12, v17, a7);
        v19 = *((_DWORD *)v13 + 37);
        if ( v19 )
        {
          if ( a4 == v19 + 1 )
          {
            v20 = *((_QWORD *)v13 + 16);
            if ( v20 )
            {
              v21 = *((_QWORD *)v13 + 17);
              if ( v21 )
              {
                if ( v20 - v21 > 15 * a5 / 0xA )
                  ++*((_WORD *)v13 + 76);
              }
            }
          }
        }
      }
    }
  }
}
