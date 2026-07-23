/*
 * XREFs of MmChargeResources @ 0x140003E88
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140003E04 (SmAcquireReleaseCharges.c)
 *     HvpViewMapAcquireChargesForPinnedPages @ 0x14060FF74 (HvpViewMapAcquireChargesForPinnedPages.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140003E4C (MmReleaseResourceCharge.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall MmChargeResources(__int64 a1, char a2, unsigned int a3, char a4)
{
  int v4; // edi
  unsigned int v9; // ebx

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
      return 0;
    v4 = 2;
  }
  v9 = 1;
  if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(&MiSystemPartition, a1, (a4 & 1) != 0) )
    v4 = 0;
  else
    v9 = 0;
  if ( v4 )
    MmReleaseResourceCharge(a1, v4, a3);
  return v9;
}
