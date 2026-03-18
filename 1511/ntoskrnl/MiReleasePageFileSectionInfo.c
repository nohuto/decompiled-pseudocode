/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x1401088B0
 * Callers:
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MiGetPageFileSectionForReservation @ 0x14010880C (MiGetPageFileSectionForReservation.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140038E48 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 */

_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (_QWORD *)MiReleaseControlAreaWaiters(result);
  return result;
}
