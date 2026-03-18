/*
 * XREFs of RawInitialize @ 0x1407B9A68
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     IoRegisterFileSystem @ 0x14058FC68 (IoRegisterFileSystem.c)
 *     IoRegisterShutdownNotification @ 0x1405904B8 (IoRegisterShutdownNotification.c)
 */

NTSTATUS __fastcall RawInitialize(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\RawDisk");
  result = IoCreateDevice(DriverObject, 0, &DestinationString, 8u, 0, 0, &RawDeviceDiskObject);
  if ( result >= 0 )
  {
    DriverObject->DriverUnload = (PDRIVER_UNLOAD)RawUnload;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\RawCdRom");
    v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 3u, 0, 0, &RawDeviceCdRomObject);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Device\\RawTape");
      v3 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x20u, 0, 0, &RawDeviceTapeObject);
      if ( v3 >= 0 )
      {
        v3 = IoRegisterShutdownNotification(RawDeviceTapeObject);
        if ( v3 >= 0 )
        {
          RawDeviceDiskObject->Flags |= 0x10u;
          RawDeviceCdRomObject->Flags |= 0x10u;
          RawDeviceTapeObject->Flags |= 0x10u;
          DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[13] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[10] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[6] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[5] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[4] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)RawDispatch;
          DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)RawShutdown;
          IoRegisterFileSystem(RawDeviceDiskObject);
          IoRegisterFileSystem(RawDeviceCdRomObject);
          IoRegisterFileSystem(RawDeviceTapeObject);
          ObfReferenceObjectWithTag(RawDeviceDiskObject, 0x746C6644u);
          ObfReferenceObjectWithTag(RawDeviceCdRomObject, 0x746C6644u);
          ObfReferenceObjectWithTag(RawDeviceTapeObject, 0x746C6644u);
          qword_14032C2C8 = 0LL;
          dword_14032C2D0 = 0;
          dword_14032C2DC = 0;
          qword_14032C308 = (__int64)&RawMountedQueue;
          RawMountedQueue = (__int64)&RawMountedQueue;
          qword_14032C318 = (__int64)&RawDismountedQueue;
          RawDismountedQueue = (__int64)&RawDismountedQueue;
          qword_14032C2E8 = (__int64)&qword_14032C2E0;
          qword_14032C2E0 = (__int64)&qword_14032C2E0;
          result = 0;
          LODWORD(RawGlobalLock) = 1;
          word_14032C2D8 = 1;
          byte_14032C2DA = 6;
          return result;
        }
        IoDeleteDevice(RawDeviceTapeObject);
      }
      IoDeleteDevice(RawDeviceCdRomObject);
    }
    IoDeleteDevice(RawDeviceDiskObject);
    return v3;
  }
  return result;
}
