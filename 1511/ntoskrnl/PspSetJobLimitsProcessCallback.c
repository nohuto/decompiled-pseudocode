/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1406426CC
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140641D50 (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(_KPROCESS *Object, __int64 a2)
{
  if ( (Object[1].DirectoryTableBase & 1) == 0 )
  {
    PspApplyJobLimitsToProcess((__int64)Object, *(_DWORD *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != Object[1].Affinity.Bitmap[16] )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
