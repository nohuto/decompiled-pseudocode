/*
 * XREFs of MiReturnSplitPageCharges @ 0x14014BF00
 * Callers:
 *     MiJoinBitmapPages @ 0x1401EB150 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x140664984 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(unsigned __int64 a1)
{
  unsigned __int64 result; // rax

  MiReturnResidentAvailable(a1);
  result = MiReturnCommit((__int64)MiSystemPartition, a1);
  _InterlockedExchangeAdd64(&qword_140327930, -(__int64)a1);
  return result;
}
