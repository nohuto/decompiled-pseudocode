/*
 * XREFs of NdisIfAllocateNetLuidIndex @ 0x1C00B3900
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C0021F14 (ndisCheckIfTypeMismatch.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisIfAllocateNetLuidIndex(NET_IFTYPE ifType, PUINT32 pNetLuidIndex)
{
  return ndisIfAllocateAndVerifyNetLuidIndex(ifType, pNetLuidIndex, 1u, 1);
}
