/*
 * XREFs of MmReleaseResourceCharge @ 0x1400F8FC8
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400F8ECC (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x1400F8F18 (MmChargeResources.c)
 *     HvViewMapCleanup @ 0x1404C3A78 (HvViewMapCleanup.c)
 *     HvpViewMapReleaseChargesForPinnedPages @ 0x1405EB684 (HvpViewMapReleaseChargesForPinnedPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MmReleaseResourceCharge(unsigned __int64 a1, char a2, int a3)
{
  unsigned __int64 v4; // r11

  v4 = a1;
  if ( (a2 & 2) != 0 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        MiReturnResidentAvailable(a1);
        _InterlockedExchangeAdd64(&qword_1402FF690, v4);
      }
    }
    else
    {
      MiReturnResidentAvailable(a1);
      _InterlockedExchangeAdd64(&qword_1402FF5F0, v4);
    }
  }
  if ( (a2 & 1) != 0 )
    MiReturnCommit((__int64)MiSystemPartition, v4);
}
