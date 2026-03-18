/*
 * XREFs of BgkDisplayStringEx @ 0x1401F1188
 * Callers:
 *     BgkDisplayString @ 0x1401F10DC (BgkDisplayString.c)
 *     NtDisplayString @ 0x1406EFD70 (NtDisplayString.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x14015F390 (HeadlessDispatch.c)
 *     BgkpAcquireConsole @ 0x1401F139C (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x14075C83C (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl
  unsigned __int64 v5; // rtt

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
  if ( byte_1403539A0 || byte_1403539A1 )
  {
    byte_1403539A0 = 0;
    byte_1403539A1 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140353B00 + 24))(a1) >= 0;
  _m_prefetchw(&stru_14031EF18);
  v5 = stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_14031EF18,
               (stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
               stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&stru_14031EF18);
  return v4;
}
