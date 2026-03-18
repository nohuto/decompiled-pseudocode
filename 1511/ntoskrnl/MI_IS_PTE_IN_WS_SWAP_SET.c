/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724
 * Callers:
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiAddToReservationCluster @ 0x1401091BC (MiAddToReservationCluster.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(_QWORD *a1)
{
  __int16 v1; // dx

  v1 = *(_WORD *)(qword_1403013A0[(*a1 >> 1) & 0xFLL] + 204LL);
  return (v1 & 0x10) != 0 || (*a1 & 0x1000LL) != 0 && (v1 & 0x20) != 0;
}
