/*
 * XREFs of RtlpFreeAtom @ 0x14051C1D8
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014214 (RtlAddAtomToAtomTableEx.c)
 *     RtlCreateAtomTableEx @ 0x14009CDE4 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14010CE34 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14010CFB4 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14010D200 (RtlpFreeAllAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14010D31C (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyAtomTable @ 0x14051B230 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406882B4 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
