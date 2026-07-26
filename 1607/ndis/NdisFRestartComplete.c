/*
 * XREFs of NdisFRestartComplete @ 0x1C00CDE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisFilterHandle, Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x20u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisFilterHandle, Status);
}
