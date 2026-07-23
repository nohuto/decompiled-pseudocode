/*
 * XREFs of RtlpSameFunction @ 0x180011420
 * Callers:
 *     RtlVirtualUnwind @ 0x180011740 (RtlVirtualUnwind.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlpWalkFrameChain @ 0x1800126E0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180014200 (RtlUnwindEx.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x180011488 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800136F0 (RtlpLookupFunctionEntryForStackWalks.c)
 */

__int64 __fastcall RtlpSameFunction(__int64 a1, __int64 a2, void *a3)
{
  _DWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  result = RtlpLookupFunctionEntryForStackWalks(a3);
  v6 = 0LL;
  if ( result )
  {
    if ( *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(result, 0LL) )
      return (__int64)v4;
    return v6;
  }
  return result;
}
