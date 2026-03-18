/*
 * XREFs of MiAweViewRemover @ 0x14065C150
 * Callers:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140097430 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400982A0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiLocatePhysicalViewInTree @ 0x1401F015C (MiLocatePhysicalViewInTree.c)
 */

void __fastcall MiAweViewRemover(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rbx
  _QWORD *PhysicalViewInTree; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 1032);
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v4 + 16, 0LL);
  PhysicalViewInTree = MiLocatePhysicalViewInTree(
                         *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32),
                         (_QWORD *)(v4 + 32));
  RtlAvlRemoveNode((unsigned __int64 *)(v4 + 32), (__int64)PhysicalViewInTree);
  ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v4 + 16), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  ExFreePoolWithTag(PhysicalViewInTree, 0);
}
