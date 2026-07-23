/*
 * XREFs of RtlGetSearchPath @ 0x180082FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x18002FB34 (RtlpGetCachedPath.c)
 */

NTSTATUS __cdecl RtlGetSearchPath(PWSTR *SearchPathA)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(
                 &RtlpSearchPath,
                 (__int64 (__fastcall *)(__int64, __int64))RtlpComputeSearchPath,
                 0LL,
                 0LL);
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
