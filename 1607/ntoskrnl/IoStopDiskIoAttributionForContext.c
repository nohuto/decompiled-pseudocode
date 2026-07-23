/*
 * XREFs of IoStopDiskIoAttributionForContext @ 0x1400B4FE0
 * Callers:
 *     PspIoRateEntryDeactivate @ 0x1404D3B2C (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x1404D4A40 (PspRemoveIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 */

void __fastcall IoStopDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // bl

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  RtlRbRemoveNode(&IopDiskIoAttributionTree, Node);
  Node->ParentValue = -1LL;
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v2);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&Node[6].Right);
}
