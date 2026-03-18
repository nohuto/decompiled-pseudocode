/*
 * XREFs of MiReturnNonPagedPoolCharges @ 0x1400D6B5C
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiReturnPhysicalPoolPages @ 0x1400D6950 (MiReturnPhysicalPoolPages.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

signed __int64 __fastcall MiReturnNonPagedPoolCharges(unsigned __int64 *a1)
{
  signed __int64 result; // rax

  if ( qword_140301528 )
  {
    MiReturnResidentAvailable(*a1);
    _InterlockedExchangeAdd64(&qword_1402FF4A0, *a1);
    MiReturnCommit((__int64)MiSystemPartition, a1[3] - a1[1]);
    return _InterlockedExchangeAdd64(&qword_1402FF810, -(__int64)a1[3]);
  }
  return result;
}
