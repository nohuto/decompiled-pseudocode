/*
 * XREFs of MouseToggleWaitWakeWorker @ 0x1C0004DE0
 * Callers:
 *     MouseToggleWaitWake @ 0x1C0004CD4 (MouseToggleWaitWake.c)
 * Callees:
 *     MouseClassCreateWaitWakeIrp @ 0x1C000BCF4 (MouseClassCreateWaitWakeIrp.c)
 */

void __fastcall MouseToggleWaitWakeWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rbx
  IRP *v3; // rdi
  char v4; // r14
  unsigned __int8 v6; // si
  KIRQL v7; // al
  char v8; // cl
  IRP *v9; // rcx
  struct _DEVICE_OBJECT *v10; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int Data; // [rsp+78h] [rbp+10h] BYREF
  void *DeviceRegKey; // [rsp+80h] [rbp+18h] BYREF

  v2 = *((_QWORD *)Context + 1);
  v3 = 0LL;
  v4 = 0;
  v6 = *((_BYTE *)Context + 24) != 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 72));
  v8 = *(_BYTE *)(v2 + 345);
  if ( v6 != v8 )
  {
    v4 = 1;
    if ( v8 )
    {
      v9 = *(IRP **)(v2 + 280);
      if ( v9 )
      {
        if ( !*(_BYTE *)(v2 + 288) )
        {
          *(_BYTE *)(v2 + 288) = 1;
          v3 = v9;
        }
      }
    }
    *(_BYTE *)(v2 + 345) = v6;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 72), v7);
  if ( v4 )
  {
    v10 = *(struct _DEVICE_OBJECT **)(v2 + 24);
    Data = v6;
    if ( IoOpenDeviceRegistryKey(v10, 1u, 0x1F0000u, &DeviceRegKey) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"WaitWakeEnabled");
      ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
      ZwClose(DeviceRegKey);
    }
    if ( v6 )
      MouseClassCreateWaitWakeIrp((PVOID)v2);
  }
  if ( v3 )
    IoCancelIrp(v3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), MouseToggleWaitWakeWorker, 0x20u);
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 2));
  ExFreePoolWithTag(Context, 0);
}
