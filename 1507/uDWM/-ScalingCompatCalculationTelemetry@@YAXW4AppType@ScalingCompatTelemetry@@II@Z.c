/*
 * XREFs of ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180007F40
 * Callers:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180007ED4 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x18009EAC0 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x180047A48 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18009EB18 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 */

void __fastcall ScalingCompatCalculationTelemetry(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v6; // r9
  __int64 v7; // rcx

  if ( !byte_1800BC574 )
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
    byte_1800BC574 = 1;
  }
}
