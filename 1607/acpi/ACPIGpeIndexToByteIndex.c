/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C0006E78
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIVectorDisconnect @ 0x1C0057C50 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C0057E84 (ACPIVectorInstall.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0020228 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // r9
  unsigned int v4; // ecx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1, a2, a3, (unsigned int)a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v3, 1uLL, 0LL);
  v4 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)v3 >= v4 )
    return (unsigned int)v3 + *((unsigned __int16 *)AcpiInformation + 43) - v4;
  else
    return (unsigned int)v3;
}
