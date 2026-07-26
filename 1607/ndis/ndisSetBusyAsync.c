/*
 * XREFs of ndisSetBusyAsync @ 0x1C0010E00
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DB00 (ndisMSendNBLToMiniportInternal.c)
 *     ndisMDoDirectOidRequest @ 0x1C0045DF8 (ndisMDoDirectOidRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        enum _NDIS_SS_BUSY_REASON a3,
        void *a4,
        unsigned int a5)
{
  if ( (a1->Flags & 0x80u) != 0 )
    return ndisWdfSetBusyAsync(a1, a2, a3, a4, a5);
  else
    return ndisWdmSetBusyAsync(a1, a2, a3, a4, a5);
}
