/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140115B2C
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MiGetPageFileSectionForReservation @ 0x140115A88 (MiGetPageFileSectionForReservation.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140026CE8 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x14004C4E0 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x14008F084 (MiDecrementModifiedWriteCount.c)
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
