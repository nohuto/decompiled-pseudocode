/*
 * XREFs of RtlpComputeExePath @ 0x180067A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180067D58 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rbx
  __int64 v2; // rdx
  void *v3; // rcx
  __int64 result; // rax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( a1 )
  {
    v2 = 3LL;
    v3 = &unk_1801026C0;
  }
  else
  {
    v2 = 4LL;
    v3 = &unk_1801026A0;
  }
  result = RtlpComputePath(v3, v2, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
