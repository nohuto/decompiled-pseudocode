/*
 * XREFs of MiReturnSplitPageCharges @ 0x14013226C
 * Callers:
 *     MiJoinBitmapPages @ 0x1401DA568 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiEliminatePageTablesOfOnes @ 0x14074A504 (MiEliminatePageTablesOfOnes.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  MiReturnResidentAvailable(a1);
  _InterlockedExchangeAdd64(&qword_1402FF3F0, a1);
  result = MiReturnCommit((__int64)MiSystemPartition, a1);
  _InterlockedExchangeAdd64(&qword_1402FF828, -(__int64)a1);
  return result;
}
