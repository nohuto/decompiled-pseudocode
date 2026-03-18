/*
 * XREFs of MiAweViewRemover @ 0x1406A5CE0
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiLocatePhysicalViewInTree @ 0x140224844 (MiLocatePhysicalViewInTree.c)
 */

void __fastcall MiAweViewRemover(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rbx
  _QWORD *PhysicalViewInTree; // rdi
  __int16 v8; // cx

  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1032);
  --CurrentThread->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive(v6 + 8, 0LL, a3, a4);
  PhysicalViewInTree = MiLocatePhysicalViewInTree(
                         *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32),
                         (_QWORD *)(v6 + 24));
  RtlAvlRemoveNode((unsigned __int64 *)(v6 + 24), (__int64)PhysicalViewInTree);
  ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v6 + 8), 0LL);
  v8 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v8;
  if ( !v8 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  ExFreePoolWithTag(PhysicalViewInTree, 0);
}
