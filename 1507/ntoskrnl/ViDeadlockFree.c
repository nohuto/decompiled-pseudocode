/*
 * XREFs of ViDeadlockFree @ 0x14075101C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x14074F508 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14074F604 (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x14074FB94 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x140750D84 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViDeadlockFree(PVOID Entry, int a2)
{
  int v2; // edx
  int v3; // edx
  PVOID v4; // rdx
  struct _NPAGED_LOOKASIDE_LIST *v5; // rcx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = Entry;
      v5 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = Entry;
      v5 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = Entry;
    v5 = &ViDeadlockResourceLookaside;
  }
  ExFreeToNPagedLookasideList(v5, v4);
}
