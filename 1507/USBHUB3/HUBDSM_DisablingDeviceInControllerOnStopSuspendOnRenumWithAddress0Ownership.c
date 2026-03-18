/*
 * XREFs of HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership @ 0x1C00168F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001C834 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership(__int64 a1)
{
  HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
