/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14010B068
 * Callers:
 *     MiTryToAcquireExpansionLockAtDpc @ 0x14010B044 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401470C4 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  a2[1] = a1;
  return KxTryToAcquireQueuedSpinLock(a2, a1);
}
