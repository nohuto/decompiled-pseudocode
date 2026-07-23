/*
 * XREFs of VerifierExDeleteResourceLite @ 0x14074BFA0
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExDeleteResourceLite(struct _ERESOURCE *a1)
{
  unsigned __int64 v1; // rbx
  _SLIST_ENTRY *v3; // rsi
  __int64 result; // rax
  struct _ERESOURCE *v5; // rdx
  struct _ERESOURCE *v6; // rdi
  unsigned __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( ViResourceInitialized && qword_1407631B0 )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v8, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v8, (unsigned __int64)a1, 0LL) )
    {
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v8, (__int64)a1, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, (ULONG_PTR)a1, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v8);
    if ( v3 )
    {
      if ( dword_1407631C4 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfPoolDelayFreeIfPossible(v3, KeGetCurrentIrql() != 2);
    }
  }
  LODWORD(result) = pXdvExDeleteResourceLite(a1);
  if ( (MmVerifierData & 0x800) != 0 && (int)result >= 0 )
  {
    v5 = a1;
    v6 = a1 + 1;
    v7 = (unsigned __int64)((char *)v6 - (char *)v5 + 7) >> 3;
    if ( v5 > v6 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        ++v1;
        v5->SystemResourcesList.Flink = (struct _LIST_ENTRY *)MmBadPointer;
        v5 = (struct _ERESOURCE *)((char *)v5 + 8);
      }
      while ( v1 < v7 );
    }
  }
  return (unsigned int)result;
}
