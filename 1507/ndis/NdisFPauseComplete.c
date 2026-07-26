/*
 * XREFs of NdisFPauseComplete @ 0x1C0053020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __stdcall NdisFPauseComplete(NDIS_HANDLE NdisFilterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Du, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)NdisFilterHandle);
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, (__int64)NdisFilterHandle);
}
