/*
 * XREFs of RtlpInitCurrentDir @ 0x18006FD88
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlpCreateNewDirectoryReference @ 0x18006FDF8 (RtlpCreateNewDirectoryReference.c)
 */

__int64 __fastcall RtlpInitCurrentDir(unsigned __int16 *a1)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int v2; // eax
  __int64 v3; // r11
  int v4; // eax
  __int64 result; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v2 = RtlDetermineDosPathNameType_Ustr(a1) - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v7 = v4 - 1;
      if ( !v7 )
        return 3221225485LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225485LL;
      v9 = v8 - 1;
      if ( !v9 || (unsigned int)(v9 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  result = RtlpCreateNewDirectoryReference(v3, ProcessParameters->CurrentDirectory.DosPath.MaximumLength, &v10);
  if ( (int)result >= 0 )
  {
    v6 = v10;
    RtlpCurDirRef = v10;
    ProcessParameters->CurrentDirectory.Handle = (void *)v10[1];
    ProcessParameters->CurrentDirectory.DosPath.Buffer = (unsigned __int16 *)v6[4];
    ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v6 + 12);
    return 0LL;
  }
  return result;
}
