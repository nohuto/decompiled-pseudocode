/*
 * XREFs of sub_14051DFC8 @ 0x14051DFC8
 * Callers:
 *     sub_14051D780 @ 0x14051D780 (sub_14051D780.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14051DCA4 (ExpHwidSendSynchronousIrpToDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 */

PDEVICE_OBJECT __fastcall sub_14051DFC8(struct _DEVICE_OBJECT *a1)
{
  PDEVICE_OBJECT result; // rax

  result = IoGetDeviceAttachmentBaseRef(a1);
  if ( !result || (result->Flags & 0x1000) == 0 )
    return 0LL;
  return result;
}
