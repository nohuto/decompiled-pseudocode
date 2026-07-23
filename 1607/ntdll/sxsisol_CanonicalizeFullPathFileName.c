/*
 * XREFs of sxsisol_CanonicalizeFullPathFileName @ 0x18001BACC
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019120 (RtlGetFullPathName_UstrEx.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall sxsisol_CanonicalizeFullPathFileName(
        PUNICODE_STRING FileName,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString)
{
  bool v3; // r14
  RTL_PATH_TYPE v7; // r11d
  NTSTATUS FullPathName_Ustr; // ebx
  PUNICODE_STRING v9; // rcx
  _UNICODE_STRING v10; // xmm0
  unsigned __int16 v11; // ax
  wchar_t *v12; // rcx
  wchar_t *Buffer; // rax
  _UNICODE_STRING v15; // [rsp+40h] [rbp-10h]
  RTL_PATH_TYPE InputPathType; // [rsp+70h] [rbp+20h] BYREF
  PUNICODE_STRING StringUsed; // [rsp+88h] [rbp+38h] BYREF

  StringUsed = 0LL;
  v3 = 0;
  if ( !FileName || DynamicString && DynamicString->Buffer )
  {
    FullPathName_Ustr = -1073741811;
  }
  else
  {
    v7 = (unsigned int)RtlDetermineDosPathNameType_Ustr(FileName);
    InputPathType = v7;
    if ( ((v7 - 1) & 0xFFFFFFFA) != 0 || v7 == RtlPathTypeRelative )
      goto LABEL_11;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          FileName,
                          StaticString,
                          DynamicString,
                          &StringUsed,
                          0LL,
                          0LL,
                          &InputPathType,
                          0LL);
    if ( FullPathName_Ustr >= 0 )
    {
      v9 = StringUsed;
      v10 = *StringUsed;
      v15 = *StringUsed;
      if ( InputPathType == RtlPathTypeLocalDevice && (Buffer = FileName->Buffer, Buffer[5] == 58) && Buffer[6] == 92 )
      {
        v15.Buffer += 4;
        FileName->Buffer = Buffer + 4;
        FileName->Length -= 8;
        v11 = v15.Length - 8;
        FileName->MaximumLength -= 8;
        v15.MaximumLength -= 8;
        v15.Length -= 8;
        v10 = v15;
      }
      else
      {
        v11 = (unsigned __int16)*StringUsed;
      }
      if ( FileName->Length > v11 )
      {
        v3 = v9 == DynamicString;
        *FileName = v10;
      }
LABEL_11:
      FullPathName_Ustr = 0;
      if ( v3 )
        return (unsigned int)FullPathName_Ustr;
    }
  }
  v12 = DynamicString->Buffer;
  if ( v12 )
  {
    NtdllpFreeStringRoutine(v12);
    *(_QWORD *)&DynamicString->Length = 0LL;
    DynamicString->Buffer = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
