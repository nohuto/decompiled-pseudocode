/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1400276FC
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     MiReturnVadQuota @ 0x14042E950 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     ExpFreeHandleTable @ 0x14045DFE8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14045E0EC (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x14045FDF4 (LpcExitProcess.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404AAEB8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404ABF64 (FsRtlNotifyCompleteIrp.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404ACBE0 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 *     MiDeletePhysicalProcessPages @ 0x14065C570 (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 * Callees:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 1u, a2);
  return result;
}
