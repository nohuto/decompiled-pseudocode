/*
 * XREFs of MiChargeSystemImageCommitment @ 0x1403CC2F8
 * Callers:
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  int v3; // edx

  v1 = MiSectionControlArea(a1);
  v2 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( v3 != 1 )
  {
    MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(*(_QWORD *)v1 + 8LL));
    if ( v2 )
    {
      MiReturnResidentAvailable(v2);
      _InterlockedExchangeAdd64(&qword_1402FF540, v2);
    }
    return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, (unsigned int)v2, 0LL) )
  {
    if ( (unsigned int)MiChargeResident(MiSystemPartition, (unsigned int)v2, 0LL) )
    {
      _InterlockedExchangeAdd64(&qword_1402FF510, v2);
      return 0LL;
    }
    MiReturnCommit((__int64)MiSystemPartition, v2);
  }
  return 3221225626LL;
}
