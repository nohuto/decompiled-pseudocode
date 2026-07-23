/*
 * XREFs of BgkDisplayCharacter @ 0x14072A0A8
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1401C3DE4 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401C3E00 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140328D12 || byte_140328D10 )
  {
    byte_140328D12 = 0;
    byte_140328D10 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140328D08 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
