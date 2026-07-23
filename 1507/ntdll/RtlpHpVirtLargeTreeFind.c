/*
 * XREFs of RtlpHpVirtLargeTreeFind @ 0x1800EB55C
 * Callers:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

_RTL_BALANCED_NODE *__fastcall RtlpHpVirtLargeTreeFind(_RTL_BALANCED_NODE *a1, int a2)
{
  _RTL_BALANCED_NODE *Root; // rbx

  if ( a2 )
    RtlAcquireSRWLockExclusive(&stru_180144860);
  else
    RtlAcquireSRWLockShared(&stru_180144860);
  Root = Parent.Root;
  while ( Root )
  {
    if ( Root[1].Children[0] == a1 )
    {
      if ( !a2 )
        goto LABEL_15;
      RtlRbRemoveNode(&Parent, Root);
      break;
    }
    if ( Root[1].Children[0] >= a1 )
      Root = Root->Children[1];
    else
      Root = Root->Children[0];
  }
  if ( a2 )
  {
    RtlReleaseSRWLockExclusive(&stru_180144860);
    return Root;
  }
LABEL_15:
  RtlReleaseSRWLockShared(&stru_180144860);
  return Root;
}
