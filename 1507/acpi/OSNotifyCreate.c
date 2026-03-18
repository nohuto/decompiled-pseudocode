/*
 * XREFs of OSNotifyCreate @ 0x1C000B330
 * Callers:
 *     <none>
 * Callees:
 *     OSNotifyCreateProcessor @ 0x1C00072FC (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A110 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C000B8EC (OSNotifyCreateDevice.c)
 *     OSNotifyCreateThermalZone @ 0x1C0021B20 (OSNotifyCreateThermalZone.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C0034E20 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0034F00 (ACPIBuildPowerResourceRequest.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  KIRQL v4; // si
  int v5; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = a1 - 6;
  if ( v5 )
  {
    v7 = v5 - 4;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            OSNotifyCreateThermalZone(a2, 0LL);
        }
        else
        {
          OSNotifyCreateProcessor(a2, 0LL);
        }
      }
      else if ( (int)ACPIBuildPowerResourceExtension(a2, &v10) >= 0 )
      {
        ACPIBuildPowerResourceRequest(v10);
      }
    }
    else
    {
      OSNotifyCreateOperationRegion(a2);
    }
  }
  else
  {
    OSNotifyCreateDevice(a2);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  return 0LL;
}
