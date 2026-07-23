/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14012041C (KiAbOwnerComputeCpuPriorityKey.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  BOOLEAN result; // al
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v6; // al
  _RTL_BALANCED_NODE *v7; // rcx

  result = KiAbOwnerComputeCpuPriorityKey(Node, a2);
  if ( LOBYTE(Node[2].Children[0]) == result )
    return result;
  LOBYTE(Node[2].Children[0]) = result;
  RtlRbRemoveNode(a2 + 3, Node);
  Root = a2[3].Root;
  v6 = 0;
  if ( !Root )
    return RtlRbInsertNodeEx(a2 + 3, Root, v6, Node);
  while ( SLOBYTE(Root[2].Children[0]) > SLOBYTE(Node[2].Children[0]) )
  {
    v7 = Root->Children[0];
    if ( !Root->Children[0] )
      return RtlRbInsertNodeEx(a2 + 3, Root, v6, Node);
LABEL_6:
    Root = v7;
  }
  v7 = Root->Children[1];
  if ( v7 )
    goto LABEL_6;
  v6 = 1;
  return RtlRbInsertNodeEx(a2 + 3, Root, v6, Node);
}
