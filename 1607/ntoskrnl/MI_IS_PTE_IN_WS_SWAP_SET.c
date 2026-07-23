/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiAddToReservationCluster @ 0x140116364 (MiAddToReservationCluster.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(_QWORD *a1)
{
  return (*(_WORD *)(qword_140324E20[(unsigned __int16)*a1 >> 12] + 204LL) & 0x10) != 0
      || (*a1 & 2) != 0 && (*(_WORD *)(qword_140324E20[(unsigned __int16)*a1 >> 12] + 204LL) & 0x20) != 0;
}
