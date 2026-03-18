/*
 * XREFs of IoAllocateIrpEx @ 0x1400DF48C
 * Callers:
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404A2234 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x1405F46E4 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x1406BFEA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return pIoAllocateIrp(a1, a2, a3, retaddr);
}
