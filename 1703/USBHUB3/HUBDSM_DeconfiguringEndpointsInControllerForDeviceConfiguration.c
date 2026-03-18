/*
 * XREFs of HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001C9C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001F250 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
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
    HUBSM_AddEvent((__int64)(v1 + 122), 4028);
  }
  return 1000LL;
}
