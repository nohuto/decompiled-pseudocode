/*
 * XREFs of MiGetSubsectionCharges @ 0x1401E2FC8
 * Callers:
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x1400A8C00 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1400ED09C (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x1401D948C (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x1401D98AC (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // edi

  if ( !(unsigned int)MiGetCrossPartitionCharges(qword_1402FE3F0, a2) )
    return 3221225773LL;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, a2, 0LL) )
  {
    v4 = -1073741523;
LABEL_7:
    MiReturnCrossPartitionCharges(qword_1402FE3F0, a2);
    return v4;
  }
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, a2, 0LL) )
  {
    MiReturnCommit((__int64)MiSystemPartition, a2);
    v4 = -1073741801;
    goto LABEL_7;
  }
  _InterlockedExchangeAdd64(&qword_1402FF590, a2);
  return 0LL;
}
