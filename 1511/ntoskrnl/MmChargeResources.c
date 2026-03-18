/*
 * XREFs of MmChargeResources @ 0x1400F8F18
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400F8ECC (SmAcquireReleaseCharges.c)
 *     HvpViewMapAcquireChargesForPinnedPages @ 0x1405EB41C (HvpViewMapAcquireChargesForPinnedPages.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MmReleaseResourceCharge @ 0x1400F8FC8 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall MmChargeResources(unsigned __int64 a1, char a2, unsigned int a3, char a4)
{
  unsigned int v4; // edi
  unsigned int v9; // ebx

  v4 = 0;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, a1, 0LL) )
      return 0;
    v4 = 2;
    if ( a3 )
    {
      if ( a3 == 1 )
        _InterlockedExchangeAdd64(&qword_1402FF688, a1);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_1402FF5E8, a1);
    }
  }
  v9 = 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, a1, (a4 & 1) != 0) )
    v9 = 0;
  else
    v4 = 0;
  if ( v4 )
    MmReleaseResourceCharge(a1, v4, a3);
  return v9;
}
