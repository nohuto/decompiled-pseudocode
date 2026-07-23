/*
 * XREFs of PiEventRemovalOpenHandleVeto @ 0x14064D4CC
 * Callers:
 *     PiEventQueryRemoveDevices @ 0x14064D0B4 (PiEventQueryRemoveDevices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpCollectOpenHandles @ 0x14064299C (PnpCollectOpenHandles.c)
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
