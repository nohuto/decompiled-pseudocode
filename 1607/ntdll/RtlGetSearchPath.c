/*
 * XREFs of RtlGetSearchPath @ 0x1800093A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x18000CAE0 (RtlpGetCachedPath.c)
 */

NTSTATUS __cdecl RtlGetSearchPath(PWSTR *SearchPathA)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(&RtlpSearchPath, RtlpComputeSearchPath, 0LL, 0LL);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 112);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
