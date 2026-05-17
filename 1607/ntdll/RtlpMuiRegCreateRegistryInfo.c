/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1800F4370
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xA8uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
