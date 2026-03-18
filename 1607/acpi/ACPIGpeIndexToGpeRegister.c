/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C00201F4
 * Callers:
 *     ACPIVectorDisable @ 0x1C0003D40 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0003E00 (ACPIVectorEnable.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E8A0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0020DE0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0049954 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0057A70 (ACPIVectorClear.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0020228 (ACPIGpeValidIndex.c)
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
