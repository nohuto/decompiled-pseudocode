/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x140489AA0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x1405F46E4 (FsRtlQueryInformationFile.c)
 *     VerifierFsRtlCancellableWaitForSingleObject @ 0x1406C0488 (VerifierFsRtlCancellableWaitForSingleObject.c)
 * Callees:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14048BD50 (FsRtlCancellableWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  PVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = Object;
  return FsRtlCancellableWaitForMultipleObjects(1u, &v4, WaitAll, Timeout, 0LL, Irp);
}
