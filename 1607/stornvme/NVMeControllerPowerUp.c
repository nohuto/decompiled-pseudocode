/*
 * XREFs of NVMeControllerPowerUp @ 0x1C00070C0
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     ControllerReset @ 0x1C000457C (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0004828 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x1C0008418 (NVMeQueuesReInit.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  char inited; // al
  __int64 v3; // r8

  *(_DWORD *)(a1 + 20) &= ~4u;
  StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
  NVMeQueuesReInit(a1);
  inited = ControllerReset(a1);
  if ( inited == 1 )
  {
    inited = NVMeControllerInitPart1(a1, 0);
    if ( inited == 1 )
    {
      LOBYTE(v3) = 1;
      inited = NVMeControllerInitPart2(a1, 0LL, v3);
    }
  }
  if ( !inited )
    NVMeControllerStartFailureEventLog(a1);
  return StorPortDebugPrint(3LL, "StorNVMe - POWER: Controller D0\n");
}
