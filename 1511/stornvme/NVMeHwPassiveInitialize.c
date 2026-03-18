/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0001B70
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C00010CC (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 *     NVMePowerInitialize @ 0x1C00050D0 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)NVMeControllerInitPart2(a1, a2) )
  {
    NVMePowerInitialize(a1);
    return 1;
  }
  else
  {
    NVMeControllerStartFailureEventLog(a1);
    return 0;
  }
}
