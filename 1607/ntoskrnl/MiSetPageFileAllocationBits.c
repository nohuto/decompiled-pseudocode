/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140111E2C
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
