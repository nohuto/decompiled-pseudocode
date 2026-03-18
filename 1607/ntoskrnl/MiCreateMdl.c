/*
 * XREFs of MiCreateMdl @ 0x1400FCB40
 * Callers:
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 * Callees:
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FCBB0 (MmBuildMdlForNonPagedPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

struct _MDL *__fastcall MiCreateMdl(SIZE_T Length)
{
  ULONG v1; // ebx
  PVOID PoolWithTag; // rax
  void *v3; // rdi
  struct _MDL *Mdl; // rax
  struct _MDL *v5; // rbx

  v1 = Length;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x78786D4Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    Mdl = IoAllocateMdl(PoolWithTag, v1, 0, 0, 0LL);
    v5 = Mdl;
    if ( Mdl )
    {
      MmBuildMdlForNonPagedPool(Mdl);
      v5->MdlFlags |= 0x4000u;
      return v5;
    }
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
