/*
 * XREFs of OSNotifyCreateOperationRegionWorker @ 0x1C003DE60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008968 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C004032C (EnableDisableRegionSpacesForDevice.c)
 */

void __fastcall OSNotifyCreateOperationRegionWorker(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1[4];
  if ( *(_DWORD *)(v2 + 312) == 3 )
  {
    LOBYTE(a2) = 1;
    EnableDisableRegionSpacesForDevice(a1[4], a2);
  }
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)v2);
  ExFreePoolWithTag(a1, 0x4D706341u);
}
