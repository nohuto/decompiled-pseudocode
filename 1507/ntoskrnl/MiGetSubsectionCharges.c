/*
 * XREFs of MiGetSubsectionCharges @ 0x1402304A8
 * Callers:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetCrossPartitionCharges @ 0x14021D2F4 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14021D8F0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r9
  unsigned int v5; // edi

  if ( !(unsigned int)MiGetCrossPartitionCharges(qword_14034E8B8, a2) )
    return 3221225773LL;
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, a2, 0) )
  {
    v5 = -1073741523;
LABEL_7:
    MiReturnCrossPartitionCharges(qword_14034E8B8, a2);
    return v5;
  }
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, a2, 0LL, v4) )
  {
    MiReturnCommit((__int64)MiSystemPartition, a2);
    v5 = -1073741801;
    goto LABEL_7;
  }
  _InterlockedExchangeAdd64(&qword_14034FA30, a2);
  return 0LL;
}
