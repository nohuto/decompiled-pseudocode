/*
 * XREFs of ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x18001B258
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18001B0B8 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x18001B2BC (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 * Callees:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18001B400 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18001B578 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 */

void __fastcall ScalingCompatCalculationTelemetry(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rcx

  if ( !byte_18004CB8C )
  {
    v6 = (_DWORD *)*((_QWORD *)ScalingCompatTelemetry::CScalingCompatTelemetry::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        ScalingCompatTelemetry::CScalingCompatTelemetry::Instance();
        ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v7, a1, a2, a3);
      }
    }
    byte_18004CB8C = 1;
  }
}
