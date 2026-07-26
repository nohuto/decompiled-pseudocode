/*
 * XREFs of NdisMPciAssignResources @ 0x1C00D3020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMPciAssignResources(
        NDIS_HANDLE MiniportHandle,
        ULONG SlotNumber,
        PNDIS_RESOURCE_LIST *AssignedResources)
{
  unsigned __int8 v5; // cl
  __int64 v6; // rax

  v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x33u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
    v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  if ( *((_DWORD *)MiniportHandle + 942) == 5 && (v6 = *((_QWORD *)MiniportHandle + 118)) != 0 )
  {
    *AssignedResources = (PNDIS_RESOURCE_LIST)(v6 + 12);
    if ( v5 >= 4u )
      WPP_SF_q(0x35u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
    return 0;
  }
  else
  {
    *AssignedResources = 0LL;
    if ( v5 >= 4u )
      WPP_SF_q(0x34u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportHandle);
    return -1073741823;
  }
}
