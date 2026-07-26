/*
 * XREFs of ndisAllocatePerProcessorPageDescriptor @ 0x1C0016780
 * Callers:
 *     ndisAllocatePerProcessorSlot @ 0x1C001013C (ndisAllocatePerProcessorSlot.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C00FC0F4 (ndisInitializePerProcessorSlotAllocator.c)
 * Callees:
 *     <none>
 */

_DWORD *ndisAllocatePerProcessorPageDescriptor()
{
  _DWORD *PoolWithTag; // rdx
  _DWORD *result; // rax
  unsigned int *v2; // r8
  __int64 v3; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (ndisMaxNumberOfProcessors + 1) << 12, 0x6D61444Eu);
  result = 0LL;
  if ( PoolWithTag )
  {
    v2 = PoolWithTag + 5;
    do
    {
      v3 = (unsigned int)((_DWORD)result + 1);
      *v2++ = ((_DWORD)result + 1) | 0xFE000000;
      LODWORD(result) = v3;
    }
    while ( (unsigned int)v3 < 0x1FF );
    PoolWithTag[v3 + 5] = -16777217;
    result = PoolWithTag;
    PoolWithTag[4] = -33554432;
  }
  return result;
}
