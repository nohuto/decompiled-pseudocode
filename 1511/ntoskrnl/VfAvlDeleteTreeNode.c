/*
 * XREFs of VfAvlDeleteTreeNode @ 0x140002274
 * Callers:
 *     VfTargetDriversRemove @ 0x140001FF8 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x1406C1A28 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1406C1E30 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1406C93A0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1406C97D4 (VfCheckForResource.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140002518 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140002548 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400025A0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400025BC (ViAvlTableIndex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  Buffer = a3;
  if ( a4 )
    v14 = a4;
  else
    v14 = *a1;
  v6 = ViAvlTableIndex(a1, a3);
  ViAvlRaiseIrqlSafe(a2, v7, v6);
  v9 = 192 * v8;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v8 + a1[2], a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + a1[2]), &Buffer);
  _InterlockedDecrement64(a1 + 1);
  v10 = a1[2];
  v11 = *(_QWORD *)(v10 + v9 + 112);
  *(_QWORD *)(v10 + v9 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v9 + a1[2], a2);
  return v11;
}
