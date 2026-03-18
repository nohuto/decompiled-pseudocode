/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C0008154
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0008074 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0014474 (ACPIGpeBuildWakeMasks.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0037DC8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0041480 (ACPIVectorClear.c)
 *     ACPIVectorDisable @ 0x1C0041620 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0041780 (ACPIVectorEnable.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0008188 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // r9
  unsigned int v4; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1, a2, a3, (unsigned int)a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v3, 0LL, 0LL);
  v4 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)v3 >= v4 )
    return (((unsigned int)v3 - v4) >> 3) + *((unsigned __int16 *)AcpiInformation + 43);
  else
    return (unsigned int)v3 >> 3;
}
