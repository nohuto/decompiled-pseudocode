/*
 * XREFs of QueryExternalTranslatorInterface @ 0x1C0072594
 * Callers:
 *     AcpiCheckExternalConnection @ 0x1C00686C0 (AcpiCheckExternalConnection.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     RegisterExternalTranslatorInterface @ 0x1C0072810 (RegisterExternalTranslatorInterface.c)
 */

__int64 QueryExternalTranslatorInterface()
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  _DWORD *PoolWithTag; // rdi
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  PIRP v6; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  void *FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF

  AttachedDeviceReference = 0LL;
  ObjectAttributes.Length = 48;
  DestinationString.Buffer = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  PoolWithTag = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  if ( Status == -1073741772 )
  {
    if ( !AcpiIsBootComplete )
    {
LABEL_26:
      if ( DestinationString.Buffer )
        ExFreePoolWithTag(DestinationString.Buffer, 0x58706341u);
      return (unsigned int)Status;
    }
    ZwLoadDriver((PUNICODE_STRING)&ResourceHubDriver);
    Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  }
  if ( Status < 0 )
    goto LABEL_26;
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, &Object, 0LL);
  v3 = (PDEVICE_OBJECT *)Object;
  ZwClose(FileHandle);
  if ( Status < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(v3[1]);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x58706341u);
  if ( PoolWithTag
    && (DestinationString.MaximumLength = 42,
        (DestinationString.Buffer = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x2AuLL, 0x58706341u)) != 0LL) )
  {
    RtlCopyUnicodeString(&DestinationString, &ResourceHubDeviceName);
    memset(PoolWithTag, 0, 0x78uLL);
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_WORD *)PoolWithTag + 16) = 80;
    v4 = RootDeviceExtension;
    *PoolWithTag = 65656;
    v5 = *(_QWORD *)(v4 + 712);
    *((_QWORD *)PoolWithTag + 11) = AcpiExternalInterfaceUnload;
    *((_QWORD *)PoolWithTag + 13) = AcpiAllocateGsivForSecondaryInterrupt;
    *((_QWORD *)PoolWithTag + 12) = &AcpiGetFullyQualifiedBiosName;
    *((_QWORD *)PoolWithTag + 10) = v5;
    *((_QWORD *)PoolWithTag + 14) = AcpiUpdateInterruptProperties;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x2AC028u,
           AttachedDeviceReference,
           PoolWithTag,
           0x78u,
           PoolWithTag,
           0x78u,
           0,
           &Event,
           &IoStatusBlock);
    if ( !v6 )
    {
LABEL_20:
      Status = -1073741811;
      goto LABEL_14;
    }
    v6->IoStatus.Status = -1073741637;
    Status = IofCallDriver(AttachedDeviceReference, v6);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( *((_WORD *)PoolWithTag + 1) && *(_WORD *)PoolWithTag >= 0x78u && *((_QWORD *)PoolWithTag + 7) )
      {
        RegisterExternalTranslatorInterface(PoolWithTag, v3, &DestinationString);
        goto LABEL_14;
      }
      goto LABEL_20;
    }
  }
  else
  {
    Status = -1073741670;
  }
LABEL_14:
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( Status < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x58706341u);
    goto LABEL_26;
  }
  return (unsigned int)Status;
}
