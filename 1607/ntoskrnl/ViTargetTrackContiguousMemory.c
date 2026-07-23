/*
 * XREFs of ViTargetTrackContiguousMemory @ 0x140710710
 * Callers:
 *     VerifierMmAllocateContiguousMemory @ 0x14071B638 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x14071B6E0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x14071B7B4 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14071B888 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x14071BA60 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012F474 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ViTargetUpdateTreeAllowed @ 0x140710818 (ViTargetUpdateTreeAllowed.c)
 */

_SLIST_ENTRY *__fastcall ViTargetTrackContiguousMemory(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  _SLIST_ENTRY *result; // rax
  _SLIST_ENTRY *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _SLIST_ENTRY **v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (_SLIST_ENTRY *)ViTargetUpdateTreeAllowed(a1, a2, a3);
  if ( (_DWORD)result )
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x61436656u);
    v7 = result;
    if ( result )
    {
      result[1].Next = a2;
      *((_QWORD *)&result[1].Next + 1) = a3;
      v8 = 0;
      result[2].Next = (_SLIST_ENTRY *)a1;
      VfAvlInitializeLockContext((__int64)v14, 0);
      v9 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v14, a1, 1LL);
      if ( v9 )
      {
        v10 = v9[7];
        if ( v10 )
        {
          qword_140300AB0 += a3;
          v11 = a3 + *(_QWORD *)(v10 + 216);
          *(_QWORD *)(v10 + 216) = v11;
          if ( *(_QWORD *)(v10 + 224) < v11 )
            *(_QWORD *)(v10 + 224) = v11;
          v12 = v10 + 232;
          v13 = *(_SLIST_ENTRY ***)(v12 + 8);
          if ( *v13 != (_SLIST_ENTRY *)v12 )
            __fastfail(3u);
          v7->Next = (_SLIST_ENTRY *)v12;
          v8 = 1;
          *((_QWORD *)&v7->Next + 1) = v13;
          *v13 = v7;
          *(_QWORD *)(v12 + 8) = v7;
        }
      }
      result = (_SLIST_ENTRY *)VfAvlCleanupLockContext((__int64)v14);
      if ( !v8 )
        return (_SLIST_ENTRY *)VfUtilFreePoolCheckIRQL(v7);
    }
  }
  return result;
}
