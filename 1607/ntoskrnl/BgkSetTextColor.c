/*
 * XREFs of BgkSetTextColor @ 0x1401C3E58
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     BgkpAcquireConsole @ 0x1401C3F00 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140328CC8 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection(&stru_1402F6F98);
  }
  return 0LL;
}
