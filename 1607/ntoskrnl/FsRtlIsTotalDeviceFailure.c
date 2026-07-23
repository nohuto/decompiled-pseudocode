/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x14008E8B4
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MmIsWriteErrorFatal @ 0x14008E84C (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x14008E8D8 (MiIsRetryIoStatus.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
