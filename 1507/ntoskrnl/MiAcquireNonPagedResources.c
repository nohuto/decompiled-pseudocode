/*
 * XREFs of MiAcquireNonPagedResources @ 0x140123878
 * Callers:
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 *     MiScrubNodeLargePages @ 0x1406A97C0 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(__int16 *a1, unsigned __int64 a2)
{
  __int64 v4; // r9

  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, 0) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, 0LL, v4) )
  {
    MiReturnCommit((__int64)a1, a2);
    return 0LL;
  }
  if ( a1 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034FA40, a2);
  return 1LL;
}
