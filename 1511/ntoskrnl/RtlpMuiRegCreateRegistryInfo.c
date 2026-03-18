/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x140538D04
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14013AA88 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72746C6Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  *v1 |= 0x400u;
  return v1;
}
