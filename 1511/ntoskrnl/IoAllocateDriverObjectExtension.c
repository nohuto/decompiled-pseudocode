/*
 * XREFs of IoAllocateDriverObjectExtension @ 0x1400F29D8
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x1406B9368 (VerifierIoAllocateDriverObjectExtension.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
