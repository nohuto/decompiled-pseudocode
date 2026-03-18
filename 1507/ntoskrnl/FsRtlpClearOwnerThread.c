/*
 * XREFs of FsRtlpClearOwnerThread @ 0x1400725F8
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1400726F0 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlUninitializeOplock @ 0x140122A5C (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140133958 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E2F5C (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14066D2C4 (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall FsRtlpClearOwnerThread(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  if ( a2 )
  {
    v3 = *(void **)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
  }
  else
  {
    v3 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( v3 )
    ObDereferenceObjectDeferDeleteWithTag(v3, 0x746C6644u);
}
