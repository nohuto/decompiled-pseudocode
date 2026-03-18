/*
 * XREFs of SepRmServerSiloCreateNotify @ 0x140526CE4
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall SepRmServerSiloCreateNotify(_QWORD *a1)
{
  unsigned int v2; // ebx
  void *v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (int)PsAllocateMonitorContextServerSilo(SeRmSiloMonitor, 80LL, &v4) < 0 )
    return 3221225495LL;
  memset(v4, 0, 0x50uLL);
  v2 = PsSetMonitorContextServerSilo(SeRmSiloMonitor, a1, 1, (__int64)v4, 0LL);
  PsDereferenceMonitorContextServerSilo((__int64)v4);
  return v2;
}
