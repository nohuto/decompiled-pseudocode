/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x1401318AC
 * Callers:
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rdx

  v2 = a2 == 1;
  v3 = 16LL;
  if ( !v2 )
    v3 = 8LL;
  return MiQueueWorkingSetRequest(MiSystemPartition, v3);
}
