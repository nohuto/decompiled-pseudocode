/*
 * XREFs of IoQueryDeviceDescription @ 0x140540064
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 */

NTSTATUS __stdcall IoQueryDeviceDescription(
        PINTERFACE_TYPE BusType,
        PULONG BusNumber,
        PCONFIGURATION_TYPE ControllerType,
        PULONG ControllerNumber,
        PCONFIGURATION_TYPE PeripheralType,
        PULONG PeripheralNumber,
        PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
        PVOID Context)
{
  int BusDescription; // ebx
  ULONG v10; // [rsp+20h] [rbp-49h]
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v14[8]; // [rsp+60h] [rbp-9h] BYREF
  int v15; // [rsp+B0h] [rbp+47h] BYREF

  v15 = -1;
  if ( !BusType )
    return -1073741822;
  v14[4] = PeripheralType;
  v14[5] = PeripheralNumber;
  v14[6] = CalloutRoutine;
  v14[0] = BusType;
  v14[1] = BusNumber;
  v14[2] = ControllerType;
  v14[7] = Context;
  v14[3] = ControllerNumber;
  *(_DWORD *)&Destination.Length = 0x8000000;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x4E526F49u);
  if ( !Destination.Buffer )
    return -1073741670;
  RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineHardwareDescriptionSystemName);
  LOBYTE(v10) = 0;
  BusDescription = IopOpenRegistryKey(&Handle, 0LL, &Destination, 0x20019u, v10);
  if ( BusDescription >= 0 )
  {
    v13 = Destination;
    BusDescription = pIoQueryBusDescription(
                       (unsigned int)v14,
                       (unsigned int)&v13,
                       (_DWORD)Handle,
                       (unsigned int)&v15,
                       1);
    ZwClose(Handle);
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( BusDescription == -2147483622 )
    return -1073741772;
  return BusDescription;
}
