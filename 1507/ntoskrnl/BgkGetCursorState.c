/*
 * XREFs of BgkGetCursorState @ 0x140761220
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401F139C (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401F13D8 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_140353B00 + 48))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
