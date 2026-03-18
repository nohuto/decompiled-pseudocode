/*
 * XREFs of VfAvlEnumerateNodes @ 0x14074A940
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140746034 (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140749F34 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x140019F34 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400259C0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v8; // ebp
  __int64 i; // rdi
  __int64 v10; // rsi
  BOOLEAN j; // dl
  PVOID v12; // rax

  if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a2 + 9) |= 1u;
    *(_BYTE *)(a2 + 8) = CurrentIrql;
  }
  v8 = dword_14032BAD8;
  for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
  {
    v10 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_14032BAD0, a2);
    for ( j = 1; ; j = 0 )
    {
      v12 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v10 + qword_14032BAD0), j);
      if ( !v12 )
        break;
      if ( !a3(v12, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v10 + qword_14032BAD0, a2);
  }
}
