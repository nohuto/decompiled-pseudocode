/*
 * XREFs of HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C00167E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDeviceFromUCX @ 0x1C001DCC8 (HUBUCX_DeleteDeviceFromUCX.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C001DD88 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C001DE24 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 */

__int64 __fastcall HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 48) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  if ( *(_QWORD *)(v1 + 2136) )
    USBD_RemoveDeviceFromGlobalList(v1);
  return 4077LL;
}
