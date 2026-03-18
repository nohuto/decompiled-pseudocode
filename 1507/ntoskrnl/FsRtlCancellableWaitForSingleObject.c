/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x14051D328
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     VerifierFsRtlCancellableWaitForSingleObject @ 0x140741C7C (VerifierFsRtlCancellableWaitForSingleObject.c)
 * Callees:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14051F530 (FsRtlCancellableWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  PVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = Object;
  return FsRtlCancellableWaitForMultipleObjects(1u, &v4, WaitAll, Timeout, 0LL, Irp);
}
