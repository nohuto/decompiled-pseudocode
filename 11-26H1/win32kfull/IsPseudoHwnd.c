/*
 * XREFs of IsPseudoHwnd @ 0x1401F8FCC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowBand @ 0x14027A3C0 (NtUserSetWindowBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPseudoHwnd(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 0xFFFF || a1 <= 1 || a1 >= 0xFFFFFFFFFFFFFFFDuLL )
    return 1LL;
  return result;
}
