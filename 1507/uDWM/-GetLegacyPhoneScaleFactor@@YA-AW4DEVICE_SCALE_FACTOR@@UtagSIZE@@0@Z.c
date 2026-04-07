/*
 * XREFs of ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x18009EAC0
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x180007D04 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180007F40 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1800080C8 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x18009E9DC (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 */

__int64 __fastcall GetLegacyPhoneScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  enum DEVICE_SCALE_FACTOR v2; // ebx
  unsigned int v3; // eax

  LoadScalingOverrides();
  v2 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
    v2 = (unsigned int)CalcBucketedScaleFactor(a1, a2);
  v3 = CalcBucketedScaleFactor(a1, a2);
  ScalingCompatCalculationTelemetry(0, v3, v2);
  return (unsigned int)v2;
}
