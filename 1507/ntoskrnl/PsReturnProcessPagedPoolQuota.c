/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1400EFD68
 * Callers:
 *     FsRtlCancelNotify @ 0x140074054 (FsRtlCancelNotify.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcSecurityDestroyProcedure @ 0x1404766CC (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14049CC90 (AlpcpCaptureMessageDataSafe.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404A65B4 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404A68A4 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x1404B93D0 (MiReturnVadQuota.c)
 *     LpcExitProcess @ 0x140504574 (LpcExitProcess.c)
 *     ExpFreeHandleTable @ 0x140508CCC (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140508DD0 (ExpFreeTablePagedPool.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 1u, a2);
  return result;
}
