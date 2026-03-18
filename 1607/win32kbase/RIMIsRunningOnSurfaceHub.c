/*
 * XREFs of RIMIsRunningOnSurfaceHub @ 0x1C0005494
 * Callers:
 *     ApiSetGetUserHandedness @ 0x1C0005464 (ApiSetGetUserHandedness.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C00054AC (RIMAbIsDeviceArbitrationSupported.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     RIMGetOneCoreEdition @ 0x1C00054C8 (RIMGetOneCoreEdition.c)
 */

_BOOL8 RIMIsRunningOnSurfaceHub()
{
  return (unsigned int)RIMGetOneCoreEdition() == 6;
}
