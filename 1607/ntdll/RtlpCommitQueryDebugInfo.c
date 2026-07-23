/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x18006DF7C
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x18006D5D4 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x180095B40 (RtlQueryProcessHeapInformation.c)
 *     RtlpWalkCallbackRoutine @ 0x180096180 (RtlpWalkCallbackRoutine.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180096350 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlCommitDebugInfo @ 0x1800D4F50 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D4F70 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D5100 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D555C (RtlpCopyRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800D727C (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  ULONG_PTR v6; // [rsp+50h] [rbp+18h] BYREF
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
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v7, 0LL, &v6, 0x1000u, 4u) >= 0 )
      {
        a1[10] += v6;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
