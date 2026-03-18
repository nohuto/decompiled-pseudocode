/*
 * XREFs of ACPIDockIntfDereference @ 0x1C0034170
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

LONG_PTR __fastcall ACPIDockIntfDereference(void *a1)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
  if ( *(char *)DeviceExtension >= 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 188), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(DeviceExtension + 184) = 4;
  }
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  return ObfDereferenceObject(a1);
}
