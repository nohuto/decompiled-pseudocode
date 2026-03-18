/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14002591C
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400259C0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlTableIndex @ 0x140025AB4 (ViAvlTableIndex.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  Buffer = a3;
  if ( a4 )
    v13 = a4;
  else
    v13 = *a1;
  v6 = ViAvlTableIndex(a1, a3, a3, a4, Buffer, v13);
  if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a2 + 9) |= 1u;
    *(_BYTE *)(a2 + 8) = CurrentIrql;
  }
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + a1[2], a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + a1[2]), &Buffer);
  _InterlockedDecrement64(a1 + 1);
  v8 = a1[2];
  v9 = *(_QWORD *)(v8 + v7 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + a1[2], a2);
  return v9;
}
