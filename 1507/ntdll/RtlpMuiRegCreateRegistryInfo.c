/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1800E6F30
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180048F5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 168LL);
  if ( result )
    *result |= 0x400u;
  return result;
}
