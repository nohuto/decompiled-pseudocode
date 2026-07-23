/*
 * XREFs of KiAbEntryUpdateOwnerTreePosition @ 0x140031DCC
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140031E44 (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall KiAbEntryUpdateOwnerTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  BOOLEAN result; // al
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v6; // al
  _RTL_BALANCED_NODE *v7; // rcx

  result = KiAbOwnerComputeCpuPriorityKey();
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
LABEL_8:
    Root = v7;
  }
  v7 = Root->Children[1];
  if ( v7 )
    goto LABEL_8;
  v6 = 1;
  return RtlRbInsertNodeEx(a2 + 3, Root, v6, Node);
}
