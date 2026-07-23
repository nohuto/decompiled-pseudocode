/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x14060A088
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A114 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B964 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BD38 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C0B4 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF

  CmpInitializeKeyNodeStack(v7);
  started = CmpStartKeyNodeStackFromKcbStack(v7, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v7, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack(v7);
  return (unsigned int)started;
}
