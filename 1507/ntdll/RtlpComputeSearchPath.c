/*
 * XREFs of RtlpComputeSearchPath @ 0x180067AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x180068300 (RtlpLookupCurDirSetting.c)
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
      v0 = dword_180147168;
      if ( !dword_180147168 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180102748);
    }
  }
  result = RtlpComputePath((char *)&unk_1801026A0 + 16 * v0, 4LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
