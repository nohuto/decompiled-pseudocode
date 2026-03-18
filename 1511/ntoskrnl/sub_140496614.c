/*
 * XREFs of sub_140496614 @ 0x140496614
 * Callers:
 *     sub_140495970 @ 0x140495970 (sub_140495970.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_140496614(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
