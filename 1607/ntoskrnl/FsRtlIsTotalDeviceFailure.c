/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x14008F154
 * Callers:
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MmIsWriteErrorFatal @ 0x14008F0EC (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x14008F178 (MiIsRetryIoStatus.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
