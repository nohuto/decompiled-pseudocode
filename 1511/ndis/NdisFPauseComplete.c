/*
 * XREFs of NdisFPauseComplete @ 0x1C0053410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisFPauseComplete(NDIS_HANDLE NdisFilterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Du, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)NdisFilterHandle);
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, (__int64)NdisFilterHandle);
}
