/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x140035614
 * Callers:
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(PRTL_BALANCED_NODE Node, _RTL_RB_TREE *a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rdi
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v6; // al
  _RTL_BALANCED_NODE *v7; // rcx

  result = ((_BYTE *)&Node[8].Left - (unsigned __int16)(16 * LOBYTE(Node[1].Children[0])))[3];
  if ( result > 15 )
    result = 15;
  if ( LOBYTE(Node[2].Children[0]) == result )
    return result;
  v4 = a2 + 4;
  LOBYTE(Node[2].Children[0]) = result;
  RtlRbRemoveNode(a2 + 4, Node);
  Root = v4->Root;
  v6 = 0;
  if ( !v4->Root )
    return RtlRbInsertNodeEx(v4, Root, v6, Node);
  while ( SLOBYTE(Root[2].Children[0]) < SLOBYTE(Node[2].Children[0]) )
  {
    v7 = Root->Children[0];
    if ( !Root->Children[0] )
      return RtlRbInsertNodeEx(v4, Root, v6, Node);
LABEL_10:
    Root = v7;
  }
  v7 = Root->Children[1];
  if ( v7 )
    goto LABEL_10;
  v6 = 1;
  return RtlRbInsertNodeEx(v4, Root, v6, Node);
}
