/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800E1D04
 * Callers:
 *     ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x1800E36A4 (-Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800E4CEC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800E5BF4 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        unsigned __int64 *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned int v5; // r9d
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned int v10; // eax
  unsigned int v11; // edx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v13; // r11
  int v14; // eax
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *updated; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = a1[2787];
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 1272);
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD **)(*(_QWORD *)(v2 + 1248) + 8 * v6);
        if ( *v7 == *a2 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v5 )
          goto LABEL_5;
      }
      v7[1] = a2[1];
      Scenario = CTelemetryTouchLatencyAnalysis::FindScenario((CTelemetryTouchLatencyAnalysis *)(a1 + 2905), *a2);
      if ( Scenario )
        *((_DWORD *)Scenario + 36) = *(_DWORD *)(v13 + 24);
    }
    else
    {
LABEL_5:
      v8 = *(_QWORD *)v2;
      v16 = a1[23];
      updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                  (CTelemetryTouchLatencyAnalysis *)(a1 + 2905),
                  (const struct TOUCH_TELEMETRY_UPDATE_INFO *)a2,
                  v8,
                  &v16);
      if ( updated )
      {
        v9 = a1[2787];
        v10 = *(_DWORD *)(v9 + 1272);
        v11 = v10 + 1;
        if ( v10 + 1 >= v10 )
        {
          if ( v11 > *(_DWORD *)(v9 + 1268) )
          {
            v14 = DynArrayImpl<0>::AddMultipleAndSet(v9 + 1248, 8u, 1, &updated);
            if ( v14 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v9 + 1248) + 8LL * *(unsigned int *)(v9 + 1272)) = updated;
            *(_DWORD *)(v9 + 1272) = v11;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
      }
    }
  }
}
