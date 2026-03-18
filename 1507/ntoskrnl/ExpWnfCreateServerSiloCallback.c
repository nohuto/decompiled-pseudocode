/*
 * XREFs of ExpWnfCreateServerSiloCallback @ 0x140593CBC
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 *     PsAllocateMonitorContextServerSilo @ 0x140593528 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall ExpWnfCreateServerSiloCallback(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // ebx
  _QWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  result = PsAllocateMonitorContextServerSilo(ExpWnfSiloMonitor, 8LL, &v6);
  if ( (int)result >= 0 )
  {
    v3 = (__int64)v6;
    v4 = (__int64)v6;
    *v6 = 0LL;
    v5 = PsSetMonitorContextServerSilo(ExpWnfSiloMonitor, a1, 1, v4, 0LL);
    PsDereferenceMonitorContextServerSilo(v3);
    return v5;
  }
  return result;
}
