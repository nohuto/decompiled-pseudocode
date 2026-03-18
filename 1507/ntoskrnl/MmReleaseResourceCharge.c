/*
 * XREFs of MmReleaseResourceCharge @ 0x1400D9688
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x1400D95D8 (MmChargeResources.c)
 *     HvViewMapCleanup @ 0x14055B2E4 (HvViewMapCleanup.c)
 *     HvpViewMapReleaseChargesForPinnedPages @ 0x14066362C (HvpViewMapReleaseChargesForPinnedPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MmReleaseResourceCharge(unsigned __int64 a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (a2 & 2) != 0 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        MiReturnResidentAvailable(a1);
        result = _InterlockedExchangeAdd64(&qword_14034FB50, a1);
      }
    }
    else
    {
      MiReturnResidentAvailable(a1);
      result = _InterlockedExchangeAdd64(&qword_14034FA90, a1);
    }
  }
  if ( (a2 & 1) != 0 )
    return MiReturnCommit((__int64)MiSystemPartition, a1);
  return result;
}
