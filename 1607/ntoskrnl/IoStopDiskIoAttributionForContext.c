/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1400B71B8
 * Callers:
 *     PspIoRateEntryDeactivate @ 0x1404F1A38 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x1404F1AB0 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1404F22AC (PspRemoveIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode((unsigned __int64 *)&IopDiskIoAttributionTree, &a1->Count);
  a1[2].Count = -1LL;
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v2);
  ExWaitForRundownProtectionRelease(a1 + 19);
}
