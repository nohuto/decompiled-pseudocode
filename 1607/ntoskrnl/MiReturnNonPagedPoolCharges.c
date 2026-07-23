/*
 * XREFs of MiReturnNonPagedPoolCharges @ 0x140097D70
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x140097B80 (MiReturnPhysicalPoolPages.c)
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 */

signed __int64 __fastcall MiReturnNonPagedPoolCharges(unsigned __int64 *a1)
{
  signed __int64 result; // rax

  if ( qword_140325228 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit((__int64)MiSystemPartition, a1[3] - a1[1]);
    return _InterlockedExchangeAdd64(&qword_140327918, -(__int64)a1[3]);
  }
  return result;
}
