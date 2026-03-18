/*
 * XREFs of HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001AC10
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001D258 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = *(_DWORD **)(a1 + 960);
  v1[36] = 0;
  if ( v1[32] )
  {
    v1[28] = 0;
    HUBUCX_EnableDisableEndpointsUsingUCXIoctl();
  }
  else
  {
    HUBSM_AddEvent((__int64)(v1 + 122), 0xFBCu);
  }
  return 1000LL;
}
