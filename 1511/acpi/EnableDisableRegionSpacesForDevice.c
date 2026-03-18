/*
 * XREFs of EnableDisableRegionSpacesForDevice @ 0x1C003FDDC
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001000 (ACPIDispatchIrp.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C003DA50 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C0079740 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0079850 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C0079910 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     EnableDisableDeviceRegionSpace @ 0x1C003FD40 (EnableDisableDeviceRegionSpace.c)
 */

__int64 __fastcall EnableDisableRegionSpacesForDevice(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax

  v2 = 0;
  result = *(_DWORD *)(a1 + 612) & (unsigned int)AcpiRegisteredOpRegionMask;
  if ( (*(_DWORD *)(a1 + 612) & AcpiRegisteredOpRegionMask) != 0 )
  {
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v7 = *(_DWORD *)(i + 36);
      if ( v7 - 8 <= 1 )
      {
        if ( v7 < 0x1F )
          v8 = 1 << v7;
        else
          v8 = 0x80000000;
        if ( (v8 & *(_DWORD *)(a1 + 612)) != 0 )
        {
          v9 = EnableDisableDeviceRegionSpace(a1, v7, a2);
          if ( v9 < 0 )
            v2 = v9;
        }
      }
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v2;
  }
  return result;
}
