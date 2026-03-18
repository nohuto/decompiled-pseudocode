/*
 * XREFs of RtlpFreeAtom @ 0x1404603BC
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140099C4C (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x140099D18 (RtlAddAtomToAtomTableEx.c)
 *     RtlpDereferenceAtom @ 0x140099FC4 (RtlpDereferenceAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14009A04C (RtlpAllocateAtomTableEntry.c)
 *     RtlpFreeAllAtom @ 0x14009A140 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x14009A2A8 (RtlCreateAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x14045F99C (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140648C0C (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
