/*
 * XREFs of ACPIDockIntfReference @ 0x1C00783A0
 * Callers:
 *     ACPIDockIrpQueryInterface @ 0x1C00789E0 (ACPIDockIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIDockIntfReference(PVOID Object)
{
  __int64 DeviceExtension; // rdi
  char result; // al

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  ObfReferenceObject(Object);
  result = ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(char *)DeviceExtension >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 188));
  return result;
}
