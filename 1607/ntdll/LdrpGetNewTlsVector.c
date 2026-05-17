/*
 * XREFs of LdrpGetNewTlsVector @ 0x180051498
 * Callers:
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x1800512B4 (LdrpAllocateTls.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

_DWORD *__fastcall LdrpGetNewTlsVector(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx

  result = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 8LL * a1 + 16);
  v3 = result;
  if ( result )
  {
    *result = a1;
    memset(result + 4, 0, 8LL * a1);
    return v3 + 4;
  }
  return result;
}
