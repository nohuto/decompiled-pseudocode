/*
 * XREFs of ACPIRootIrpQueryBusRelations @ 0x1C006AC18
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0065000 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0072C50 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDetectPdoDevices @ 0x1C0008528 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C0016AE8 (ACPIDetectDockDevices.c)
 *     AcpiCheckExternalConnection @ 0x1C006AC78 (AcpiCheckExternalConnection.c)
 */

__int64 __fastcall ACPIRootIrpQueryBusRelations(ULONG_PTR a1, __int64 a2, PVOID *a3)
{
  __int64 DeviceExtension; // rdi
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 704) )
    return 3221225485LL;
  AcpiCheckExternalConnection();
  result = ACPIDetectPdoDevices(a1, a3);
  if ( (int)result >= 0 )
    return ACPIDetectDockDevices(DeviceExtension, a3);
  return result;
}
