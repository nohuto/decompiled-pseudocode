/*
 * XREFs of NdisFreeGenericObject @ 0x1C0058050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_q(0x81u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64)NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_q(0x82u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, 0LL);
}
