/*
 * XREFs of MiChargeSystemImageCommitment @ 0x1404EDFD0
 * Callers:
 *     MiMapSystemImage @ 0x140484528 (MiMapSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
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
