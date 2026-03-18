/*
 * XREFs of IoWMIDeviceObjectToInstanceName @ 0x140582B84
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x140582B10 (IoWMIHandleToInstanceName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140582C64 (WmipGetGuidObjectInstanceInfo.c)
 */

NTSTATUS __stdcall IoWMIDeviceObjectToInstanceName(
        PVOID DataBlockObject,
        PDEVICE_OBJECT DeviceObject,
        PUNICODE_STRING InstanceName)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbp
  NTSTATUS GuidObjectInstanceInfo; // ebx
  SIZE_T v7; // rdx
  wchar_t *PoolWithTag; // rax
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  GuidObjectInstanceInfo = WmipGetGuidObjectInstanceInfo(DataBlockObject, DeviceAttachmentBaseRef, &UnicodeString, &v12);
  if ( GuidObjectInstanceInfo >= 0 )
  {
    v7 = (unsigned __int16)(UnicodeString.Length + 32);
    InstanceName->MaximumLength = v7;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x49696D57u);
    InstanceName->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlStringCbPrintfW(PoolWithTag, InstanceName->MaximumLength, L"%ws_%d", UnicodeString.Buffer, v12);
      v9 = -1LL;
      do
        ++v9;
      while ( InstanceName->Buffer[v9] );
      GuidObjectInstanceInfo = 0;
      InstanceName->Length = 2 * v9;
    }
    else
    {
      GuidObjectInstanceInfo = -1073741670;
    }
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  return GuidObjectInstanceInfo;
}
