/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x1400FB710
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     IopGetDevicePDO @ 0x1400FB6B4 (IopGetDevicePDO.c)
 *     IopVerifyDriverObjectOnStack @ 0x1401C557C (IopVerifyDriverObjectOnStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetDeviceAttachmentBase(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rcx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
