/*
 * XREFs of PspSetJobLimitsProcessCallback @ 0x1404ED22C
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyJobLimitsToProcess @ 0x14046A1D0 (PspApplyJobLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680194 (PspAddProcessToWorkingSetChangeList.c)
 */

__int64 __fastcall PspSetJobLimitsProcessCallback(PVOID Object, __int64 a2)
{
  if ( (*((_DWORD *)Object + 192) & 1) == 0 )
  {
    PspApplyJobLimitsToProcess((__int64)Object, *(_DWORD *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != *((_QWORD *)Object + 118) )
      PspAddProcessToWorkingSetChangeList(Object);
  }
  return 0LL;
}
