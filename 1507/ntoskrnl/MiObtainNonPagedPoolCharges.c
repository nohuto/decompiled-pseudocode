/*
 * XREFs of MiObtainNonPagedPoolCharges @ 0x140125C58
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainNonPagedPoolCharges(unsigned __int64 a1)
{
  __int64 v2; // r9

  if ( !qword_140355368 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)MiSystemPartition, a1, 1) )
  {
    if ( (unsigned int)MiChargeResident(MiSystemPartition, a1, 0LL, v2) )
    {
      _InterlockedExchangeAdd64(&qword_14034F918, a1);
      _InterlockedExchangeAdd64(&qword_14034FCD0, a1);
      return 1LL;
    }
    ++dword_14034E6B0;
    MiReturnCommit((__int64)MiSystemPartition, a1);
  }
  else
  {
    ++dword_14034E6B4;
  }
  return 0LL;
}
