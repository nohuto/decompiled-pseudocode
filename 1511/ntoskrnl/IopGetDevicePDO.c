/*
 * XREFs of IopGetDevicePDO @ 0x1400988E8
 * Callers:
 *     IoAllowExecution @ 0x1400988B0 (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     IoRegisterContainerNotification @ 0x140546F70 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x1405FB94C (IopGetNumaNodeInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x140098944 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
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
