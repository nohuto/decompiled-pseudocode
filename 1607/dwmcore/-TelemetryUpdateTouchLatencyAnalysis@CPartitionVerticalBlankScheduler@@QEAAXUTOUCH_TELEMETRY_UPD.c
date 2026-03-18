/*
 * XREFs of ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18000D7C0
 * Callers:
 *     ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x18000CFA4 (-Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001C97C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800A1F60 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryUpdateTouchLatencyAnalysis(
        unsigned __int64 *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  _QWORD *v12; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v14; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *updated; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = a1[2741];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 1272);
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD **)(*(_QWORD *)(v4 + 1248) + 8 * v6);
        if ( *v12 == *a2 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v5 )
          goto LABEL_3;
      }
      v12[1] = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[2741] + 1248) + 8 * v6) + 16LL) = a2[2];
      Scenario = CTelemetryTouchLatencyAnalysis::FindScenario((CTelemetryTouchLatencyAnalysis *)(a1 + 2859), *a2);
      if ( Scenario )
        *((_DWORD *)Scenario + 36) = *(_DWORD *)(v14 + 32);
    }
    else
    {
LABEL_3:
      v7 = *(_QWORD *)v4;
      v16 = a1[25];
      updated = CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
                  (CTelemetryTouchLatencyAnalysis *)(a1 + 2859),
                  (const struct TOUCH_TELEMETRY_UPDATE_INFO *)a2,
                  v7,
                  &v16);
      if ( updated )
      {
        v8 = a1[2741];
        v9 = *(_DWORD *)(v8 + 1272);
        v10 = v9 + 1;
        if ( v9 + 1 < v9 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else if ( v10 <= *(_DWORD *)(v8 + 1268) )
        {
          *(_QWORD *)(*(_QWORD *)(v8 + 1248) + 8LL * *(unsigned int *)(v8 + 1272)) = updated;
          *(_DWORD *)(v8 + 1272) = v10;
        }
        else
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet(v8 + 1248, 8LL, 1LL, &updated);
          if ( v11 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
        }
      }
    }
  }
}
