/*
 * XREFs of UsbhFreeID @ 0x1C000758C
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhUpdateUxdSettings @ 0x1C0005860 (UsbhUpdateUxdSettings.c)
 *     UsbhGetSerialNumber @ 0x1C0006F9C (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0025E3C (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhGetProductIdString @ 0x1C0028D74 (UsbhGetProductIdString.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0051C5C (UsbhBuildUnknownIds.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0054CBC (UsbhRemoveAndDeletePdo.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbhFreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
