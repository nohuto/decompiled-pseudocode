/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140108DE8
 * Callers:
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140108DC4 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
