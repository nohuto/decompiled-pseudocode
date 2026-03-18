/*
 * XREFs of VfCheckForLookaside @ 0x14074B77C
 * Callers:
 *     ExpCheckForLookaside @ 0x140264A98 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v6; // rax
  ULONG_PTR *v7; // rax
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ViLookasideInitialized )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = (struct _KTHREAD **)&unk_140356F68;
  while ( CurrentThread != *v6 )
  {
    v6 += 8;
    if ( (__int64)v6 >= (__int64)&PcwpSynchCounterSet )
    {
      VfAvlInitializeLockContext((__int64)v8, 1);
      v7 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v8, a1, a2);
      if ( v7 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v7, a1, a2);
      VfAvlCleanupLockContext((__int64)v8);
      return 1LL;
    }
  }
  return 1LL;
}
