/*
 * XREFs of BgkDisplayStringEx @ 0x1401C3C3C
 * Callers:
 *     BgkDisplayString @ 0x1401C3B90 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1406ACF94 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 *     BgkpAcquireConsole @ 0x1401C3DE4 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x140725814 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(0x17u, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_140328D12 || byte_140328D10 )
  {
    byte_140328D12 = 0;
    byte_140328D10 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140328D08 + 24))(a1) >= 0;
  ExReleaseRundownProtection(&stru_1402F6F98);
  return v4;
}
