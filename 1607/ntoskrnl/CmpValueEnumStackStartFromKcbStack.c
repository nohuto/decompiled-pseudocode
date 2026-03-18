/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14060B718
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5C7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B8B0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BC84 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C000 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  __int16 v8[40]; // [rsp+20h] [rbp-68h] BYREF

  CmpInitializeKeyNodeStack(v8);
  started = CmpStartKeyNodeStackFromKcbStack(v8, a2, a3);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v8);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack(v8);
  return (unsigned int)started;
}
