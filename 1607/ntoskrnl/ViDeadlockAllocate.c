/*
 * XREFs of ViDeadlockAllocate @ 0x140714A40
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x140713C50 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1407140E4 (VfDeadlockInitializeResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 */

PVOID __fastcall ViDeadlockAllocate(int a1)
{
  int v1; // ecx
  int v2; // ecx
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx
  PVOID v5; // rcx

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 0LL;
      v4 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = &ViDeadlockResourceLookaside;
  }
  v5 = ExAllocateFromNPagedLookasideList(v4);
  if ( !v5 )
  {
    ViDeadlockState |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)ViDeadlockGlobals + 8196);
  }
  return v5;
}
