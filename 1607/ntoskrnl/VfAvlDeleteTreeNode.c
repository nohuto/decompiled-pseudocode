/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14012EF54
 * Callers:
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x14070DA90 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEAC (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 * Callees:
 *     ViAvlNodeInitializeSessionId @ 0x14008435C (ViAvlNodeInitializeSessionId.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140084530 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140084560 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400845B8 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400845D4 (ViAvlTableIndex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *(_QWORD *)a1;
  ViAvlNodeInitializeSessionId(a1, (__int64)&Buffer);
  ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + *(_QWORD *)(a1 + 16)), &Buffer);
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + v7 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
  return v9;
}
