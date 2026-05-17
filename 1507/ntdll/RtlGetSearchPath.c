/*
 * XREFs of RtlGetSearchPath @ 0x180075A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x180036C64 (RtlpGetCachedPath.c)
 */

__int64 __fastcall RtlGetSearchPath(_QWORD *a1)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(&RtlpSearchPath, (char *)RtlpComputeSearchPath, 0LL, 0LL);
  if ( CachedPath )
  {
    *a1 = CachedPath + 112;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
}
