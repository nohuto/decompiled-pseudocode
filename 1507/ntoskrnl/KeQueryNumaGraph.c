/*
 * XREFs of KeQueryNumaGraph @ 0x1407B5CFC
 * Callers:
 *     MiComputeNumaCosts @ 0x1407E8E94 (MiComputeNumaCosts.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID KeQueryNumaGraph()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  v0 = 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x616D754Eu);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, KiNodeGraph, v0);
  return v2;
}
