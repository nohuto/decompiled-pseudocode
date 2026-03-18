/*
 * XREFs of PfSnTraceBufferAllocate @ 0x140006B10
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x1400EF6D0 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11000uLL, 0x42506343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    v1[4] = 0;
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
