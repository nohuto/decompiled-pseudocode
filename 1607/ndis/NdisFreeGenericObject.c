/*
 * XREFs of NdisFreeGenericObject @ 0x1C005C4E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_q(0x84u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (__int64)NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_q(0x85u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, 0LL);
}
