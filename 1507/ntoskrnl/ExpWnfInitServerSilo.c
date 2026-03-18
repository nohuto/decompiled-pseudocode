/*
 * XREFs of ExpWnfInitServerSilo @ 0x1405934AC
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 */

char ExpWnfInitServerSilo()
{
  _QWORD v1[6]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  WORD1(v1[0]) |= 1u;
  v1[1] = ExpWnfCreateServerSiloCallback;
  LOWORD(v1[0]) = 1;
  v1[2] = ExpWnfTerminateServerSiloCallback;
  if ( (int)PsRegisterMonitorServerSilo(0LL, L"NTOS_EX_WNF") >= 0 )
  {
    if ( (int)PsStartMonitorServerSilo(ExpWnfSiloMonitor) >= 0 )
      return 1;
    PsUnregisterMonitorServerSilo((PVOID)ExpWnfSiloMonitor);
  }
  return 0;
}
