/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140082458
 * Callers:
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiZeroPageWrite @ 0x140112300 (MiZeroPageWrite.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
