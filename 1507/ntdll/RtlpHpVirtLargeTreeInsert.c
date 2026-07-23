/*
 * XREFs of RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8
 * Callers:
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x180058944 (RtlpHpMetadataAlloc.c)
 *     RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644 (RtlpHpVirtLargeTreeInsertNode.c)
 */

__int64 __fastcall RtlpHpVirtLargeTreeInsert(_RTL_BALANCED_NODE *a1, _RTL_BALANCED_NODE *a2)
{
  _RTL_BALANCED_NODE *v4; // rax
  unsigned int v5; // r8d

  v4 = (_RTL_BALANCED_NODE *)RtlpHpMetadataAlloc(0x28uLL, 0);
  v5 = 0;
  if ( v4 )
  {
    v4[1].Children[1] = a2;
    v4[1].Children[0] = a1;
    RtlpHpVirtLargeTreeInsertNode(v4);
    return 1;
  }
  return v5;
}
