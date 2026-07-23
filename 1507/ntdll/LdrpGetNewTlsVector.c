/*
 * XREFs of LdrpGetNewTlsVector @ 0x180055D74
 * Callers:
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180055B88 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     memset @ 0x180098540 (memset.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}
