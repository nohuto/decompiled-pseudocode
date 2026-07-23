/*
 * XREFs of RtlpDeCommitQueryDebugInfo @ 0x1800D5714
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x18006D5D4 (RtlQueryProcessModuleInformation.c)
 *     RtlDeCommitDebugInfo @ 0x1800D4F60 (RtlDeCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D4F70 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5100 (RtlQueryProcessLockInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800D727C (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDeCommitQueryDebugInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  if ( a3 <= 0xFFFFFFF8 )
  {
    v3 = *(_QWORD *)(a1 + 72) - ((a3 + 7) & 0xFFFFFFF8);
    result = v3 + a1;
    if ( a2 == v3 + a1 )
      *(_QWORD *)(a1 + 72) = v3;
  }
  return result;
}
