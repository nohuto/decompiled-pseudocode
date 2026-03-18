/*
 * XREFs of MiReturnNonPagedPoolCharges @ 0x140098570
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x140098380 (MiReturnPhysicalPoolPages.c)
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x140101824 (MiExpandNonPagedPool.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 */

signed __int64 __fastcall MiReturnNonPagedPoolCharges(unsigned __int64 *a1)
{
  signed __int64 result; // rax

  if ( qword_1403251E8 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit((__int64)MiSystemPartition, a1[3] - a1[1]);
    return _InterlockedExchangeAdd64(&qword_1403278D8, -(__int64)a1[3]);
  }
  return result;
}
