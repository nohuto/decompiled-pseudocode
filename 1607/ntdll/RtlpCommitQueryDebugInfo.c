/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x18006DF8C
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x18006D5E4 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B50 (RtlQueryProcessHeapInformation.c)
 *     RtlpWalkCallbackRoutine @ 0x180096190 (RtlpWalkCallbackRoutine.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180096360 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlCommitDebugInfo @ 0x1800D4E90 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D4EB0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5040 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D549C (RtlpCopyRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800D71BC (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  char *v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9] + ((a2 + 7) & 0xFFFFFFF8);
    v4 = a1[10];
    if ( v3 <= v4 )
    {
LABEL_6:
      result = (char *)a1 + a1[9];
      a1[9] = v3;
      return result;
    }
    if ( v3 < a1[11] )
    {
      v7 = (char *)a1 + v4;
      v6 = v3 - v4;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v6, 4096, 4) >= 0 )
      {
        a1[10] += v6;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
