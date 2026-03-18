/*
 * XREFs of PiEventRemovalOpenHandleVeto @ 0x14064D3E8
 * Callers:
 *     PiEventQueryRemoveDevices @ 0x14064CFD0 (PiEventQueryRemoveDevices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     PnpCollectOpenHandles @ 0x1406428B8 (PnpCollectOpenHandles.c)
 */

void __fastcall PiEventRemovalOpenHandleVeto(
        unsigned int a1,
        _QWORD **a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        _DWORD *a5,
        UNICODE_STRING *DestinationString)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v9; // rbx

  *a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v9 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(DeviceNode + 40));
    ObfDereferenceObject(v9);
  }
  else
  {
    RtlInitUnicodeString(DestinationString, 0LL);
  }
}
