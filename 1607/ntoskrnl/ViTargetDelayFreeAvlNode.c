/*
 * XREFs of ViTargetDelayFreeAvlNode @ 0x1400B5EEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViTargetDelayFreeAvlNode(struct _RTL_AVL_TABLE *Table, _RTL_BALANCED_LINKS *Buffer)
{
  Table[1].BalancedRoot.LeftChild = Buffer;
}
