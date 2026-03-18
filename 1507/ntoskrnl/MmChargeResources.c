/*
 * XREFs of MmChargeResources @ 0x1400D95D8
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     HvpViewMapAcquireChargesForPinnedPages @ 0x1406633C4 (HvpViewMapAcquireChargesForPinnedPages.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MmReleaseResourceCharge @ 0x1400D9688 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall MmChargeResources(unsigned __int64 a1, char a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  char v5; // r15
  unsigned int v9; // ebx

  v4 = 0;
  v5 = a4;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(MiSystemPartition, a1, 0LL, a4) )
      return 0;
    v4 = 2;
    if ( a3 )
    {
      if ( a3 == 1 )
        _InterlockedExchangeAdd64(&qword_14034FB48, a1);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_14034FA88, a1);
    }
  }
  v9 = 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, a1, (v5 & 1) != 0) )
    v9 = 0;
  else
    v4 = 0;
  if ( v4 )
    MmReleaseResourceCharge(a1, v4, a3);
  return v9;
}
