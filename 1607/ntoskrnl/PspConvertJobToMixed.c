/*
 * XREFs of PspConvertJobToMixed @ 0x1406805BC
 * Callers:
 *     PspBindProcessSessionToJob @ 0x1404D65B4 (PspBindProcessSessionToJob.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 480) != -2 )
  {
    if ( !PsIsCurrentThreadInServerSilo() || (*(_DWORD *)(a1 + 1304) & 0x10) != 0 )
      return 3221225506LL;
    *(_DWORD *)(a1 + 480) = -2;
  }
  return 0LL;
}
