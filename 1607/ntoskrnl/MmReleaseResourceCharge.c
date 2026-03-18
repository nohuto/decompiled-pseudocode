/*
 * XREFs of MmReleaseResourceCharge @ 0x140003CD8
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140003C90 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140003D14 (MmChargeResources.c)
 *     HvViewMapCleanup @ 0x1404EEEA8 (HvViewMapCleanup.c)
 *     HvpViewMapReleaseChargesForPinnedPages @ 0x140610128 (HvpViewMapReleaseChargesForPinnedPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MmReleaseResourceCharge(__int64 a1, char a2, unsigned int a3)
{
  char v3; // r11
  __int64 v4; // r10
  __int64 result; // rax

  v3 = a2;
  v4 = a1;
  if ( (a2 & 2) != 0 && a3 <= 1 )
    result = MiReturnResidentAvailable(a1);
  if ( (v3 & 1) != 0 )
    return MiReturnCommit(&MiSystemPartition, v4);
  return result;
}
