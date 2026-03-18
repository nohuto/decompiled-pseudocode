/*
 * XREFs of RtlpFreeAtom @ 0x1404A3DD8
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014694 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140088C44 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140088DC4 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140089010 (RtlpFreeAllAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14008912C (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x14009D5E4 (RtlCreateAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x1404A2E30 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406881D0 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1404A5FD0 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
