/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x14006DCC4
 * Callers:
 *     FsRtlCancelNotify @ 0x1400C94AC (FsRtlCancelNotify.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     ExpAllocateHandleTable @ 0x1403E308C (ExpAllocateHandleTable.c)
 *     LpcExitProcess @ 0x1403E6C50 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x14041B250 (MiReturnVadQuota.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x14048D858 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x14048DEC4 (FsRtlNotifyCompleteIrp.c)
 *     ExpFreeHandleTable @ 0x1404AE2CC (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1404AE3D0 (ExpFreeTablePagedPool.c)
 *     MiDeletePhysicalProcessPages @ 0x140626D3C (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 * Callees:
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 1LL, a2);
  return result;
}
