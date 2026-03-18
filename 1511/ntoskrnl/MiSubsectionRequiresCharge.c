/*
 * XREFs of MiSubsectionRequiresCharge @ 0x1400ED1C4
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1400A8C00 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1400ED09C (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiSubsectionRequiresCharge(_BYTE *a1)
{
  __int64 v1; // rcx
  int *VmPartition; // rax
  int *v3; // r8

  if ( (unsigned int)MiSubsectionUsingExtents(a1) )
    return 1LL;
  MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF);
  VmPartition = MiGetVmPartition((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12]);
  if ( VmPartition == v3 )
    return 1LL;
  if ( v3 == MiSystemPartition )
    return 2LL;
  ++dword_1402FEC38;
  return 0LL;
}
