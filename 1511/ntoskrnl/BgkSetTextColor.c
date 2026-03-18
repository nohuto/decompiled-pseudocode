/*
 * XREFs of BgkSetTextColor @ 0x1401B6380
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1401B6428 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140305D88 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection_0(&stru_1402CFD78);
  }
  return 0LL;
}
