/*
 * XREFs of sxsisol_CanonicalizeFullPathFileName @ 0x1800259F8
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180060240 (RtlGetFullPathName_UstrEx.c)
 */

__int64 __fastcall sxsisol_CanonicalizeFullPathFileName(
        PUNICODE_STRING FileName,
        __int64 StaticString,
        PUNICODE_STRING DynamicString)
{
  bool v3; // r14
  _UNICODE_STRING *v5; // rbx
  RTL_PATH_TYPE v7; // r11d
  NTSTATUS FullPathName_Ustr; // ebx
  PUNICODE_STRING v9; // rcx
  _UNICODE_STRING v10; // xmm0
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rcx
  unsigned __int16 *Buffer; // rax
  _UNICODE_STRING v15; // [rsp+40h] [rbp-10h]
  RTL_PATH_TYPE InputPathType; // [rsp+70h] [rbp+20h] BYREF
  PUNICODE_STRING StringUsed; // [rsp+88h] [rbp+38h] BYREF

  StringUsed = 0LL;
  v3 = 0;
  v5 = (_UNICODE_STRING *)StaticString;
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
                          v5,
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
        StaticString = 65528LL;
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
    NtdllpFreeStringRoutine(v12, StaticString, DynamicString);
    *(_QWORD *)&DynamicString->Length = 0LL;
    DynamicString->Buffer = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
