/*
 * XREFs of VfAvlEnumerateNodes @ 0x1406C7F3C
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x1406C43B0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1406C4770 (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1406C7530 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140002518 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140002548 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400025A0 (ViAvlRaiseIrqlSafe.c)
 *     RtlEnumerateGenericTableAvl @ 0x1400ED970 (RtlEnumerateGenericTableAvl.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  ViAvlRaiseIrqlSafe(a2);
  v7 = dword_1402DB778;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_1402DB770, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_1402DB770), j);
      if ( !v11 )
        break;
      if ( !a3(v11, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_1402DB770, a2);
  }
}
