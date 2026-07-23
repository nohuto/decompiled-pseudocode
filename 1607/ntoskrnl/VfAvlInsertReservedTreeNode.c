/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1400825FC
 * Callers:
 *     VfTargetDriversAdd @ 0x1400824FC (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x14070DA4C (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x14070DC0C (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400826C0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140082718 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x140082734 (ViAvlTableIndex.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2, v7, v8, v6);
  v10 = 192 * v9;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v9 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 16) + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v10 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v10 + *(_QWORD *)(a1 + 16), a2);
}
