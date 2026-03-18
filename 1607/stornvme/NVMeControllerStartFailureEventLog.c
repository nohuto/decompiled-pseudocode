/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C0004828
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0004E80 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C00070C0 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C00072C8 (NVMeControllerReset.c)
 * Callees:
 *     memset @ 0x1C0003180 (memset.c)
 */

__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF

  memset((char *)v3 + 4, 0, 0x44uLL);
  HIDWORD(v3[1]) = 0;
  v3[0] = 0x4800000100LL;
  BYTE4(v3[3]) = 1;
  v3[4] = 0x200000006LL;
  LODWORD(v3[5]) = 4;
  v3[6] = a1 + 24;
  return StorPortExtendedFunction(16LL, a1, v3);
}
