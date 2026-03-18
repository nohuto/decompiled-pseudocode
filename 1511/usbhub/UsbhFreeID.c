/*
 * XREFs of UsbhFreeID @ 0x1C00058A4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhGetSerialNumber @ 0x1C00052B8 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C00069A4 (UsbhUpdateUxdSettings.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C001F3E0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhGetProductIdString @ 0x1C0027D34 (UsbhGetProductIdString.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildUnknownIds @ 0x1C0051BBC (UsbhBuildUnknownIds.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C0054E24 (UsbhRemoveAndDeletePdo.c)
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
