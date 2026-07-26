/*
 * XREFs of NdisFreeGenericObject @ 0x1C0057D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_q(0x84u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, (__int64)NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_q(0x85u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, 0LL);
}
