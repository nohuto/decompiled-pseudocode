/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0004E80
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0004828 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 *     NVMePowerInitialize @ 0x1C0007AD4 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  unsigned __int64 v3; // rcx

  StorPortExtendedFunction(55LL, a1, 0LL);
  if ( (unsigned __int8)NVMeControllerInitPart2(a1) )
  {
    v3 = *(unsigned __int16 *)(a1 + 230) * (unsigned __int64)*(unsigned __int16 *)(a1 + 232);
    if ( v3 > 0x400 )
    {
      if ( v3 > 0xFFFFFFFF )
        LODWORD(v3) = -1;
      StorPortExtendedFunction(80LL, a1, (unsigned int)v3);
    }
    NVMePowerInitialize(a1);
    return 1;
  }
  else
  {
    NVMeControllerStartFailureEventLog(a1);
    return 0;
  }
}
