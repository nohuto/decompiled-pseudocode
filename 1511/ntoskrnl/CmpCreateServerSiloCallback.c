/*
 * XREFs of CmpCreateServerSiloCallback @ 0x140526DB4
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall CmpCreateServerSiloCallback(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  result = PsAllocateMonitorContextServerSilo(CmpSiloMonitor, 32LL, &v5);
  if ( (int)result >= 0 )
  {
    v3 = v5;
    memset(v5, 0, 0x20uLL);
    v3[1] = v3;
    *v3 = v3;
    v3[3] = 0LL;
    *((_BYTE *)v3 + 16) = 0;
    v4 = PsSetMonitorContextServerSilo(CmpSiloMonitor, a1, 1, (__int64)v3, 0LL);
    PsDereferenceMonitorContextServerSilo((__int64)v3);
    return v4;
  }
  return result;
}
