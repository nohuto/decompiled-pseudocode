/*
 * XREFs of BgkSolidColorFill @ 0x1401C3E9C
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     BgkpAcquireConsole @ 0x1401C3F00 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_140328CC8 + 16))(0LL, &Palette[4 * a5]);
      (*(void (**)(void))(qword_140328CC8 + 8))();
      ExReleaseRundownProtection(&stru_1402F6F98);
    }
  }
}
