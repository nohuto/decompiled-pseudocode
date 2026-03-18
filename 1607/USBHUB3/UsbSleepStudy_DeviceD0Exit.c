/*
 * XREFs of UsbSleepStudy_DeviceD0Exit @ 0x1C00337D4
 * Callers:
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013CB0 (HUBPDO_EvtDeviceD0Exit.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall UsbSleepStudy_DeviceD0Exit(__int64 a1)
{
  KIRQL v2; // al
  bool v3; // zf
  KIRQL v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  DbgPrint("UsbSleepStudy_DeviceD0Exit: Enter\r\n");
  DbgPrint("UsbSleepStudy_DeviceD0Exit: Handle %#p\r\n", (const void *)a1);
  if ( a1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&gDevicesListSpinLock);
    v3 = gIsIdleResiliencyEngaged == 0;
    v4 = v2;
    *(_BYTE *)(a1 + 17) = 0;
    if ( !v3 )
    {
      v5 = MEMORY[0xFFFFF78000000008];
      v6 = *(_QWORD *)(a1 + 24);
      v7 = MEMORY[0xFFFFF78000000008] - v6;
      *(_QWORD *)(a1 + 32) += MEMORY[0xFFFFF78000000008] - v6;
      DbgPrint(
        "UsbSleepStudy_DeviceD0Exit: Context %#p currentTime %llu BlockerStartTime %llu\r\n",
        (const void *)a1,
        v5,
        v6);
      DbgPrint(
        "UsbSleepStudy_DeviceD0Exit: Context %#p timeSinceLastStateChange %llu BlockerTotalTime %llu\r\n",
        (const void *)a1,
        v7,
        *(_QWORD *)(a1 + 32));
    }
    DbgPrint("UsbSleepStudy_DeviceD0Exit: Exit STATUS_SUCCESS Context %#p\r\n", (const void *)a1);
    KeReleaseSpinLock(&gDevicesListSpinLock, v4);
  }
  return DbgPrint("UsbSleepStudy_DeviceD0Exit: Exit Handle %#p\r\n", (const void *)a1);
}
