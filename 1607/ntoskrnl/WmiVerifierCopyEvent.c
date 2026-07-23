/*
 * XREFs of WmiVerifierCopyEvent @ 0x140224738
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x14071D0D8 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall WmiVerifierCopyEvent(unsigned int *Src)
{
  SIZE_T v2; // rsi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  v2 = *Src;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, Src, (unsigned int)v2);
  return v4;
}
