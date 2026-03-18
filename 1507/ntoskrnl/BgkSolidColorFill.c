/*
 * XREFs of BgkSolidColorFill @ 0x1401F1314
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     BgkpAcquireConsole @ 0x1401F139C (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned __int64 v5; // rtt

  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(_QWORD, char *))(qword_140353B00 + 16))(0LL, &Palette[4 * a5]);
    (*(void (**)(void))(qword_140353B00 + 8))();
    _m_prefetchw(&stru_14031EF18);
    v5 = stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_14031EF18,
                 (stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&stru_14031EF18);
  }
}
