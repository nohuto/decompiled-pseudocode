/*
 * XREFs of NdisIfAllocateNetLuidIndexEx @ 0x1C00C63C0
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A761C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisIfAllocateNetLuidIndexEx(unsigned __int16 a1, char a2, unsigned int *a3)
{
  return ndisIfAllocateAndVerifyNetLuidIndex(a1, a3, 1u, (a2 & 1) == 0);
}
