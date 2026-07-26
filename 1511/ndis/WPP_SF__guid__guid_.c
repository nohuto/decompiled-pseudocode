/*
 * XREFs of WPP_SF__guid__guid_ @ 0x1C003F16C
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001ECD4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid__guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ndisWppFastTraceMessage(&WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, 0xABu, a3, 16LL, a4, 16LL, 0LL);
}
