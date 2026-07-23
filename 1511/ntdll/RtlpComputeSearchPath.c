/*
 * XREFs of RtlpComputeSearchPath @ 0x180072D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180072FAC (RtlpComputePath.c)
 *     RtlpLookupCurDirSetting @ 0x18007354C (RtlpLookupCurDirSetting.c)
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
      v0 = dword_180146200;
      if ( !dword_180146200 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_1801026B8);
    }
  }
  result = RtlpComputePath((char *)&unk_180102610 + 16 * v0, 4LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
