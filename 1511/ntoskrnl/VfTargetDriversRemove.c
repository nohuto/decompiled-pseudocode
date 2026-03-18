/*
 * XREFs of VfTargetDriversRemove @ 0x140001FF8
 * Callers:
 *     VfDriverUnloadImage @ 0x1406B2000 (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x1406B2068 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1406C4510 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x1406C4584 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1406C4948 (VfPoolCheckForLeaks.c)
 */

__int64 __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _BYTE v9[16]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-40h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  if ( !VfSafeMode )
  {
    result = (unsigned int)ViTargetInitialized;
    if ( ViTargetInitialized )
    {
      v2 = *(_QWORD *)(a1 + 48);
      v3 = 0LL;
      VfAvlInitializeLockContext(v9, 0LL);
      v4 = VfAvlLookupTreeNode(&ViTargetDriversAvl, v9, v2, 1LL);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 48);
        if ( v6 )
        {
          ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v4 + 48), v2);
          VfPoolCheckForLeaks(v6);
          ViTargetRemovingCheckContiguousMemory(v6);
        }
        v7 = *(_OWORD *)(v5 + 16);
        v10[0] = *(_OWORD *)v5;
        v8 = *(_OWORD *)(v5 + 32);
        v10[1] = v7;
        P = *(PVOID *)(v5 + 48);
        v10[2] = v8;
        if ( P )
          --dword_1402DB780;
        v3 = VfAvlDeleteTreeNode(&ViTargetDriversAvl, v9, v2, 1LL);
      }
      result = VfAvlCleanupLockContext(v9);
      if ( v3 )
      {
        VfThunkRemoveTargetNotify(v10);
        if ( P )
          ExFreePoolWithTag(P, 0x44566656u);
        return VfAvlFreeNodeNoLock(&ViTargetDriversAvl, v3);
      }
    }
  }
  return result;
}
