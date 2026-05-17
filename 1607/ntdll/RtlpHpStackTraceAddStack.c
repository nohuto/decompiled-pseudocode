/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800F80E4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlCaptureStackBackTrace @ 0x1800325B0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpMetadataFree @ 0x18004F71C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x1801018D4 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180101F28 (RtlStackDbStackRemove.c)
 */

PVOID *__fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rcx
  PVOID *result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v3 = (volatile signed __int64 *)(a1 + 136);
  else
    v3 = (volatile signed __int64 *)(a1 + 368);
  result = (PVOID *)RtlRunOnceExecuteOnce(
                      v3,
                      (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
                      0LL,
                      &v10);
  if ( (int)result >= 0 )
  {
    if ( v10 )
    {
      result = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0);
      v5 = (unsigned __int64)result;
      if ( result )
      {
        if ( RtlCaptureStackBackTrace(3u, 0xC0u, result, 0LL) )
        {
          v7 = RtlStackDbStackAdd(v6, v5);
          v9 = v7;
          if ( !v7 || (unsigned int)RtlpHpStackTraceAllocAdd(v10, a2, v7) )
            v9 = 0LL;
          if ( v9 )
            RtlStackDbStackRemove(v8, v9);
        }
        return (PVOID *)RtlpHpMetadataFree(v5);
      }
    }
  }
  return result;
}
