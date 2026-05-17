/*
 * XREFs of RtlpHpVirtHeapTableFindByHeap @ 0x1800EAEAC
 * Callers:
 *     RtlpHpVirtHeapTableFindEntry @ 0x1800EAEDC (RtlpHpVirtHeapTableFindEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpVirtHeapTableFindByHeap(__int64 a1, __int64 a2)
{
  return a2 == *(_QWORD *)(a1 + 40);
}
