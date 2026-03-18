/*
 * XREFs of BgkSolidColorFill @ 0x1401B63C4
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1401B6428 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_140305D88 + 16))(0LL, &Palette[4 * a5]);
      (*(void (**)(void))(qword_140305D88 + 8))();
      ExReleaseRundownProtection_0(&stru_1402CFD78);
    }
  }
}
