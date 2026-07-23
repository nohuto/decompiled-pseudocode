/*
 * XREFs of RtlQueryApplicationKeyOption @ 0x18007EF90
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D28C8 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall RtlQueryApplicationKeyOption(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 result; // rax

  if ( a1
    && ((result = RtlQueryImageFileKeyOption(a1, a6, 0LL), (((_DWORD)result + 0x80000000) & 0x80000000) != 0)
     || (_DWORD)result == -2147483643) )
  {
    if ( a8 )
      *a8 = a1;
  }
  else if ( a2
         && ((result = RtlQueryImageFileKeyOption(a2, a6, 0LL), (((_DWORD)result + 0x80000000) & 0x80000000) != 0)
          || (_DWORD)result == -2147483643) )
  {
    if ( a8 )
      *a8 = a2;
  }
  else
  {
    return 3221225485LL;
  }
  return result;
}
