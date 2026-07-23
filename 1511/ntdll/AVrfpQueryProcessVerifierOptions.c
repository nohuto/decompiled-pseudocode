/*
 * XREFs of AVrfpQueryProcessVerifierOptions @ 0x1800CF24C
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18006CDEC (RtlpCommitQueryDebugInfo.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18008E440 (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall AVrfpQueryProcessVerifierOptions(_QWORD *a1)
{
  int v3; // r10d
  char *DebugInfo; // rax
  __int64 v5; // rdi
  unsigned int v6; // ecx
  PRTL_DYNAMIC_HASH_TABLE v7; // rbx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v3 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, _QWORD))qword_180142158)(0LL, &v8, 0LL);
  if ( v3 == -1073741820 )
  {
    DebugInfo = RtlpCommitQueryDebugInfo(a1, v8);
    v5 = (__int64)DebugInfo;
    if ( DebugInfo )
    {
      v6 = v8;
      v7 = qword_180142158;
      v9 = v8;
      *((_DWORD *)DebugInfo + 1) = 0;
      *(_DWORD *)DebugInfo = v6;
      v3 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, char *))v7)(0LL, &v9, DebugInfo);
      if ( v3 >= 0 )
        a1[18] = v5;
      else
        RtlpDeCommitQueryDebugInfo((__int64)a1, v5, v8);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
