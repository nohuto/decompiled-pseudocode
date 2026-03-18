/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1406C4C14
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406C42F8 (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(_KPROCESS *Object, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (Object[1].DirectoryTableBase & 1) == 0 )
  {
    PspApplyJobLimitsToProcess((__int64)Object, *(_DWORD *)(a2 + 8), a3, a4);
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != Object[1].Affinity.Bitmap[16] )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
