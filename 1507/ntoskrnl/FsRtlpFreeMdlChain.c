/*
 * XREFs of FsRtlpFreeMdlChain @ 0x14066D930
 * Callers:
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 */

void __fastcall FsRtlpFreeMdlChain(PMDL Mdl)
{
  PMDL v1; // rbx
  struct _MDL *Next; // rdi

  if ( Mdl )
  {
    v1 = Mdl;
    do
    {
      Next = v1->Next;
      if ( (v1->MdlFlags & 2) != 0 )
        MmUnlockPages(v1);
      IoFreeMdl(v1);
      v1 = Next;
    }
    while ( Next );
  }
}
