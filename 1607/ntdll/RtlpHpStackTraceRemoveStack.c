/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x1800F87F4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1800F847C (RtlpHpStackTraceAllocRemove.c)
 *     RtlStackDbStackRemove @ 0x180101F28 (RtlStackDbStackRemove.c)
 */

__int64 __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, char *a2)
{
  volatile signed __int64 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v3 = (volatile signed __int64 *)(a1 + 136);
  else
    v3 = (volatile signed __int64 *)(a1 + 368);
  result = RtlRunOnceExecuteOnce(
             v3,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
             0LL,
             &v8);
  if ( (int)result >= 0 && v8 )
  {
    result = RtlpHpStackTraceAllocRemove(v8, a2, v5, v6);
    if ( result )
      return RtlStackDbStackRemove(v7, result);
  }
  return result;
}
