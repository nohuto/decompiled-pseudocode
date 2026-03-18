/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140027B7C
 * Callers:
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     MiReturnVadQuota @ 0x14042FA80 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     ExpFreeHandleTable @ 0x14045F118 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14045F21C (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x140460F24 (LpcExitProcess.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404BF188 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404C0234 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404C0EB0 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1404C1378 (ExpAllocateHandleTable.c)
 *     MiDeletePhysicalProcessPages @ 0x14065C48C (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 * Callees:
 *     PspReturnQuota @ 0x140010AA0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 1u, a2);
  return result;
}
