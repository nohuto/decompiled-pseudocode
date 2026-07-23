/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x1400B5034
 * Callers:
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1404D4800 (PspSetJobIoAttribution.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x14001EF10 (IopDiskIoAttributionTreeCompare.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 */

void __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  _RTL_BALANCED_NODE *Root; // rdi
  BOOLEAN v4; // bl
  KIRQL v5; // r14
  _RTL_BALANCED_NODE *v6; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  Root = IopDiskIoAttributionTree.Root;
  v4 = 0;
  v5 = v2;
  if ( IopDiskIoAttributionTree.Root )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)&Node[1], (__int64)Root) < 0 )
      {
        v6 = Root->Children[0];
        if ( !Root->Children[0] )
          break;
      }
      else
      {
        v6 = Root->Children[1];
        if ( !v6 )
        {
          v4 = 1;
          break;
        }
      }
      Root = v6;
    }
  }
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, Root, v4, Node);
  ExReleaseSpinLockExclusive(&IopDiskIoAttributionLock, v5);
}
