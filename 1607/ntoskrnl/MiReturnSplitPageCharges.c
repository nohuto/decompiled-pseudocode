/*
 * XREFs of MiReturnSplitPageCharges @ 0x14014B990
 * Callers:
 *     MiJoinBitmapPages @ 0x1401EB324 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406648A0 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  MiReturnResidentAvailable(a1);
  result = MiReturnCommit((__int64)MiSystemPartition, a1);
  _InterlockedExchangeAdd64(&qword_1403278F0, -(__int64)a1);
  return result;
}
