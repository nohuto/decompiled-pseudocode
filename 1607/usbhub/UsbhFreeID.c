/*
 * XREFs of UsbhFreeID @ 0x1C00059B4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0005208 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetSerialNumber @ 0x1C0007640 (UsbhGetSerialNumber.c)
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     UsbhGetProductIdString @ 0x1C00283F4 (UsbhGetProductIdString.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C005225C (UsbhBuildUnknownIds.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0055454 (UsbhRemoveAndDeletePdo.c)
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
