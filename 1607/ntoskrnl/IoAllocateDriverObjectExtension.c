/*
 * XREFs of IoAllocateDriverObjectExtension @ 0x1400B27D8
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoAllocateDriverObjectExtension(
        PDRIVER_OBJECT DriverObject,
        PVOID ClientIdentificationAddress,
        ULONG DriverObjectExtensionSize,
        PVOID *DriverObjectExtension)
{
  char v4; // si
  __int64 v8; // r15
  struct _DRIVER_OBJECT *PoolWithTag; // rax
  struct _DRIVER_OBJECT *v10; // rbx
  KIRQL v11; // r9
  struct _DRIVER_OBJECT *v12; // r8
  struct _DRIVER_OBJECT *v13; // rdx

  *DriverObjectExtension = 0LL;
  v4 = 0;
  if ( DriverObjectExtensionSize > 0xFFFFFFEF )
    return -1073741670;
  v8 = DriverObjectExtensionSize;
  PoolWithTag = (struct _DRIVER_OBJECT *)ExAllocatePoolWithTag(
                                           NonPagedPoolNx,
                                           DriverObjectExtensionSize + 16LL,
                                           0x76697244u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, v8 + 16);
  v10->DeviceObject = (PDEVICE_OBJECT)ClientIdentificationAddress;
  v11 = KeAcquireQueuedSpinLock(0xAuLL);
  v12 = DriverObject->DriverExtension[1].DriverObject;
  v13 = v12;
  if ( !v12 )
    goto LABEL_4;
  do
  {
    if ( v13->DeviceObject == ClientIdentificationAddress )
      break;
    v13 = *(struct _DRIVER_OBJECT **)&v13->Type;
  }
  while ( v13 );
  if ( !v13 )
  {
LABEL_4:
    *(_QWORD *)&v10->Type = v12;
    v4 = 1;
    DriverObject->DriverExtension[1].DriverObject = v10;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v11);
  if ( v4 )
  {
    *DriverObjectExtension = &v10->Flags;
    return 0;
  }
  else
  {
    ExFreePoolWithTag(v10, 0);
    return -1073741771;
  }
}
