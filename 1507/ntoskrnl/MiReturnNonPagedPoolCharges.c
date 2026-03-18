/*
 * XREFs of MiReturnNonPagedPoolCharges @ 0x14010E528
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiReturnPhysicalPoolPages @ 0x14010E300 (MiReturnPhysicalPoolPages.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

signed __int64 __fastcall MiReturnNonPagedPoolCharges(unsigned __int64 *a1)
{
  signed __int64 result; // rax

  if ( qword_140355368 )
  {
    MiReturnResidentAvailable(*a1);
    _InterlockedExchangeAdd64(&qword_14034F920, *a1);
    MiReturnCommit((__int64)MiSystemPartition, a1[3] - a1[1]);
    return _InterlockedExchangeAdd64(&qword_14034FCD0, -(__int64)a1[3]);
  }
  return result;
}
