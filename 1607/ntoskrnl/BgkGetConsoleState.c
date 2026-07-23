/*
 * XREFs of BgkGetConsoleState @ 0x14072A154
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401C3DE4 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401C3E00 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140328D08 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
