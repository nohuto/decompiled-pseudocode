/*
 * XREFs of MiSubsectionRequiresCharge @ 0x1400FC9C4
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14002CE80 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1400FCA18 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiSubsectionUsingExtents @ 0x1400E7F14 (MiSubsectionUsingExtents.c)
 */

__int64 __fastcall MiSubsectionRequiresCharge(unsigned __int8 *a1)
{
  __int64 v1; // rcx
  int *v2; // rax
  int *v3; // r8

  if ( (unsigned int)MiSubsectionUsingExtents(a1) )
    return 1LL;
  MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF);
  v2 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback));
  if ( v2 == v3 )
    return 1LL;
  if ( v3 == MiSystemPartition )
    return 2LL;
  ++dword_140327008;
  return 0LL;
}
