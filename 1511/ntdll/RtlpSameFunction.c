/*
 * XREFs of RtlpSameFunction @ 0x1800A47C4
 * Callers:
 *     RtlpWalkFrameChain @ 0x180032E80 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x1800370C0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x180033E20 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800E9CAC (RtlpLookupPrimaryFunctionEntry.c)
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
