/*
 * XREFs of MiGetSubsectionCharges @ 0x1401F50F8
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14002CE80 (MiReferenceActiveSubsection.c)
 *     MiCreatePrototypePtes @ 0x14008FE84 (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x1400FCA18 (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1401F1AF0 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1401F1F3C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx

  if ( !(unsigned int)MiGetCrossPartitionCharges(qword_1403266B8, a2) )
    return 3221225773LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, a2, 0) )
  {
    v4 = -1073741523;
LABEL_7:
    MiReturnCrossPartitionCharges(qword_1403266B8, a2);
    return v4;
  }
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, a2, 0LL) )
  {
    MiReturnCommit((__int64)MiSystemPartition, a2);
    v4 = -1073741801;
    goto LABEL_7;
  }
  return 0LL;
}
