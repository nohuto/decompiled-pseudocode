/*
 * XREFs of MmGetSessionSchedulingGroupByProcess @ 0x14046DD24
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x14014CE1C (PsQueryCpuQuotaInformation.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspEstablishDfssHierarchy @ 0x14054C574 (PspEstablishDfssHierarchy.c)
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
