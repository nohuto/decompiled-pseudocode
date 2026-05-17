/*
 * XREFs of RtlGetExePath @ 0x180009210
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x18000CAF0 (RtlpGetCachedPath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800196D0 (RtlQueryEnvironmentVariable.c)
 *     wcschr @ 0x18009C590 (wcschr.c)
 */

__int64 __fastcall RtlGetExePath(const wchar_t *a1, _QWORD *a2)
{
  _BOOL8 v3; // r8
  __int64 CachedPath; // rax

  v3 = !wcschr(a1, 0x5Cu)
    && (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 34LL) != -1073741568;
  CachedPath = RtlpGetCachedPath(&RtlpExeSearchPath, RtlpComputeExePath, v3, 0LL);
  if ( CachedPath )
  {
    *a2 = CachedPath + 112;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225495LL;
  }
}
