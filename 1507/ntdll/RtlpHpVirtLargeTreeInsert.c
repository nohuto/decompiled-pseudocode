/*
 * XREFs of RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8
 * Callers:
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180058944 (RtlpHpMetadataAlloc.c)
 *     RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644 (RtlpHpVirtLargeTreeInsertNode.c)
 */

__int64 __fastcall RtlpHpVirtLargeTreeInsert(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // r8d

  v4 = RtlpHpMetadataAlloc(0x28uLL, 0);
  v5 = 0;
  if ( v4 )
  {
    v4[4] = a2;
    v4[3] = a1;
    RtlpHpVirtLargeTreeInsertNode(v4);
    return 1;
  }
  return v5;
}
