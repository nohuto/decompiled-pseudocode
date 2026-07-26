/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x1C00CC730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x16u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x17u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle);
  }
}
