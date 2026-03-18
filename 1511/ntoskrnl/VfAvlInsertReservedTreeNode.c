/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x140002484
 * Callers:
 *     VfTargetDriversAdd @ 0x140002384 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1406C19B4 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1406C1B60 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140002548 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400025A0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400025BC (ViAvlTableIndex.c)
 *     RtlInsertElementGenericTableAvl @ 0x140090468 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2, v6, v7);
  v9 = 192 * v8;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v8 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(v9 + *(_QWORD *)(a1 + 16) + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v9 + *(_QWORD *)(a1 + 16), a2);
}
