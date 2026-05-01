/*
 * XREFs of ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x18001B2BC
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x18001AF78 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18001B0B8 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x18001B258 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 *     ?LoadScalingOverrides@@YAXXZ @ 0x18001B62C (-LoadScalingOverrides@@YAXXZ.c)
 */

__int64 __fastcall GetLegacyModernScaleFactor(unsigned int a1)
{
  enum DEVICE_SCALE_FACTOR v2; // ebx
  int v3; // eax
  __int64 v4; // r8

  LoadScalingOverrides();
  v2 = g_legacyCompatScalingOverride;
  v3 = 0;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    v2 = SCALE_100_PERCENT;
    v4 = 0LL;
    do
    {
      if ( a1 >= *(_DWORD *)((char *)&ModernScaleFactorCutoffs + v4) )
        v2 = *(_DWORD *)((char *)&unk_18003F2AC + v4);
      ++v3;
      v4 += 4LL;
    }
    while ( (unsigned __int64)v3 < 2 );
  }
  ScalingCompatCalculationTelemetry(1u, a1, v2);
  return (unsigned int)v2;
}
