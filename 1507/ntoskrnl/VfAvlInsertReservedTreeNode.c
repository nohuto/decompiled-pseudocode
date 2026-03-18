/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x140153FC4
 * Callers:
 *     VfTargetDriversAdd @ 0x140153EF4 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1407431E0 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407433B8 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlTableIndex @ 0x140025AB4 (ViAvlTableIndex.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400D0A24 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // r9
  __int64 v8; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = ViAvlTableIndex(a1, *a3);
  if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a2 + 9) |= 1u;
    *(_BYTE *)(a2 + 8) = CurrentIrql;
  }
  v8 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(v8 + *(_QWORD *)(a1 + 16) + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v8 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v8 + *(_QWORD *)(a1 + 16), a2);
}
