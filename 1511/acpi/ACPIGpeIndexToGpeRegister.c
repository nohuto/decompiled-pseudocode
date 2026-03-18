/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C0008794
 * Callers:
 *     ACPIVectorDisable @ 0x1C0004740 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C00047C0 (ACPIVectorEnable.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007E9C (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00086B4 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00153A4 (ACPIGpeBuildWakeMasks.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C00389B8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0040FC0 (ACPIVectorClear.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C00087C8 (ACPIGpeValidIndex.c)
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
