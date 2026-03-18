/*
 * XREFs of ACPIDockIntfDereference @ 0x1C0043200
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000D7F4 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

LONG_PTR __fastcall ACPIDockIntfDereference(void *a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
  if ( *(char *)(DeviceExtension + 8) >= 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 196), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 192) = 4;
  }
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  return ObfDereferenceObject(a1);
}
