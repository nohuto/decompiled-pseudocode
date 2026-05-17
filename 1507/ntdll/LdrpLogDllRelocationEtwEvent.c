/*
 * XREFs of LdrpLogDllRelocationEtwEvent @ 0x180073784
 * Callers:
 *     LdrpRelocateImage @ 0x180073308 (LdrpRelocateImage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

_UNKNOWN **__fastcall LdrpLogDllRelocationEtwEvent(const void **a1, void *a2, void *a3, void *a4)
{
  _UNKNOWN **result; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( MEMORY[0x7FFE0384] )
  {
    v9 = *(unsigned __int16 *)a1 + 64;
    result = (_UNKNOWN **)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v9);
    v10 = (unsigned __int64)result;
    if ( result )
    {
      result[4] = a2;
      result[5] = a3;
      *((_WORD *)result + 3) = 5152;
      result[6] = a4;
      memmove(result + 7, a1[1], *(unsigned __int16 *)a1);
      *(_WORD *)(v10 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1) + 56) = 0;
      NtTraceEvent(MEMORY[0x7FFE0384], 1026LL, v9 - 32, v10);
      return (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  return result;
}
