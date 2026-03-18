/*
 * XREFs of RtlpFreeAtom @ 0x140504D9C
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x140008590 (RtlpAllocateAtomTableEntry.c)
 *     RtlAddAtomToAtomTableEx @ 0x14000FC20 (RtlAddAtomToAtomTableEx.c)
 *     RtlpDereferenceAtom @ 0x1400EE310 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1400EE398 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x14010BE40 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14010E670 (RtlDestroyLowBoxAtoms.c)
 *     RtlDestroyAtomTable @ 0x14052836C (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406CBC90 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1404D0010 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
