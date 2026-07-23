/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140483538
 * Callers:
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  int v3; // edx

  v1 = MiSectionControlArea(a1);
  v2 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( v3 == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    {
      if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, (unsigned int)v2, 0) )
        return 3221225626LL;
      if ( !(unsigned int)MiChargeResident(MiSystemPartition, v2, 0LL) )
      {
        MiReturnCommit((__int64)MiSystemPartition, v2);
        return 3221225626LL;
      }
    }
  }
  else
  {
    MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(*(_QWORD *)v1 + 8LL));
    if ( v2 )
      MiReturnResidentAvailable(v2);
  }
  return 0LL;
}
