/*
 * XREFs of MiRemoveFaultNode @ 0x14008AF78
 * Callers:
 *     MiLargePageFreeToZero @ 0x14008AC60 (MiLargePageFreeToZero.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 69) )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326FE0);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140326FE8, a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326FE0);
  }
}
