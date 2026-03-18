/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x14011B79C
 * Callers:
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // rdx

  v4 = a2 == 1;
  v5 = 16LL;
  if ( !v4 )
    v5 = 8LL;
  return MiQueueWorkingSetRequest(MiSystemPartition, v5, a3, a4);
}
