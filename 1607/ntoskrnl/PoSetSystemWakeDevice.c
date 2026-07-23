/*
 * XREFs of PoSetSystemWakeDevice @ 0x1401FF2D4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     PopUpdateWakeSource @ 0x140205744 (PopUpdateWakeSource.c)
 */

PDEVICE_OBJECT __fastcall PoSetSystemWakeDevice(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax
  PDEVICE_OBJECT v2; // rbx

  result = IoGetDeviceAttachmentBaseRef(a1);
  v2 = result;
  if ( result )
  {
    PopUpdateWakeSource(result);
    return (PDEVICE_OBJECT)ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return result;
}
