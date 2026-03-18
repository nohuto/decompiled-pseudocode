/*
 * XREFs of IopGetDevicePDO @ 0x1400D0E98
 * Callers:
 *     IoAllowExecution @ 0x1400D0E60 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x14067607C (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x1400D0EF4 (IopGetDeviceAttachmentBase.c)
 */

_DWORD *__fastcall IopGetDevicePDO(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *DeviceAttachmentBase; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (_DWORD *)IopGetDeviceAttachmentBase(a1);
  v4 = DeviceAttachmentBase;
  if ( (DeviceAttachmentBase[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
