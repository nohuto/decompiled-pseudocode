/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14011609C
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiGetPageFileSectionForReservation @ 0x140115FF8 (MiGetPageFileSectionForReservation.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x14008E7E4 (MiDecrementModifiedWriteCount.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
