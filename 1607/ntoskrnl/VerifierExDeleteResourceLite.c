/*
 * XREFs of VerifierExDeleteResourceLite @ 0x140717D6C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012F474 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExDeleteResourceLite(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  _SLIST_ENTRY *v3; // rsi
  __int64 result; // rax
  PVOID *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( ViResourceInitialized && qword_14072C1E8 )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)v8, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v8, a1, 0LL) )
    {
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v8, a1, 0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, a1, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v8);
    if ( v3 )
    {
      if ( dword_14072C200 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
  LODWORD(result) = pXdvExDeleteResourceLite(a1);
  if ( (MmVerifierData & 0x800) != 0 && (int)result >= 0 )
  {
    v5 = (PVOID *)a1;
    v6 = a1 + 104;
    v7 = (v6 - (unsigned __int64)v5 + 7) >> 3;
    if ( (unsigned __int64)v5 > v6 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        ++v1;
        *v5++ = MmBadPointer;
      }
      while ( v1 < v7 );
    }
  }
  return (unsigned int)result;
}
