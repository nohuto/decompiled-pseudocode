/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009E3AC
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiWriteCompletePfn @ 0x14004E5A0 (MiWriteCompletePfn.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiAddToReservationCluster @ 0x140115DF4 (MiAddToReservationCluster.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(_QWORD *a1)
{
  return (*(_WORD *)(qword_140324DE0[(unsigned __int16)*a1 >> 12] + 204LL) & 0x10) != 0
      || (*a1 & 2) != 0 && (*(_WORD *)(qword_140324DE0[(unsigned __int16)*a1 >> 12] + 204LL) & 0x20) != 0;
}
