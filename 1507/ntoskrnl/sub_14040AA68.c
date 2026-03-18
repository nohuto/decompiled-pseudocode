/*
 * XREFs of sub_14040AA68 @ 0x14040AA68
 * Callers:
 *     sub_14040A8FC @ 0x14040A8FC (sub_14040A8FC.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_14040AA68(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
