/*
 * XREFs of KeQueryNumaGraph @ 0x140742E8C
 * Callers:
 *     MiComputeNumaCosts @ 0x140772310 (MiComputeNumaCosts.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
