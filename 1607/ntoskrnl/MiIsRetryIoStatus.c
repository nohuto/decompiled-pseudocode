/*
 * XREFs of MiIsRetryIoStatus @ 0x14008E8D8
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiZeroPageWrite @ 0x14006AE64 (MiZeroPageWrite.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiLogFailedDriverLoad @ 0x140659484 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x14008E8B4 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
