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

__int64 __fastcall RtlpSameFunction(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = RtlpLookupFunctionEntryForStackWalks(a3, &v7);
  v6 = 0LL;
  if ( result )
  {
    if ( *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(result, v8) )
      return (__int64)v4;
    return v6;
  }
  return result;
}
