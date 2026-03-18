/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140030778
 * Callers:
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MmIsWriteErrorFatal @ 0x140030710 (MmIsWriteErrorFatal.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiZeroPageWrite @ 0x1400E0134 (MiZeroPageWrite.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
