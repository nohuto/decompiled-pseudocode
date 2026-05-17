/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18005F1F0
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x180001718 (RtlpCheckRelativeDrive.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18005F11C (RtlpWow64ThunkEnvironment32To64.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA2C0 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800196D0 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(_WORD *a1, const wchar_t **a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             a1,
             a2[1],
             (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
             *(_WORD **)(a3 + 8),
             (unsigned __int64)*(unsigned __int16 *)(a3 + 2) >> 1,
             (__int64)&v6);
  v5 = v6;
  if ( v6 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v5 = v6 - 1;
  *(_WORD *)a3 = 2 * v5;
  return result;
}
