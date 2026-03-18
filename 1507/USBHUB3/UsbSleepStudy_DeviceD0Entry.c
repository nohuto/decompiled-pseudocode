/*
 * XREFs of UsbSleepStudy_DeviceD0Entry @ 0x1C0032B64
 * Callers:
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0013340 (HUBPDO_EvtDeviceD0Entry.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall UsbSleepStudy_DeviceD0Entry(__int64 a1)
{
  KIRQL v2; // al
  bool v3; // zf
  KIRQL v4; // di
  __int64 v5; // r8

  DbgPrint("UsbSleepStudy_DeviceD0Entry: Enter\r\n");
  DbgPrint("UsbSleepStudy_DeviceD0Entry: Handle %#p\r\n", (const void *)a1);
  if ( a1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&gDevicesListSpinLock);
    v3 = gIsWithinLpe == 0;
    v4 = v2;
    *(_BYTE *)(a1 + 17) = 1;
    if ( !v3 )
    {
      v5 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008];
      DbgPrint("UsbSleepStudy_DeviceD0Entry: Context %#p BlockerStartTime %llu\r\n", (const void *)a1, v5);
    }
    DbgPrint("UsbSleepStudy_DeviceD0Entry: Exit STATUS_SUCCESS Context %#p\r\n", (const void *)a1);
    KeReleaseSpinLock(&gDevicesListSpinLock, v4);
  }
  return DbgPrint("UsbSleepStudy_DeviceD0Entry: Exit Handle %#p\r\n", (const void *)a1);
}
