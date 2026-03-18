/*
 * XREFs of BgkSetCursor @ 0x14072A1E0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401C3F00 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401C3F1C (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140328CC8 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
