/*
 * XREFs of WmiVerifierCopyEvent @ 0x14025C064
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140754AF8 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
