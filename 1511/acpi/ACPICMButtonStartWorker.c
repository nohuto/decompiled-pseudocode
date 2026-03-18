/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C001AE80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 *     ACPISetDeviceWorker @ 0x1C001A624 (ACPISetDeviceWorker.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C001AB70 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C001ADA8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInternalWaitWakeLoop @ 0x1C001AF60 (ACPIInternalWaitWakeLoop.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C001B858 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0037350 (ACPICMLidPowerStateCallBack.c)
 */

void __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rsi
  __int64 DeviceExtension; // rax
  IRP *v4; // r14
  _DWORD *v5; // rdi
  int Status; // eax
  KIRQL v7; // al
  POWER_STATE v8; // ebx
  GUID *v9; // rbx
  _BYTE *PoolWithTag; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+60h] [rbp-10h] BYREF
  signed __int32 v13; // [rsp+A0h] [rbp+30h] BYREF
  ULONG DataSize; // [rsp+A8h] [rbp+38h] BYREF
  void *DeviceRegKey; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Data; // [rsp+B8h] [rbp+48h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v13 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v4 = *(IRP **)(a1 + 40);
  v5 = (_DWORD *)DeviceExtension;
  Status = v4->IoStatus.Status;
  if ( Status >= 0 )
  {
    if ( (v5[48] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(v5, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack(v5, 0LL, 0LL);
      ACPISetDeviceWorker((__int64)v5, 1);
    }
    else
    {
      IoStatus.Status = 0;
      IoStatus.Information = 0LL;
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v8.SystemState = v5[120];
      KeReleaseSpinLock(&AcpiPowerLock, v7);
      ACPIInternalWaitWakeLoop(v1, 0, v8, 0LL, &IoStatus);
    }
    if ( (*v5 & 0x2000LL) != 0 )
    {
      v9 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !*((_QWORD *)v5 + 70) )
      {
        v13 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 9uLL, 0x53706341u);
        *((_QWORD *)v5 + 70) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[8] = 0;
          RtlStringCchPrintfA(*((NTSTRSAFE_PSTR *)v5 + 70), 9uLL, "%d", v13);
        }
      }
      if ( (int)ACPIGet(v5, 1145653319, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize) >= 0
        && IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
        ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
        RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
        v13 = _strtoui64(*((const char **)v5 + 70), 0LL, 10);
        ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v13, 4u);
        ZwClose(DeviceRegKey);
      }
    }
    else
    {
      v9 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications((ULONG_PTR)v1, (__int64)ACPICMButtonNotifyByDeviceObject, (__int64)v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v9);
  }
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 0);
}
