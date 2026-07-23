/*
 * XREFs of ViTargetTrackContiguousMemory @ 0x140745EF8
 * Callers:
 *     VerifierMmAllocateContiguousMemory @ 0x14075304C (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407530F4 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407531C8 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14075329C (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140753474 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ViTargetUpdateTreeAllowed @ 0x140746018 (ViTargetUpdateTreeAllowed.c)
 */

void __fastcall ViTargetTrackContiguousMemory(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  unsigned int v6; // edi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v8; // rbx
  int v9; // ebp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  _SLIST_ENTRY **v14; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a3) )
  {
    PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x61436656u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[1].Next = a2;
      *((_QWORD *)&PoolWithTag[1].Next + 1) = a3;
      v9 = 0;
      PoolWithTag[2].Next = (_SLIST_ENTRY *)a1;
      VfAvlInitializeLockContext((__int64)v15, 0);
      v10 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v15, a1, 1LL);
      if ( v10 )
      {
        v11 = v10[6];
        if ( v11 )
        {
          qword_14032BAE8 += a3;
          v12 = a3 + *(_QWORD *)(v11 + 216);
          *(_QWORD *)(v11 + 216) = v12;
          if ( *(_QWORD *)(v11 + 224) < v12 )
            *(_QWORD *)(v11 + 224) = v12;
          v13 = v11 + 232;
          v14 = *(_SLIST_ENTRY ***)(v13 + 8);
          v8->Next = (_SLIST_ENTRY *)v13;
          *((_QWORD *)&v8->Next + 1) = v14;
          if ( *v14 != (_SLIST_ENTRY *)v13 )
            __fastfail(3u);
          *v14 = v8;
          v9 = 1;
          *(_QWORD *)(v13 + 8) = v8;
        }
      }
      VfAvlCleanupLockContext((__int64)v15);
      if ( !v9 )
      {
        LOBYTE(v6) = KeGetCurrentIrql() != 2;
        VfPoolDelayFreeIfPossible(v8, v6);
      }
    }
  }
}
