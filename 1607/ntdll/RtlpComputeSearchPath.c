/*
 * XREFs of RtlpComputeSearchPath @ 0x180009100
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupCurDirSetting @ 0x1800093E0 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x18000CD74 (RtlpComputePath.c)
 */

__int64 RtlpComputeSearchPath()
{
  int v0; // eax
  unsigned __int64 EnvironmentVersion; // rbx
  __int64 result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_180153354;
      if ( !dword_180153354 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_1801080C0);
    }
  }
  result = RtlpComputePath((char *)&unk_18010C030 + 16 * v0, 4LL, 0LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
