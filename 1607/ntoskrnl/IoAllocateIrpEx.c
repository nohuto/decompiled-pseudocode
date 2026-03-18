/*
 * XREFs of IoAllocateIrpEx @ 0x14002E0D4
 * Callers:
 *     FsRtlGetFileSize @ 0x14042C454 (FsRtlGetFileSize.c)
 *     FsRtlQueryKernelEaFile @ 0x1404CE198 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x1404E8D6C (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404ED434 (FsRtlSetFileSize.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DA90 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x14061EA48 (FsRtlQueryInformationFile.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return pIoAllocateIrp(a1, a2, a3, retaddr);
}
