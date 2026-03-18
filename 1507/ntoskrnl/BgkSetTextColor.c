/*
 * XREFs of BgkSetTextColor @ 0x1401F12B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     BgkpAcquireConsole @ 0x1401F139C (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rtt

  v1 = a1;
  if ( a1 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(char *, _QWORD))(qword_140353B00 + 16))(&Palette[4 * v1], 0LL);
      _m_prefetchw(&stru_14031EF18);
      v2 = stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v2 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&stru_14031EF18,
                   (stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                   stru_14031EF18.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&stru_14031EF18);
    }
  }
  return 0LL;
}
