/*
 * XREFs of BgkSetCursor @ 0x1406DE1F4
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401B6428 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401B6444 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140305D88 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
