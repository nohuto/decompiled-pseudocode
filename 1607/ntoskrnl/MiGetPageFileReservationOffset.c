/*
 * XREFs of MiGetPageFileReservationOffset @ 0x1401EE7AC
 * Callers:
 *     MiConfirmPageIsZero @ 0x14001D510 (MiConfirmPageIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140116BC4 (MiGetPageForWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPageFileReservationOffset(_QWORD *a1, __int64 a2, __int64 a3)
{
  return MiGetPteTimeStamp(*a1, a2, a3);
}
