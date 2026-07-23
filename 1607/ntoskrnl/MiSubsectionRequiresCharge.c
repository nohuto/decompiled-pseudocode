/*
 * XREFs of MiSubsectionRequiresCharge @ 0x1400FA744
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14002CA00 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1400FA798 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
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
  ++dword_140327048;
  return 0LL;
}
