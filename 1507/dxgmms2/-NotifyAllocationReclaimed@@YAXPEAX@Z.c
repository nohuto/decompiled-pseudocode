/*
 * XREFs of ?NotifyAllocationReclaimed@@YAXPEAX@Z @ 0x1C0050770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NotifyAllocationReclaimed(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  VIDMM_GLOBAL::NotifyAllocationReclaimed(*(VIDMM_GLOBAL **)(*((_QWORD *)a1 + 16) + 8LL), a1, 1);
}
