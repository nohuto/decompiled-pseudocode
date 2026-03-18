/*
 * XREFs of HvlpAllocatePageListResources @ 0x1405F6F70
 * Callers:
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 HvlpAllocatePageListResources()
{
  unsigned int v0; // ebx
  PVOID PoolWithTag; // rax

  v0 = -1073741670;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x204C5648u);
  HvlpHibernateScratchPage = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1000uLL);
    return 0;
  }
  return v0;
}
