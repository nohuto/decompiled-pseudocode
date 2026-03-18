/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x140609FD4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14060A060 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14060B8B0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14060BC84 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14060C000 (CmpStartKeyNodeStackFromKcbStack.c)
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
