/*
 * XREFs of RaDriverAddDevice @ 0x1C000A930
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterHack @ 0x1C000AAD8 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C000AC10 (RaidCreateAdapter.c)
 *     RaidCreateDeviceName @ 0x1C000AEAC (RaidCreateDeviceName.c)
 *     RaidDeleteAdapter @ 0x1C0025F90 (RaidDeleteAdapter.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 */

__int64 __fastcall RaDriverAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  NTSTATUS v4; // r14d
  _QWORD *DeviceExtension; // rbx
  KSPIN_LOCK *DriverObjectExtension; // rdi
  PDEVICE_OBJECT v7; // rax
  struct _DEVICE_OBJECT *v8; // rsi
  int v9; // eax
  KSPIN_LOCK v10; // rdx
  char *v11; // rcx
  struct _UNICODE_STRING DeviceName; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+B0h] [rbp+40h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+B8h] [rbp+48h] BYREF

  DeviceName.Length = 0;
  *(_QWORD *)&DeviceName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DeviceName.Buffer + 2) = 0;
  HIWORD(DeviceName.Buffer) = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_588df3de9d7ce21b92c99d72e0394151_Traceguids,
      DriverObject,
      DeviceObject);
  }
  SourceDevice = 0LL;
  *(_DWORD *)&DeviceName.Length = 0;
  DeviceName.Buffer = 0LL;
  RaidCreateDeviceName(DeviceObject, &DeviceName, &v15);
  v4 = IoCreateDevice(DriverObject, 48 * RaidLogListSize + 5632, &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( v4 >= 0 )
  {
    DeviceExtension = SourceDevice->DeviceExtension;
    RaidCreateAdapter(DeviceExtension);
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(DriverObject, DriverEntry);
    v7 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
    v8 = v7;
    if ( v7 )
    {
      v9 = RaidInitializeAdapter(
             (int)DeviceExtension,
             (int)SourceDevice,
             (int)DriverObjectExtension,
             (int)v7,
             DeviceObject,
             (__int64)&DeviceName,
             v15);
      DeviceName.Buffer = 0LL;
      v4 = v9;
      if ( v9 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
        v10 = DriverObjectExtension[7];
        v11 = (char *)(DeviceExtension + 8);
        DeviceExtension[8] = v10;
        DeviceExtension[9] = DriverObjectExtension + 7;
        if ( *(KSPIN_LOCK **)(v10 + 8) != DriverObjectExtension + 7 )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = v11;
        DriverObjectExtension[7] = (KSPIN_LOCK)v11;
        ++*((_DWORD *)DriverObjectExtension + 18);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        RaidAdapterHack(DeviceExtension);
        SourceDevice->Flags |= 0x10u;
        SourceDevice->Flags &= ~0x80u;
        goto LABEL_8;
      }
    }
    else
    {
      v4 = -1073741823;
    }
    if ( DeviceExtension )
    {
      if ( v8 )
        IoDetachDevice(v8);
      RaidDeleteAdapter(DeviceExtension);
      IoDeleteDevice(SourceDevice);
    }
  }
LABEL_8:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0);
  return (unsigned int)v4;
}
