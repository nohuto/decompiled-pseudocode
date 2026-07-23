/*
 * XREFs of CmpInitServerSilo @ 0x1407AE8A8
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PsRegisterSiloMonitor @ 0x1405523D8 (PsRegisterSiloMonitor.c)
 *     PsStartSiloMonitor @ 0x14055FD28 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 */

char CmpInitServerSilo()
{
  int v1; // [rsp+20h] [rbp-38h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-30h]
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 1179664;
  v2 = L"NTOS_CMP";
  memset(v3, 0, 0x20uLL);
  LOWORD(v3[0]) = 257;
  v3[1] = &v1;
  v3[2] = CmpCreateServerSiloCallback;
  v3[3] = CmpTerminateServerSiloCallback;
  if ( (int)PsRegisterSiloMonitor((__int64)v3, &CmpSiloMonitor) >= 0 )
  {
    if ( (int)PsStartSiloMonitor((__int64)CmpSiloMonitor) >= 0 )
      return 1;
    PsUnregisterSiloMonitor((unsigned int *)CmpSiloMonitor);
  }
  return 0;
}
