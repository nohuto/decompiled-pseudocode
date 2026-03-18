/*
 * XREFs of IoAllocateIrpEx @ 0x1400484C4
 * Callers:
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x14074169C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return pIoAllocateIrp(a1, a2, a3, retaddr);
}
