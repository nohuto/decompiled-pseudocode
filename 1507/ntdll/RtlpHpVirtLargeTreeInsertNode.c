/*
 * XREFs of RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644
 * Callers:
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8 (RtlpHpVirtLargeTreeInsert.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpVirtLargeTreeInsertNode(PRTL_BALANCED_NODE Node)
{
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v3; // al
  _RTL_BALANCED_NODE *v4; // rcx

  RtlAcquireSRWLockExclusive(&stru_180144860);
  Root = Parent.Root;
  v3 = 0;
  if ( Parent.Root )
  {
    while ( 1 )
    {
      if ( Root[1].Children[0] >= Node[1].Children[0] )
      {
        v4 = Root->Children[1];
        if ( !v4 )
        {
          v3 = 1;
          break;
        }
      }
      else
      {
        v4 = Root->Children[0];
        if ( !Root->Children[0] )
          break;
      }
      Root = v4;
    }
  }
  RtlRbInsertNodeEx(&Parent, Root, v3, Node);
  RtlReleaseSRWLockExclusive(&stru_180144860);
}
