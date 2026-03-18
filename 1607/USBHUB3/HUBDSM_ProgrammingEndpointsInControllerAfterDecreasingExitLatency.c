/*
 * XREFs of HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency @ 0x1C001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001D258 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_ProgrammingEndpointsInControllerAfterDecreasingExitLatency(__int64 a1)
{
  HUBUCX_EnableDisableEndpointsUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
