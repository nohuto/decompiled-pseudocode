/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x14074812C
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeEnterCriticalRegion @ 0x14004E6B0 (KeEnterCriticalRegion.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void VerifierKeEnterCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v1; // rbx
  USHORT v2; // ax

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11AuLL, CurrentIrql, 0LL, 0LL);
  }
  pXdvKeEnterCriticalRegion();
  if ( VfKeCriticalRegionTraces )
  {
    v1 = VfKeCriticalRegionTraces
       + ((unsigned __int64)((VfKeCriticalRegionTracesLength - 1) & (unsigned int)_InterlockedIncrement(&VfKeCriticalRegionTracesIndex)) << 6);
    *(_QWORD *)v1 = KeGetCurrentThread();
    v2 = RtlCaptureStackBackTrace(0, 7u, (PVOID *)(v1 + 8), 0LL);
    if ( v2 < 7u )
      *(_QWORD *)(v1 + 8LL * v2 + 8) = 0LL;
  }
}
