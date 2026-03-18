/*
 * XREFs of CmpInitServerSilo @ 0x140526568
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x1405268B8 (PsStartMonitorServerSilo.c)
 *     PsUnregisterMonitorServerSilo @ 0x14063FD40 (PsUnregisterMonitorServerSilo.c)
 */

char CmpInitServerSilo()
{
  _QWORD v1[6]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  WORD1(v1[0]) |= 1u;
  v1[1] = CmpCreateServerSiloCallback;
  LOWORD(v1[0]) = 1;
  v1[2] = CmpTerminateServerSiloCallback;
  if ( (int)PsRegisterMonitorServerSilo(0LL, L"NTOS_CMP") >= 0 )
  {
    if ( (int)PsStartMonitorServerSilo(CmpSiloMonitor) >= 0 )
      return 1;
    PsUnregisterMonitorServerSilo((PVOID)CmpSiloMonitor);
  }
  return 0;
}
