/*
 * XREFs of ACPIBusIrpQueryBusRelations @ 0x1C0072D48
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C0065790 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8 (ACPIFilterRemoveNonPresentDevices.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rbp
  int v6; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 704) )
    return 3221225485LL;
  v6 = ACPIDetectPdoDevices(a1, a3);
  if ( v6 >= 0 )
  {
    ACPIFilterRemoveNonPresentDevices(DeviceExtension, *a3);
    ACPIDetectFilterDevices(a1, (__int64)*a3);
  }
  return (unsigned int)v6;
}
