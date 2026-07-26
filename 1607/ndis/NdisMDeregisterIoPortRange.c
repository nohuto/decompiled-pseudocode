/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x1C00D2420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x16u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x17u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)MiniportAdapterHandle);
  }
}
