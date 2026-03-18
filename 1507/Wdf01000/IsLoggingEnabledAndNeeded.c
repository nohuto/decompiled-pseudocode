/*
 * XREFs of IsLoggingEnabledAndNeeded @ 0x1C0028D50
 * Callers:
 *     ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0028CA0 (-PnpEventStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     RegistryReadLastLoggedTime @ 0x1C0006C04 (RegistryReadLastLoggedTime.c)
 *     WPP_IFR_SF_xxx @ 0x1C008080C (WPP_IFR_SF_xxx.c)
 */

bool __fastcall IsLoggingEnabledAndNeeded(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  _FX_TELEMETRY_CONTEXT *TelemetryContext; // rax
  unsigned __int8 v4; // dl
  unsigned int v5; // r8d
  unsigned __int16 v6; // r9
  __int64 v7; // rdi
  const _GUID *v8; // [rsp+20h] [rbp-28h]
  _LARGE_INTEGER lastLoggedTime; // [rsp+58h] [rbp+10h] BYREF

  TelemetryContext = DriverGlobals->TelemetryContext;
  if ( !TelemetryContext || _interlockedbittestandset(&TelemetryContext->DoOnceFlagsBitmap, 0) )
    return 0;
  lastLoggedTime.QuadPart = 0LL;
  RegistryReadLastLoggedTime(DriverGlobals, &lastLoggedTime);
  if ( !lastLoggedTime.QuadPart )
    return 1;
  v7 = MEMORY[0xFFFFF78000000014] - lastLoggedTime.QuadPart;
  if ( DriverGlobals->FxVerboseOn )
    WPP_IFR_SF_xxx(
      DriverGlobals,
      v4,
      v5,
      v6,
      v8,
      lastLoggedTime.QuadPart,
      MEMORY[0xFFFFF78000000014],
      MEMORY[0xFFFFF78000000014] - lastLoggedTime.QuadPart);
  return v7 >= 864000000000LL;
}
