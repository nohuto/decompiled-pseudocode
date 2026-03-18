/*
 * XREFs of AcpiSetupNativeMethodInterface @ 0x1C00722E0
 * Callers:
 *     ACPIDispatchAddDevice @ 0x1C0087270 (ACPIDispatchAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 AcpiSetupNativeMethodInterface()
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  NTSTATUS Status; // ebx
  PVOID v2; // rsi
  __int64 v3; // rcx
  PIRP v4; // rax
  void *FileHandle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD OutputBuffer[6]; // [rsp+C8h] [rbp-40h] BYREF

  AttachedDeviceReference = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  if ( Status < 0 )
    return (unsigned int)Status;
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, &Object, 0LL);
  ZwClose(FileHandle);
  v2 = Object;
  if ( Status >= 0 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
    if ( AttachedDeviceReference )
    {
      memset(OutputBuffer, 0, sizeof(OutputBuffer));
      OutputBuffer[1] = 0uLL;
      LOWORD(OutputBuffer[2]) = 64;
      LODWORD(OutputBuffer[0]) = 65632;
      v3 = *(_QWORD *)(RootDeviceExtension + 712);
      *((_QWORD *)&OutputBuffer[4] + 1) = AcpiReflectNativeObject;
      *(_QWORD *)&OutputBuffer[5] = AcpiNativeNotifyEventHandler;
      *(_QWORD *)&OutputBuffer[4] = v3;
      *((_QWORD *)&OutputBuffer[5] + 1) = AcpiTranslatePepDeviceControlResources;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v4 = IoBuildDeviceIoControlRequest(
             0x2AC200u,
             AttachedDeviceReference,
             OutputBuffer,
             0x60u,
             OutputBuffer,
             0x60u,
             0,
             &Event,
             &IoStatusBlock);
      if ( !v4 )
        goto LABEL_20;
      v4->IoStatus.Status = -1073741637;
      Status = IofCallDriver(AttachedDeviceReference, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
        goto LABEL_14;
      if ( WORD1(OutputBuffer[0])
        && LOWORD(OutputBuffer[0]) >= 0x60u
        && *((_QWORD *)&OutputBuffer[2] + 1)
        && *(_QWORD *)&OutputBuffer[3]
        && *((_QWORD *)&OutputBuffer[3] + 1) )
      {
        AcpiPlExtNativeMethodInterface = OutputBuffer[0];
        xmmword_1C0059630 = OutputBuffer[1];
        unk_1C0059640 = OutputBuffer[2];
        xmmword_1C0059650 = OutputBuffer[3];
        xmmword_1C0059660 = OutputBuffer[4];
        xmmword_1C0059670 = OutputBuffer[5];
        ObfReferenceObjectWithTag(AttachedDeviceReference, 0x4E706341u);
        Status = 0;
      }
      else
      {
LABEL_20:
        Status = -1073741811;
      }
    }
    else
    {
      Status = -1073741823;
    }
  }
LABEL_14:
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
