/*
 * XREFs of ExpWnfCreateServerSiloCallback @ 0x140526D50
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall ExpWnfCreateServerSiloCallback(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  void *v4; // [rsp+48h] [rbp+10h] BYREF

  result = PsAllocateMonitorContextServerSilo(ExpWnfSiloMonitor, 56LL, &v4);
  if ( (int)result >= 0 )
  {
    memset(v4, 0, 0x38uLL);
    v3 = PsSetMonitorContextServerSilo(ExpWnfSiloMonitor, a1, 1, (__int64)v4, 0LL);
    PsDereferenceMonitorContextServerSilo((__int64)v4);
    return v3;
  }
  return result;
}
