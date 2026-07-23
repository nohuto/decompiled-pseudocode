/*
 * XREFs of RtlpSameFunction @ 0x180078BD4
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800326C0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180033690 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x180078C3C (RtlpLookupPrimaryFunctionEntry.c)
 */

unsigned int *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, char *a3)
{
  _DWORD *v4; // rdi
  unsigned int *result; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v7);
  v6 = 0LL;
  if ( result )
  {
    if ( *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(result, v8) )
      return v4;
    return (unsigned int *)v6;
  }
  return result;
}
