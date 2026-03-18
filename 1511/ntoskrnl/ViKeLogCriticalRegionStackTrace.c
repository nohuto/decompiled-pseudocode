/*
 * XREFs of ViKeLogCriticalRegionStackTrace @ 0x14020BE70
 * Callers:
 *     VerifierKeEnterCriticalRegion @ 0x1406C5EF8 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1406C6090 (VerifierKeLeaveCriticalRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 */

void ViKeLogCriticalRegionStackTrace()
{
  unsigned __int64 v0; // rbx
  USHORT v1; // ax

  if ( VfKeCriticalRegionTraces )
  {
    v0 = VfKeCriticalRegionTraces
       + ((unsigned __int64)((VfKeCriticalRegionTracesLength - 1) & (unsigned int)_InterlockedIncrement(&VfKeCriticalRegionTracesIndex)) << 6);
    *(_QWORD *)v0 = KeGetCurrentThread();
    v1 = RtlCaptureStackBackTrace(0, 7u, (PVOID *)(v0 + 8), 0LL);
    if ( v1 < 7u )
      *(_QWORD *)(v0 + 8LL * v1 + 8) = 0LL;
  }
}
