/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1800EB5F0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18003E2C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA8uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
