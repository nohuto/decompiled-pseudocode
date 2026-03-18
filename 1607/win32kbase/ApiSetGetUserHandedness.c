/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C0005464
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0005348 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C00D0A88 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C00D0B1C (rimAbIsPointInPenDeadzone.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C00E17F4 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C00E1B50 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     IsGetUserHandednessSupported_0 @ 0x1C0002E88 (IsGetUserHandednessSupported_0.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C0005494 (RIMIsRunningOnSurfaceHub.c)
 */

__int64 ApiSetGetUserHandedness()
{
  if ( (int)IsGetUserHandednessSupported_0() < 0 )
    return 0LL;
  if ( (unsigned int)RIMIsRunningOnSurfaceHub() )
    return 2LL;
  return GetUserHandedness_0();
}
