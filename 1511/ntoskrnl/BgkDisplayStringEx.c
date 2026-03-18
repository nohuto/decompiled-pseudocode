/*
 * XREFs of BgkDisplayStringEx @ 0x1401B627C
 * Callers:
 *     BgkDisplayString @ 0x1401B61D0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x14066C5FC (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     HeadlessDispatch @ 0x1401340E0 (HeadlessDispatch.c)
 *     BgkpAcquireConsole @ 0x1401B6428 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x1406D97F4 (BgDisplayFade.c)
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
  if ( byte_140305C20 || byte_140305C21 )
  {
    byte_140305C20 = 0;
    byte_140305C21 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140305D88 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_1402CFD78);
  return v4;
}
