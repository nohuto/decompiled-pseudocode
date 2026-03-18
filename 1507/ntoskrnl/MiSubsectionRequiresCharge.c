/*
 * XREFs of MiSubsectionRequiresCharge @ 0x140077FD8
 * Callers:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiSubsectionRequiresCharge(__int64 a1)
{
  __int64 v1; // r9
  __int16 *v2; // rax
  __int16 *v3; // r8
  unsigned int v4; // r10d

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) != 0 || !*(_QWORD *)(*(_QWORD *)a1 + 64LL) )
    return 0LL;
  MiGetVmPartition((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8]);
  v2 = MiPartitionIdToPointer(*(_WORD *)(v1 + 60) & 0x3FF);
  LOBYTE(v4) = v3 != v2;
  return v4;
}
