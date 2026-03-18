/*
 * XREFs of MmGetSessionSchedulingGroupByProcess @ 0x14044C744
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x140142930 (PsQueryCpuQuotaInformation.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PspEstablishDfssHierarchy @ 0x140517E8C (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroupByProcess(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rax

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 72) + 32LL);
}
