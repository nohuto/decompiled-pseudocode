/*
 * XREFs of MiGetPageFileReservationOffset @ 0x1401EE980
 * Callers:
 *     MiConfirmPageIsZero @ 0x14001D990 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140116654 (MiGetPageForWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPageFileReservationOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  return MiGetPteTimeStamp(*a1, a2, a3);
}
