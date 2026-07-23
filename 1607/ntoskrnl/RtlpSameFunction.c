/*
 * XREFs of RtlpSameFunction @ 0x140159958
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x1400B0FB8 (RtlVirtualUnwind.c)
 *     RtlpVirtualUnwind @ 0x1400F125C (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400F2B50 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140050EE0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x1400F4070 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x140211BB8 (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, DWORD64 a3)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  PRUNTIME_FUNCTION v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  v5 = 0LL;
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v6 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    v7 = ImageBase;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v6 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
    if ( !v6 )
      return 0LL;
    v7 = v10;
  }
  if ( !v6 )
    return 0LL;
  if ( *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v4;
  return (_DWORD *)v5;
}
