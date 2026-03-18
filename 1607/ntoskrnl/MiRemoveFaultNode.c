/*
 * XREFs of MiRemoveFaultNode @ 0x14008B878
 * Callers:
 *     MiLargePageFreeToZero @ 0x14008B560 (MiLargePageFreeToZero.c)
 *     MiScrubNodeLargePageList @ 0x1401FBCA8 (MiScrubNodeLargePageList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 69) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326FA0);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140326FA8, a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326FA0);
  }
}
