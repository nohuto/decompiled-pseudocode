/*
 * XREFs of BgkGetConsoleState @ 0x1406DE168
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401B6428 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401B6444 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140305D88 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
