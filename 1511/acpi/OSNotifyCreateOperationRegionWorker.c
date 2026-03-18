/*
 * XREFs of OSNotifyCreateOperationRegionWorker @ 0x1C003DA50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017E60 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C003FDDC (EnableDisableRegionSpacesForDevice.c)
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
