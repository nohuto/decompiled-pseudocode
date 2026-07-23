/*
 * XREFs of RtlpLoadNlsData @ 0x180048DB4
 * Callers:
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18001F710 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18004A190 (RtlGetParentLocaleName.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18006A20C (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800E04F0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x180048E90 (RtlGetLocaleFileMappingAddress.c)
 */

char RtlpLoadNlsData()
{
  _WORD *Heap; // rbx
  ULONG *v1; // r9
  unsigned int *v2; // rdx
  char *v3; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DefaultCasingTableSize; // [rsp+38h] [rbp+10h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &gSystemLocale, &DefaultCasingTableSize, v1) >= 0 )
    {
      v2 = (unsigned int *)((char *)BaseAddress + *((unsigned int *)BaseAddress + 4));
      v3 = (char *)v2 + *v2;
      Heap[4] = *((_WORD *)v3 + 12);
      Heap[6] = *((_WORD *)v3 + 11);
      Heap[5] = *((_WORD *)v3 + 16);
      Heap[28] = *((_WORD *)v3 + 13);
      *((_QWORD *)Heap + 2) = (char *)v2 + *((unsigned int *)v3 + 7);
      *((_QWORD *)Heap + 3) = (char *)v2 + *((unsigned int *)v3 + 9);
      *((_QWORD *)Heap + 4) = (char *)v2 + *((unsigned int *)v3 + 10);
      *((_QWORD *)Heap + 5) = (char *)v2 + *((unsigned int *)v3 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, (signed __int64)Heap, 0LL) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
