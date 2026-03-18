/*
 * XREFs of PspConvertJobToMixed @ 0x140131A84
 * Callers:
 *     PspBindProcessSessionToJob @ 0x14041BBAC (PspBindProcessSessionToJob.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 480) != -2 )
  {
    if ( !PsIsCurrentThreadInServerSilo() || (*(_DWORD *)(a1 + 1296) & 0x10) != 0 )
      return 3221225506LL;
    *(_DWORD *)(a1 + 480) = -2;
  }
  return 0LL;
}
