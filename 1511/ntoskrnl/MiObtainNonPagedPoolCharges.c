/*
 * XREFs of MiObtainNonPagedPoolCharges @ 0x140019B68
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainNonPagedPoolCharges(unsigned __int64 a1)
{
  if ( !qword_140301528 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit(&MiSystemPartition, a1, 1LL) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
    {
      _InterlockedExchangeAdd64(&qword_1402FF498, a1);
      _InterlockedExchangeAdd64(&qword_1402FF810, a1);
      return 1LL;
    }
    ++dword_1402FE1F8;
    if ( (MiAllocationDebug & 1) != 0 )
      __debugbreak();
    MiReturnCommit(&MiSystemPartition, a1);
  }
  else
  {
    ++dword_1402FE1FC;
    if ( (MiAllocationDebug & 1) != 0 )
      __debugbreak();
  }
  return 0LL;
}
