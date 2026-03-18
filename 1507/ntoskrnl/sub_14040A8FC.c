/*
 * XREFs of sub_14040A8FC @ 0x14040A8FC
 * Callers:
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PnpGetSystemPdoList @ 0x14040A9A0 (PnpGetSystemPdoList.c)
 *     sub_14040AA68 @ 0x14040AA68 (sub_14040AA68.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall sub_14040A8FC(__int64 a1)
{
  void *v2; // rbx
  NTSTATUS DeviceObjectPointer; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
    v2 = (void *)sub_14040AA68(DeviceObject);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( !v2 )
      return (unsigned int)-1073741632;
    DeviceObjectPointer = PnpGetSystemPdoList(v2, a1);
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)DeviceObjectPointer;
}
