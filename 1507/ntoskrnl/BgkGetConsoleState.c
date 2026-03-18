/*
 * XREFs of BgkGetConsoleState @ 0x1407611E8
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401F139C (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401F13D8 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140353B00 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
