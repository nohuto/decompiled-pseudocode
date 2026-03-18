/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140576D98
 * Callers:
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // r9

  v1 = MiSectionControlArea(a1);
  v2 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( v3 != 1 )
  {
    MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(*(_QWORD *)v1 + 8LL));
    if ( v2 )
    {
      MiReturnResidentAvailable(v2);
      _InterlockedExchangeAdd64(&qword_14034F9C0, v2);
    }
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (unsigned int)MiChargeCommit((__int64)MiSystemPartition, (unsigned int)v2, 0) )
  {
    if ( (unsigned int)MiChargeResident(MiSystemPartition, (unsigned int)v2, 0LL, v4) )
    {
      _InterlockedExchangeAdd64(&qword_14034F990, v2);
      return 0LL;
    }
    MiReturnCommit((__int64)MiSystemPartition, v2);
  }
  return 3221225626LL;
}
