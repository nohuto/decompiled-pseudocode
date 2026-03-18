/*
 * XREFs of MiReleaseNonPagedResources @ 0x1400FC2A8
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiDeleteProcessShadow @ 0x1402252C0 (MiDeleteProcessShadow.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 *     MiScrubNodeLargePages @ 0x1406A97C0 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (__int16 *)a1 == MiSystemPartition )
  {
    MiReturnResidentAvailable(a2);
    _InterlockedExchangeAdd64(&qword_14034FA48, a2);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), a2);
  }
}
